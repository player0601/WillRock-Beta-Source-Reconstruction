
/* from: wr_stats.cpp
   addr: 0049EC00 */

int __fastcall wrStatInit(void)

{
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)wrSysStat,0x24534e44,10);
  return 1;
}




/* from: wr_stats.cpp
   addr: 0049EC20 */

void __fastcall wrStatTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)wrSysStat);
  wrSysStat = (wrSTAT_SYSTEM *)0x0;
  return;
}




/* from: wr_stats.cpp
   addr: 0049EC40 */

wrSTAT * __thiscall wrSTAT_SYSTEM::GetPlayerStat(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
      return (wrSTAT *)0x0;
    }
  }
  return (wrSTAT *)(iVar1 * 0x200 + *(int *)(this + 0x120));
}




/* from: wr_stats.cpp
   addr: 0049ECC0 */

int __thiscall
wrSTAT_SYSTEM::ProcessMsg
          (wrSTAT_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrSTAT_SYSTEM *pwVar4;
  undefined4 *puVar5;
  
  switch(param_1) {
  case 1000:
    iVar1 = 0;
    *(float *)(this + 0xa8) = gsElapsedTime + *(float *)(this + 0xa8);
    if (0 < *(int *)(this + 0x11c)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(this + 0x120) + iVar3;
        if (*(int *)(*(int *)(this + 0x120) + 0x1f8 + iVar3) != 0) {
          *(float *)(iVar2 + 0x40) = gsElapsedTime + *(float *)(iVar2 + 0x40);
          iVar2 = (**(code **)(**(int **)(*(int *)(this + 0x120) + 0x1fc + iVar3) + 0x78))();
          if (iVar2 == 0) {
            *(float *)(*(int *)(this + 0x120) + 0x50 + iVar3) =
                 gsElapsedTime + *(float *)(*(int *)(this + 0x120) + 0x50 + iVar3);
            iVar2 = *(int *)(this + 0x120) + iVar3;
            if (*(float *)(iVar2 + 0x54) < *(float *)(iVar2 + 0x50)) {
              *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 0x50);
            }
          }
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x200;
      } while (iVar1 < *(int *)(this + 0x11c));
      return 0;
    }
    break;
  case 0x3ef:
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
    gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
    iVar3 = 0;
    pwVar4 = this + 0x94;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar4 = 0;
      pwVar4 = pwVar4 + 4;
    }
    pwVar4 = this + 0xd8;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar4 = 0;
      pwVar4 = pwVar4 + 4;
    }
    if (0 < *(int *)(this + 0x11c)) {
      iVar1 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(this + 0x120) + iVar1);
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x200;
      } while (iVar3 < *(int *)(this + 0x11c));
      return 0;
    }
    break;
  case 0x3f1:
    pwVar4 = this + 0xd8;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar4 = 0;
      pwVar4 = pwVar4 + 4;
    }
    return 0;
  case 0x3f2:
    AddCurToLev(this);
    iVar3 = 0;
    pwVar4 = this + 0x94;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar4 = 0;
      pwVar4 = pwVar4 + 4;
    }
    if (0 < *(int *)(this + 0x11c)) {
      iVar1 = 0;
      do {
        iVar3 = iVar3 + 1;
        puVar5 = (undefined4 *)(*(int *)(this + 0x120) + 0x58 + iVar1);
        iVar1 = iVar1 + 0x200;
        for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      } while (iVar3 < *(int *)(this + 0x11c));
      return 0;
    }
    break;
  case 0x3f5:
    AddCurToLev(this);
    iVar3 = 0;
    pwVar4 = this + 0x94;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pwVar4 = 0;
      pwVar4 = pwVar4 + 4;
    }
    if (0 < *(int *)(this + 0x11c)) {
      iVar1 = 0;
      do {
        iVar3 = iVar3 + 1;
        puVar5 = (undefined4 *)(*(int *)(this + 0x120) + 0x58 + iVar1);
        iVar1 = iVar1 + 0x200;
        for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      } while (iVar3 < *(int *)(this + 0x11c));
      return 0;
    }
    break;
  case 0x40c:
    (**(code **)(*(int *)this + 0x3c))(param_2);
  }
  return 0;
}




/* from: wr_stats.cpp
   addr: 0049EF20 */

void __thiscall wrSTAT_SYSTEM::ProcessMP_NOTIFY(wrSTAT_SYSTEM *this,gsEVENT *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  wrSTAT_SYSTEM *pwVar5;
  undefined4 *puVar6;
  
  if ((*(int *)(param_1 + 4) == -100) && (*(int *)(gsSysMP + 0x28) == 1)) {
    iVar1 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(this + 0x11c);
    puVar4 = (undefined4 *)(iVar1 + 8);
    pwVar5 = this + 0x94;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pwVar5 = pwVar5 + 4;
    }
    puVar4 = (undefined4 *)(iVar1 + 0x4c);
    pwVar5 = this + 0xd8;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pwVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pwVar5 = pwVar5 + 4;
    }
    if (iVar3 == 0) {
      Notify_AddPlayer(this,(plrPLAYER_COMMON *)plrPlayer);
    }
    puVar4 = (undefined4 *)(iVar1 + 0x90);
    puVar6 = (undefined4 *)(*(int *)(this + 0x120) + 0x58);
    for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = (undefined4 *)(iVar1 + 0x160);
    puVar6 = (undefined4 *)(*(int *)(this + 0x120) + 0x128);
    for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_stats.cpp
   addr: 0049EFB0 */

void __thiscall wrSTAT_SYSTEM::ProcessMP_GET_SYNC_DATA(wrSTAT_SYSTEM *this,void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  wrSTAT_SYSTEM *pwVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_0060f0a0 & 1) == 0) {
      DAT_0060f0a0 = DAT_0060f0a0 | 1;
      DAT_0060f0a8._0_1_ = 0;
      DAT_0060f0a8._1_1_ = 0x40;
      DAT_0060f0ac = 0xffffffff;
      DAT_0060f0b0 = 0;
      DAT_0060f0b4 = 0;
      _DAT_0060f0b8 = 0;
      _DAT_0060f0bc = 0;
      _DAT_0060f0c0 = 0;
      _DAT_0060f0c4 = 0;
      DAT_0060f0f4 = 0;
      DAT_0060f0f8 = 0;
      _DAT_0060f0fc = 0;
      _DAT_0060f100 = 0;
      _DAT_0060f104 = 0;
      _DAT_0060f108 = 0;
      DAT_0060f138 = 0;
      DAT_0060f13c = 0;
      _DAT_0060f140 = 0;
      _DAT_0060f144 = 0;
      _DAT_0060f148 = 0;
      _DAT_0060f14c = 0;
      _DAT_0060f150 = 0;
      _DAT_0060f154 = 0;
      puVar1 = &DAT_0060f160;
      iVar2 = 0xb;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_0060f208 = 0;
      DAT_0060f20c = 0;
      _DAT_0060f210 = 0;
      _DAT_0060f214 = 0;
      _DAT_0060f218 = 0;
      _DAT_0060f21c = 0;
      _DAT_0060f220 = 0;
      _DAT_0060f224 = 0;
      puVar1 = &DAT_0060f230;
      iVar2 = 0xb;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_0060f0a8._2_2_ = 0x230;
      atexit((_func_4879 *)&__E38);
    }
    puVar1 = &DAT_0060f0a8;
    *(undefined4 **)param_1 = &DAT_0060f0a8;
  }
  pwVar3 = this + 0x94;
  puVar4 = puVar1 + 2;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  pwVar3 = this + 0xd8;
  puVar4 = puVar1 + 0x13;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(*(int *)(this + 0x120) + 0x58);
  puVar5 = puVar1 + 0x24;
  for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(*(int *)(this + 0x120) + 0x128);
  puVar1 = puVar1 + 0x58;
  for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: wr_stats.cpp
   addr: 0049F150 */

void __thiscall
wrSTAT_SYSTEM::ProcessMP_WRITE_SYNC_DATA(wrSTAT_SYSTEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  wrSTAT_MSG_DATA *pwVar1;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  pwVar1 = *(wrSTAT_MSG_DATA **)param_1;
  local_6 = 0xffffffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  WriteMsgStat(this,pwVar1,param_1,1);
  fioFILE::UpdateChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf1,(fioCHUNK *)&local_10);
  WriteMsgStat(this,pwVar1,param_1,0);
  fioFILE::UpdateChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  fioFILE::WriteLastChunk(*(fioFILE **)(param_1 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_stats.cpp
   addr: 0049F1F0 */

void __thiscall
wrSTAT_SYSTEM::ProcessMP_READ_SYNC_DATA(wrSTAT_SYSTEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  wrSTAT_SYSTEM *this_00;
  wrSTAT_WPN *this_01;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  wrSTAT_MSG_DATA *pwVar4;
  short local_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined4 local_242;
  undefined4 local_23e;
  wrSTAT_SYSTEM *local_238;
  wrSTAT_MSG_DATA *local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  wrSTAT_WPN local_180 [176];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [176];
  
  local_248 = 0;
  uStack_246 = 0xffff;
  uStack_244 = 0xffff;
  local_242 = 0xffffffff;
  local_23e = 0xffffffff;
  pwVar4 = *(wrSTAT_MSG_DATA **)param_1;
  local_238 = this;
  if (*(wrSTAT_MSG_DATA **)param_1 == (wrSTAT_MSG_DATA *)0x0) {
    if ((DAT_0060f0a0 & 1) == 0) {
      DAT_0060f0a0 = DAT_0060f0a0 | 1;
      DAT_0060f0a8._0_1_ = 0;
      DAT_0060f0a8._1_1_ = 0x40;
      DAT_0060f0ac = 0xffffffff;
      DAT_0060f0a8._2_2_ = 8;
      DAT_0060f0b0 = 0;
      DAT_0060f0b4 = 0;
      _DAT_0060f0b8 = 0;
      _DAT_0060f0bc = 0;
      _DAT_0060f0c0 = 0;
      _DAT_0060f0c4 = 0;
      DAT_0060f0f4 = 0;
      DAT_0060f0f8 = 0;
      _DAT_0060f0fc = 0;
      _DAT_0060f100 = 0;
      _DAT_0060f104 = 0;
      _DAT_0060f108 = 0;
      DAT_0060f138 = 0;
      DAT_0060f13c = 0;
      _DAT_0060f140 = 0;
      _DAT_0060f144 = 0;
      _DAT_0060f148 = 0;
      _DAT_0060f14c = 0;
      _DAT_0060f150 = 0;
      _DAT_0060f154 = 0;
      _vector_constructor_iterator_(&DAT_0060f158,0x10,0xb,wrSTAT_WPN::wrSTAT_WPN);
      wrSTAT_PLAYER::wrSTAT_PLAYER((wrSTAT_PLAYER *)&DAT_0060f208);
      DAT_0060f0a8._2_2_ = 0x230;
      atexit((_func_4879 *)&__E38);
    }
    local_22c = 0xffffffff;
    local_230._2_2_ = 8;
    local_234 = (wrSTAT_MSG_DATA *)&DAT_0060f0a8;
    *(undefined4 **)param_1 = &DAT_0060f0a8;
    local_230._0_1_ = 0;
    local_230._1_1_ = 0x40;
    local_228 = 0;
    local_224 = 0;
    local_220 = 0;
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_1e4 = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1d0 = 0;
    local_1a0 = 0;
    local_19c = 0;
    local_198 = 0;
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = 0;
    local_184 = 0;
    this_01 = local_180;
    iVar2 = 0xb;
    do {
      wrSTAT_WPN::wrSTAT_WPN(this_01);
      this_01 = this_01 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    _vector_constructor_iterator_(local_b0,0x10,0xb,wrSTAT_WPN::wrSTAT_WPN);
    local_230._2_2_ = 0x230;
    puVar1 = &local_230;
    puVar3 = &DAT_0060f0a8;
    for (iVar2 = 0x8c; pwVar4 = local_234, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  this_00 = local_238;
  iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_248);
  do {
    if ((iVar2 == 0) || (local_248 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this_00,(camCAMERA *)param_1);
      return;
    }
    if (local_248 == 0xf0) {
      iVar2 = 1;
LAB_0049f49b:
      ReadMsgStat(this_00,pwVar4,param_1,iVar2);
    }
    else if (local_248 == 0xf1) {
      iVar2 = 0;
      goto LAB_0049f49b;
    }
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_248);
  } while( true );
}




/* from: wr_stats.cpp
   addr: 0049F4D0 */

void __thiscall
wrSTAT_SYSTEM::WriteMsgStat
          (wrSTAT_SYSTEM *this,wrSTAT_MSG_DATA *param_1,gsMSG_MP_SAVELOAD *param_2,int param_3)

{
  wrSTAT_MSG_DATA *pwVar1;
  wrSTAT_MSG_DATA *pwVar2;
  wrSTAT_MSG_DATA *pwVar3;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  local_1e = 0xffff;
  uStack_1c = 0xffff;
  local_1a = 0xffffffff;
  local_16 = 0xffff;
  uStack_14 = 0xffff;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  local_20 = 0;
  local_10 = 0;
  if (param_3 == 0) {
    pwVar1 = param_1 + 0x4c;
    pwVar2 = param_1 + 0x160;
  }
  else {
    pwVar1 = param_1 + 8;
    pwVar2 = param_1 + 0x90;
  }
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4d8,(fioCHUNK *)&local_20);
  pwVar3 = pwVar2 + 0x24;
  param_1 = (wrSTAT_MSG_DATA *)0xb;
  do {
    fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x8c0,(fioCHUNK *)&local_10);
    (**(code **)(**(int **)(param_2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&uStack_1c);
    fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x8c1,(fioCHUNK *)&uStack_1c);
    uStack_4 = (undefined2)*(undefined4 *)pwVar3;
    uStack_2 = (undefined2)((uint)*(undefined4 *)pwVar3 >> 0x10);
    (**(code **)(**(int **)(param_2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffd8);
    fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x8c2,(fioCHUNK *)&stack0xffffffd8);
    (**(code **)(**(int **)(param_2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_10);
    fioFILE::WriteLastChunk(*(fioFILE **)(param_2 + 4));
    pwVar3 = pwVar3 + 0x10;
    param_1 = param_1 + -1;
  } while (param_1 != (wrSTAT_MSG_DATA *)0x0);
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_20);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4d9,(fioCHUNK *)&local_20);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffd4);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4da,(fioCHUNK *)&stack0xffffffd4);
  uStack_8 = (undefined2)*(undefined4 *)pwVar2;
  local_6 = (undefined2)((uint)*(undefined4 *)pwVar2 >> 0x10);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffc8);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4db,(fioCHUNK *)&stack0xffffffc8);
  uStack_14 = (undefined2)*(undefined4 *)(pwVar1 + 0x14);
  uStack_12 = (undefined2)((uint)*(undefined4 *)(pwVar1 + 0x14) >> 0x10);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4dc,(fioCHUNK *)&stack0xffffffbc);
  local_20 = (undefined2)*(undefined4 *)(pwVar2 + 0x18);
  local_1e = (undefined2)((uint)*(undefined4 *)(pwVar2 + 0x18) >> 0x10);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffb0);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4dd,(fioCHUNK *)&stack0xffffffb0);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffffa4);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4de,(fioCHUNK *)&stack0xffffffa4);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))(&stack0xffffffc8,4);
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffff98);
  fioFILE::WriteChunk(*(fioFILE **)(param_2 + 4),0x4df,(fioCHUNK *)&stack0xffffff98);
  (**(code **)(**(int **)(param_2 + 4) + 0x18))(&stack0xffffffbc,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&stack0xffffff8c);
  fioFILE::WriteLastChunk(*(fioFILE **)(param_2 + 4));
  return;
}




/* from: wr_stats.cpp
   addr: 0049F7A0 */

void __thiscall
wrSTAT_SYSTEM::ReadMsgStat
          (wrSTAT_SYSTEM *this,wrSTAT_MSG_DATA *param_1,gsMSG_MP_SAVELOAD *param_2,int param_3)

{
  wrSTAT_MSG_DATA *pwVar1;
  int iVar2;
  int iVar3;
  wrSTAT_MSG_DATA *pwVar4;
  wrSTAT_MSG_DATA *pwVar5;
  short local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  uStack_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  local_10 = 0;
  if (param_3 == 0) {
    pwVar4 = param_1 + 0x4c;
    pwVar1 = param_1 + 0x160;
  }
  else {
    pwVar1 = param_1 + 0x90;
    pwVar4 = param_1 + 8;
  }
  iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_10);
  do {
    if ((iVar2 == 0) || (local_10 == 1)) {
      return;
    }
    switch(local_10) {
    case 0x4d8:
      pwVar5 = pwVar1 + 0x24;
      iVar2 = 0xb;
      do {
        iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_10);
        while ((iVar3 != 0 && (local_10 != 1))) {
          if (local_10 == 0x8c0) {
            (**(code **)(**(int **)(param_2 + 4) + 0x14))(pwVar5 + -4,4,4);
          }
          else if (local_10 == 0x8c1) {
            (**(code **)(**(int **)(param_2 + 4) + 0x14))(pwVar5,4,4);
          }
          else if (local_10 == 0x8c2) {
            (**(code **)(**(int **)(param_2 + 4) + 0x14))(pwVar5 + 8,4,4);
          }
          iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_10);
        }
        pwVar5 = pwVar5 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      goto switchD_0049f824_default;
    case 0x4d9:
      pwVar5 = pwVar4;
      break;
    case 0x4da:
      (**(code **)(**(int **)(param_2 + 4) + 0x14))(pwVar1,4,4);
      goto switchD_0049f824_default;
    case 0x4db:
      pwVar5 = pwVar4 + 0x14;
      break;
    case 0x4dc:
      pwVar5 = pwVar1 + 0x18;
      break;
    case 0x4dd:
      pwVar5 = pwVar4 + 0x10;
      break;
    case 0x4de:
      pwVar5 = pwVar1 + 0x1c;
      break;
    case 0x4df:
      pwVar5 = pwVar4 + 4;
      break;
    default:
      goto switchD_0049f824_default;
    }
    (**(code **)(**(int **)(param_2 + 4) + 0x14))(pwVar5,4,4);
switchD_0049f824_default:
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_2 + 4),(fioCHUNK *)&local_10);
  } while( true );
}




/* from: wr_stats.cpp
   addr: 0049F930 */

void __thiscall wrSTAT_SYSTEM::Notify_NPCDie(wrSTAT_SYSTEM *this,ulong param_1)

{
  int *piVar1;
  entIACTIVE_OBJ *peVar2;
  int iVar3;
  
  peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,param_1,0);
  if ((peVar2 == (entIACTIVE_OBJ *)0x0) || (*(int *)(peVar2 + 0x14) != 0x504c5952)) {
    peVar2 = (entIACTIVE_OBJ *)plrPlayer;
  }
  iVar3 = *(int *)((plrPLAYER *)peVar2 + 0x2c3);
  if ((iVar3 < 0) || (*(int *)(this + 0x11c) <= iVar3)) {
    if ((((byte)((plrPLAYER *)peVar2)[0x2a3] & 0x10) == 0) &&
       (*(int *)((plrPLAYER *)peVar2 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,peVar2,(msgADDR *)0x0);
      *(uint *)((plrPLAYER *)peVar2 + 0x2a3) = *(uint *)((plrPLAYER *)peVar2 + 0x2a3) | 0x10;
    }
    iVar3 = *(int *)((plrPLAYER *)peVar2 + 0x2c3);
    if (iVar3 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar3) {
      return;
    }
  }
  iVar3 = iVar3 * 0x200 + *(int *)(this + 0x120);
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 0x58);
    *piVar1 = *piVar1 + 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_stats.cpp
   addr: 0049F9D0 */

void __thiscall wrSTAT_SYSTEM::Notify_NPCDmg(wrSTAT_SYSTEM *this,ulong param_1,int param_2)

{
  entIACTIVE_OBJ *peVar1;
  int iVar2;
  
  peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,param_1,0);
  if ((peVar1 != (entIACTIVE_OBJ *)0x0) && (*(int *)(peVar1 + 0x14) == 0x504c5952)) {
    iVar2 = *(int *)(peVar1 + 0x2c3);
    if ((iVar2 < 0) || (*(int *)(this + 0x11c) <= iVar2)) {
      if ((((byte)peVar1[0x2a3] & 0x10) == 0) && (*(int *)(peVar1 + 0x94) == 1)) {
        msgSYSTEM::SendAll(&msgSystem,0x407,peVar1,(msgADDR *)0x0);
        *(uint *)(peVar1 + 0x2a3) = *(uint *)(peVar1 + 0x2a3) | 0x10;
      }
      iVar2 = *(int *)(peVar1 + 0x2c3);
      if (iVar2 < 0) {
        return;
      }
      if (*(int *)(this + 0x11c) <= iVar2) {
        return;
      }
    }
    iVar2 = iVar2 * 0x200 + *(int *)(this + 0x120);
    if (iVar2 != 0) {
      *(float *)(param_2 * 0x10 + 0x7c + iVar2) =
           *(float *)(param_2 * 0x10 + 0x7c + iVar2) + ___real_3f800000;
    }
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FA80 */

void __thiscall wrSTAT_SYSTEM::Notify_CreateItem(wrSTAT_SYSTEM *this,int param_1,float param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    *(float *)(this + param_1 * 4 + 0xac) = param_2 + *(float *)(this + param_1 * 4 + 0xac);
    return;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    *(float *)(this + param_1 * 4 + 0x5c) = param_2 + *(float *)(this + param_1 * 4 + 0x5c);
    return;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    *(float *)(this + 0x9c) = param_2 + *(float *)(this + 0x9c);
    return;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    *(float *)(this + 0xa0) = param_2 + *(float *)(this + 0xa0);
    return;
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    *(float *)(this + 0xa4) = param_2 + *(float *)(this + 0xa4);
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FB50 */

void __thiscall
wrSTAT_SYSTEM::Notify_PickItem
          (wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      pfVar2 = (float *)(iVar1 + (param_2 + 8) * 0x10);
      *pfVar2 = param_3 + *pfVar2;
      return;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      pfVar2 = (float *)(iVar1 + (param_2 + -10) * 0x10);
      *pfVar2 = param_3 + *pfVar2;
      return;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
      *(float *)(iVar1 + 0x68) = param_3 + *(float *)(iVar1 + 0x68);
      return;
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      *(float *)(iVar1 + 0x6c) = param_3 + *(float *)(iVar1 + 0x6c);
      return;
    case 0x30:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      *(float *)(iVar1 + 0x70) = param_3 + *(float *)(iVar1 + 0x70);
    }
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FCB0 */

void __thiscall wrSTAT_SYSTEM::Notify_PlrDeath(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FD30 */

void __thiscall
wrSTAT_SYSTEM::Notify_PlrFrag(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + param_2, param_2 < 0)) {
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FDC0 */

void __thiscall wrSTAT_SYSTEM::Notify_PlrHit(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c3);
  if ((iVar2 < 0) || (*(int *)(this + 0x11c) <= iVar2)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar2 = *(int *)(param_1 + 0x2c3);
    if (iVar2 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar2) {
      return;
    }
  }
  iVar2 = iVar2 * 0x200 + *(int *)(this + 0x120);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x4c);
    *piVar1 = *piVar1 + 1;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FE40 */

void __thiscall
wrSTAT_SYSTEM::Notify_PlrUseWpn(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,entENTITY *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    *(float *)(*(int *)(param_2 + 0x94) * 0x10 + 0x84 + iVar1) =
         gsElapsedTime + *(float *)(*(int *)(param_2 + 0x94) * 0x10 + 0x84 + iVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_stats.cpp
   addr: 0049FEE0 */

void __thiscall
wrSTAT_SYSTEM::Notify_PlrShoot(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,entENTITY *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    *(float *)(*(int *)(param_2 + 0x94) * 0x10 + 0x78 + iVar1) =
         *(float *)(*(int *)(param_2 + 0x94) * 0x10 + 0x78 + iVar1) + ___real_3f800000;
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 0049FF80 */

void __thiscall
wrSTAT_SYSTEM::Notify_PlrDmg(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,dmgDAMAGE *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 4) == 3) {
      *(float *)(iVar1 + 0x60) = *(float *)(param_2 + 8) + *(float *)(iVar1 + 0x60);
      return;
    }
    *(float *)(iVar1 + 100) = *(float *)(param_2 + 8) + *(float *)(iVar1 + 100);
  }
  return;
}




/* from: wr_stats.cpp
   addr: 004A0020 */

void __thiscall wrSTAT_SYSTEM::Notify_GameBegin(wrSTAT_SYSTEM *this)

{
  *(undefined4 *)(this + 0x11c) = 0;
  *(void **)(this + 0x120) = (void *)0x0;
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x124),0x200,0x14,(void **)(this + 0x120),0,0);
  return;
}




/* from: wr_stats.cpp
   addr: 004A0050 */

void __thiscall wrSTAT_SYSTEM::Notify_GameEnd(wrSTAT_SYSTEM *this)

{
  if (*(int *)(this + 0x11c) != 0) {
    dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)(this + 0x124));
    *(undefined4 *)(this + 0x11c) = 0;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 004A0080 */

void __thiscall wrSTAT_SYSTEM::Notify_AddPlayer(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x2c3) == -1) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x11c)) {
      iVar3 = 0;
      do {
        iVar1 = apNAME::IsName((apNAME *)(*(int *)(this + 0x120) + iVar3),(char *)(param_1 + 0x44));
        if (iVar1 != 0) {
          if (iVar4 != -1) {
            *(int *)(param_1 + 0x2c3) = iVar4;
            return;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x200;
      } while (iVar4 < *(int *)(this + 0x11c));
    }
    iVar4 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x124),1);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x2c3) = *(undefined4 *)(this + 0x11c);
      *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 1;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2c3) * 0x200 + *(int *)(this + 0x120));
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      pcVar2 = *(char **)(*(int *)(param_1 + 0xbc) + 0x18);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      apNAME::SetName((apNAME *)(*(int *)(param_1 + 0x2c3) * 0x200 + *(int *)(this + 0x120)),pcVar2)
      ;
      *(undefined4 *)(*(int *)(param_1 + 0x2c3) * 0x200 + 0x1f8 + *(int *)(this + 0x120)) = 1;
      *(plrPLAYER_COMMON **)(*(int *)(param_1 + 0x2c3) * 0x200 + 0x1fc + *(int *)(this + 0x120)) =
           param_1;
    }
  }
  return;
}




/* from: wr_stats.cpp
   addr: 004A0190 */

void __thiscall wrSTAT_SYSTEM::Notify_StopPlayer(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c3) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x1fc) = 0;
  }
  return;
}




/* from: wr_stats.cpp
   addr: 004A0230 */

int __thiscall
wrSTAT_SYSTEM::GetMapKills(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return 0;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = *(int *)(this + 0xd8) + *(int *)(this + 0x94);
  return *(int *)(iVar1 + 0x128) + *(int *)(iVar1 + 0x58);
}




/* from: wr_stats.cpp
   addr: 004A02D0 */

int __thiscall
wrSTAT_SYSTEM::GetMapSecrets(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return 0;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = *(int *)(this + 0xdc) + *(int *)(this + 0x98);
  return *(int *)(iVar1 + 0x144) + *(int *)(iVar1 + 0x74);
}




/* from: wr_stats.cpp
   addr: 004A0370 */

int __thiscall
wrSTAT_SYSTEM::GetMapMoney(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return 0;
    }
  }
  if (iVar1 * 0x200 + *(int *)(this + 0x120) == 0) {
    return 0;
  }
  iVar1 = ftol();
  *param_2 = iVar1;
  iVar1 = ftol();
  return iVar1;
}




/* from: wr_stats.cpp
   addr: 004A0410 */

int __thiscall wrSTAT_SYSTEM::GetFavouriteWpn(wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c3);
  if ((iVar1 < 0) || (*(int *)(this + 0x11c) <= iVar1)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar1 = *(int *)(param_1 + 0x2c3);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x11c) <= iVar1) {
      return 0;
    }
  }
  iVar1 = iVar1 * 0x200 + *(int *)(this + 0x120);
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = -1;
  param_1 = (plrPLAYER_COMMON *)0xbf800000;
  iVar2 = 0;
  pfVar3 = (float *)(iVar1 + 0x84);
  do {
    if ((float)param_1 < pfVar3[0x34] + *pfVar3) {
      iVar4 = iVar2;
      param_1 = (plrPLAYER_COMMON *)(pfVar3[0x34] + *pfVar3);
    }
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar2 < 0xb);
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_stats.cpp
   addr: 004A04D0 */

float __thiscall
wrSTAT_SYSTEM::GetShootAccuracy
          (wrSTAT_SYSTEM *this,plrPLAYER_COMMON *param_1,int *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2c3);
  if ((iVar3 < 0) || (*(int *)(this + 0x11c) <= iVar3)) {
    if ((((byte)param_1[0x2a3] & 0x10) == 0) && (*(int *)(param_1 + 0x94) == 1)) {
      msgSYSTEM::SendAll(&msgSystem,0x407,param_1,(msgADDR *)0x0);
      *(uint *)(param_1 + 0x2a3) = *(uint *)(param_1 + 0x2a3) | 0x10;
    }
    iVar3 = *(int *)(param_1 + 0x2c3);
    if (iVar3 < 0) {
      return ___real_00000000;
    }
    if (*(int *)(this + 0x11c) <= iVar3) {
      return ___real_00000000;
    }
  }
  if (iVar3 * 0x200 + *(int *)(this + 0x120) == 0) {
    return ___real_00000000;
  }
  *param_2 = 0;
  *param_3 = 0;
  iVar3 = 0xb;
  do {
    iVar2 = ftol();
    *param_2 = *param_2 + iVar2;
    iVar2 = ftol();
    iVar3 = iVar3 + -1;
    *param_3 = *param_3 + iVar2;
  } while (iVar3 != 0);
  fVar1 = (float)*param_3 / ((float)*param_2 + ___real_3c23d70a);
  if (___real_42c80000 < fVar1) {
    fVar1 = ___real_42c80000;
  }
  return fVar1;
}




/* from: wr_stats.cpp
   addr: 004A05C0 */

void __thiscall wrSTAT_SYSTEM::AddCurToLev(wrSTAT_SYSTEM *this)

{
  wrSTAT_SYSTEM *pwVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  
  *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + *(int *)(this + 0x94);
  *(float *)(this + 0xe0) = *(float *)(this + 0x9c) + *(float *)(this + 0xe0);
  iVar3 = 0xb;
  *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + *(int *)(this + 0x98);
  *(float *)(this + 0xe4) = *(float *)(this + 0xa0) + *(float *)(this + 0xe4);
  *(float *)(this + 0xe8) = *(float *)(this + 0xa4) + *(float *)(this + 0xe8);
  *(float *)(this + 0xec) = *(float *)(this + 0xa8) + *(float *)(this + 0xec);
  pwVar1 = this + 0xf0;
  do {
    iVar3 = iVar3 + -1;
    *(float *)pwVar1 = *(float *)(pwVar1 + -0x44) + *(float *)pwVar1;
    pwVar1 = pwVar1 + 4;
  } while (iVar3 != 0);
  iVar3 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    piVar2 = (int *)(*(int *)(this + 0x120) + 0x128);
    do {
      *piVar2 = *piVar2 + piVar2[-0x34];
      piVar2[2] = (int)((float)piVar2[-0x32] + (float)piVar2[2]);
      piVar2[1] = piVar2[1] + piVar2[-0x33];
      piVar2[3] = (int)((float)piVar2[-0x31] + (float)piVar2[3]);
      piVar2[7] = piVar2[7] + piVar2[-0x2d];
      iVar5 = 0xb;
      piVar2[4] = (int)((float)piVar2[-0x30] + (float)piVar2[4]);
      piVar2[5] = (int)((float)piVar2[-0x2f] + (float)piVar2[5]);
      piVar2[6] = (int)((float)piVar2[-0x2e] + (float)piVar2[6]);
      pfVar4 = (float *)(piVar2 + 10);
      do {
        iVar5 = iVar5 + -1;
        *pfVar4 = pfVar4[-0x34] + *pfVar4;
        pfVar4[-2] = pfVar4[-0x36] + pfVar4[-2];
        pfVar4[-1] = pfVar4[-0x35] + pfVar4[-1];
        pfVar4[1] = pfVar4[-0x33] + pfVar4[1];
        pfVar4 = pfVar4 + 4;
      } while (iVar5 != 0);
      piVar2 = piVar2 + 0x80;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x11c));
  }
  return;
}




/* from: wr_stats.cpp
   addr: 004A0720
   addr: 004A0720 */

void __thiscall wrSTAT_WPN::wrSTAT_WPN(wrSTAT_WPN *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: wr_stats.cpp
   addr: 004A0730 */

void __thiscall wrSTAT_PLAYER::wrSTAT_PLAYER(wrSTAT_PLAYER *this)

{
  wrSTAT_PLAYER *pwVar1;
  int iVar2;
  
  iVar2 = 0xb;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  pwVar1 = this + 0x20;
  do {
    *(undefined4 *)pwVar1 = 0;
    *(undefined4 *)(pwVar1 + 4) = 0;
    *(undefined4 *)(pwVar1 + 8) = 0;
    *(undefined4 *)(pwVar1 + 0xc) = 0;
    pwVar1 = pwVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

