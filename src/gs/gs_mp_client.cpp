
/* from: gs:gs_mp_client.cpp
   addr: 00523730 */

gsMP_CLIENT * __thiscall gsMP_CLIENT::gsMP_CLIENT(gsMP_CLIENT *this)

{
  int iVar1;
  gsMP_CLIENT *pgVar2;
  
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
  this[0x28] = (gsMP_CLIENT)0x0;
  gsMP_CONNECTION::gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  *(undefined4 *)(this + 0x470) = 0;
  pgVar2 = this + 0x484;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pgVar2 = 0;
    pgVar2 = pgVar2 + 4;
  }
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1c) = 10;
  *(undefined4 *)(this + 0x474) = 0xfffffffd;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  return this;
}




/* from: gs:gs_mp_client.cpp
   addr: 005237B0 */

int __thiscall gsMP_CLIENT::InitGame(gsMP_CLIENT *this,int param_1)

{
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  *(int *)(this + 0x470) = param_1;
  if ((param_1 & 1U) != 0) {
    *(uint *)(this + 0x470) = param_1 | 2;
  }
  if (((byte)this[0x470] & 2) != 0) {
    *(undefined4 *)(this + 0x474) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x47c) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  return 1;
}




/* from: gs:gs_mp_client.cpp
   addr: 00523820 */

void __thiscall gsMP_CLIENT::TermGame(gsMP_CLIENT *this)

{
  *(uint *)(this + 0x470) = *(uint *)(this + 0x470) & 0xffffffef;
  gsMP_NETWORK::Client_DisconnectFromGame(gsSysNetwork);
  *(undefined4 *)(this + 0x50c) = 0;
  return;
}




/* from: gs:gs_mp_client.cpp
   addr: 00523850 */

int __thiscall gsMP_CLIENT::AddClient(gsMP_CLIENT *this,entENTITY *param_1)

{
  entENTITY *peVar1;
  
  if (0xf < *(int *)(this + 0x504)) {
    return 0;
  }
  if (param_1 == (entENTITY *)0x0) {
    peVar1 = gsMP_SYSTEM::FindPlrLocal(gsSysMP);
    *(entENTITY **)(this + *(int *)(this + 0x504) * 8 + 0x484) = peVar1;
    *(undefined4 *)(this + *(int *)(this + 0x504) * 8 + 0x488) = 1;
    *(int *)(this + 0x504) = *(int *)(this + 0x504) + 1;
    return 1;
  }
  *(entENTITY **)(this + *(int *)(this + 0x504) * 8 + 0x484) = param_1;
  *(undefined4 *)(this + *(int *)(this + 0x504) * 8 + 0x488) = 0;
  *(int *)(this + 0x504) = *(int *)(this + 0x504) + 1;
  return 1;
}




/* from: gs:gs_mp_client.cpp
   addr: 005238E0 */

void __thiscall gsMP_CLIENT::RemoveClient(gsMP_CLIENT *this,entENTITY *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  gsMP_CLIENT *pgVar4;
  gsMP_CLIENT *pgVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)(this + 0x504);
  if (0 < iVar3) {
    pgVar4 = this + 0x484;
    do {
      if (*(entENTITY **)pgVar4 == param_1) break;
      iVar1 = iVar1 + 1;
      pgVar4 = pgVar4 + 8;
    } while (iVar1 < iVar3);
  }
  if (iVar1 < iVar3) {
    if (iVar1 < iVar3 + -1) {
      pgVar4 = this + iVar1 * 8 + 0x48c;
      pgVar5 = this + iVar1 * 8 + 0x484;
      for (uVar2 = (iVar3 - iVar1) * 8 - 8U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pgVar5 = *(undefined4 *)pgVar4;
        pgVar4 = pgVar4 + 4;
        pgVar5 = pgVar5 + 4;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pgVar5 = *pgVar4;
        pgVar4 = pgVar4 + 1;
        pgVar5 = pgVar5 + 1;
      }
    }
    *(int *)(this + 0x504) = *(int *)(this + 0x504) + -1;
  }
  return;
}




/* from: gs:gs_mp_client.cpp
   addr: 00523950 */

void __thiscall gsMP_CLIENT::ActivateClient(gsMP_CLIENT *this,ulong param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  int iVar3;
  gsMP_CLIENT *pgVar4;
  bool bVar5;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  ulong uStack_8;
  undefined4 uStack_4;
  
  bVar5 = false;
  do {
    iVar3 = *(int *)(this + 0x504);
    iVar1 = 0;
    if (0 < iVar3) {
      pgVar4 = this + 0x484;
      do {
        if (*(ulong *)(*(int *)pgVar4 + 0x8c) == param_1) break;
        iVar1 = iVar1 + 1;
        pgVar4 = pgVar4 + 8;
      } while (iVar1 < iVar3);
    }
    if (iVar1 < iVar3) {
      *(undefined4 *)(this + iVar1 * 8 + 0x488) = 1;
      uStack_4 = 1;
      uStack_c = 0;
      uStack_b = 0x40;
      uStack_a = 0xc;
      uStack_8 = param_1;
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + iVar1 * 8 + 0x484),0x405,&uStack_c,
                         (msgADDR *)0x0);
      return;
    }
    if (bVar5) {
      return;
    }
    peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,param_1,0);
    if (peVar2 == (entIACTIVE_OBJ *)0x0) {
      return;
    }
    iVar3 = (**(code **)(*(int *)this + 0x20))(peVar2);
    if (iVar3 == 0) {
      return;
    }
    bVar5 = true;
  } while( true );
}




/* from: gs:gs_mp_client.cpp
   addr: 00523A00 */

entENTITY * __thiscall gsMP_CLIENT::GetNextPlayer(gsMP_CLIENT *this,entENTITY *param_1)

{
  int iVar1;
  
  if (((byte)this[0x470] & 1) != 0) {
    if (param_1 != (entENTITY *)0x0) {
      return (entENTITY *)0x0;
    }
    return *(entENTITY **)(this + 0x484);
  }
  if (param_1 == (entENTITY *)0x0) {
    *(undefined4 *)(this + 0x508) = 0;
  }
  else {
    if (*(int *)(this + 0x504) <= *(int *)(this + 0x508)) {
      return (entENTITY *)0x0;
    }
    iVar1 = *(int *)(this + 0x508) + 1;
    *(int *)(this + 0x508) = iVar1;
    if (*(int *)(this + 0x504) <= iVar1) {
      return (entENTITY *)0x0;
    }
  }
  return *(entENTITY **)(this + *(int *)(this + 0x508) * 8 + 0x484);
}




/* from: gs:gs_mp_client.cpp
   addr: 00523A60 */

int __thiscall gsMP_CLIENT::GetNPlayer(gsMP_CLIENT *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    iVar1 = *(int *)(this + 0x504);
  }
  return iVar1;
}




/* from: gs:gs_mp_client.cpp
   addr: 00523A80 */

void __thiscall
gsMP_CLIENT::SendMsgServer
          (gsMP_CLIENT *this,entIACTIVE_OBJ *param_1,int param_2,msgDATA *param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  gsMP_CONNECTION *this_00;
  msgADDR *pmVar5;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0xffffffff;
  local_c = 0xffff;
  local_a = 0xfffffffd;
  local_6 = 0;
  if ((param_1 != (entIACTIVE_OBJ *)0x0) && (((byte)this[0x470] & 1) != 0)) {
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,param_2,param_3,(msgADDR *)this);
    return;
  }
  gsMP_COMM::PrepareMsgWrap((gsMP_COMM *)this,(gsMSG_MP_WRAP *)&local_10,param_1,param_2,param_3);
  uVar1 = *(uint *)(this + 0x470);
  local_a = 0xffffffff;
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) == 0) {
      gsMP_COMM::PrepareConn((gsMP_COMM *)this,(gsMSG_MP_WRAP *)&local_10);
      this_00 = (gsMP_CONNECTION *)(this + 0x68);
      if (param_1 == (entIACTIVE_OBJ *)0x0) {
        iVar3 = gsMP_CONNECTION::GetBufferSize(this_00);
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x14);
        iVar3 = gsMP_CONNECTION::GetBufferSize(this_00);
      }
      gsMP_STAT::AddTraffic((gsMP_STAT *)(gsSysNetwork + 0xc4),iVar4,iVar3);
      iVar4 = gsMP_CONNECTION::GetBufferSize(this_00);
      pcVar2 = gsMP_CONNECTION::GetBuffer(this_00);
      gsMP_NETWORK::Client_SendDataToServer(gsSysNetwork,pcVar2,iVar4,param_4);
    }
    else {
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsDemoServer,0x3ff,&local_10,(msgADDR *)0x0);
    }
  }
  else if ((uVar1 & 8) == 0) {
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysServer,0x3ff,&local_10,(msgADDR *)0x0);
  }
  else {
    gsMP_CONNECTION::Pack((gsMP_CONNECTION *)(this + 0x68),(gsMSG_MP_WRAP *)&local_10);
    pmVar5 = (msgADDR *)0x0;
    pcVar2 = gsMP_CONNECTION::GetBuffer((gsMP_CONNECTION *)(this + 0x68));
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysServer,0x400,pcVar2,pmVar5);
  }
  if ((gsAppState & 0x400U) != 0) {
    gsDEMO::Record_SaveMsg(&gsDemo,(gsMSG_MP_WRAP *)&local_10);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_client.cpp
   addr: 00523C20 */

int __thiscall
gsMP_CLIENT::ProcessMsg(gsMP_CLIENT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  float fVar2;
  gsSTRINGS *this_00;
  entIACTIVE_OBJ *peVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  entENTITY *peVar8;
  uint uVar9;
  gsMP_CLIENT *pgVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0x400) {
    (**(code **)(*(int *)this + 0x30))(param_2,0xffffffff);
    return 0;
  }
  if (param_1 == 0x3ff) {
                    /* WARNING: Load size is inaccurate */
    if (*param_2 != -2) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*param_2,2);
      if (peVar3 == (entIACTIVE_OBJ *)0x0) {
        return 0;
      }
      if ((peVar3 != *(entIACTIVE_OBJ **)(this + 0x50c)) || (*(short *)((int)param_2 + 4) != 2)) {
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar3,(int)*(short *)((int)param_2 + 4),
                           *(void **)((int)param_2 + 10),(msgADDR *)this);
      }
      sprintf(local_40,s_mp_recv__s_log,peVar3 + 0x44);
      return 0;
    }
    param_1 = (int)*(short *)((int)param_2 + 4);
    param_2 = *(void **)((int)param_2 + 10);
  }
  if (param_1 < 0x406) {
    if (param_1 == 0x405) {
      (**(code **)(*(int *)this + 0x28))(*(undefined4 *)((int)param_2 + 4));
      return 0;
    }
    if (param_1 < 0x402) {
      if (param_1 == 0x401) {
        peVar8 = gsMP_SYSTEM::FindPlrLocal(gsSysMP);
        *(entENTITY **)(this + 0x50c) = peVar8;
        *(uint *)(peVar8 + 0x88) = *(uint *)(peVar8 + 0x88) & 0xfffffffa | 2;
        *(undefined4 *)(peVar8 + 0x8c) = *(undefined4 *)((int)param_2 + 8);
        animINST::ApplyCreateData
                  (*(animINST **)(peVar8 + 0xbc),(animCREATE_DATA *)((int)param_2 + 0xd0));
        local_38 = _m3dVUndef;
        local_2c = _m3dVUndef;
        local_34 = DAT_0096374c;
        local_28 = DAT_0096374c;
        local_40[0] = '\0';
        local_40[1] = 0x40;
        local_30 = DAT_00963750;
        local_24 = DAT_00963750;
        local_40[4] = -0x5f;
        local_40[5] = -1;
        local_40[6] = -1;
        local_40[7] = -1;
        local_40[2] = ' ';
        local_40[3] = '\0';
        m3dMATR::GetOrigin((m3dMATR *)((int)param_2 + 0xe2),(m3dV *)&local_38);
        m3dMATR::GetAxisZ((m3dMATR *)((int)param_2 + 0xe2),(m3dV *)&local_2c);
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar8,0x40c,local_40,(msgADDR *)0x0);
        return 0;
      }
      if (param_1 == 3) {
        iVar4 = *(int *)(this + 0x504);
        iVar6 = 0;
        if (0 < iVar4) {
          pgVar10 = this + 0x484;
          do {
            if (*(gsMSG_MP_SYNC **)pgVar10 == (gsMSG_MP_SYNC *)param_2) break;
            iVar6 = iVar6 + 1;
            pgVar10 = pgVar10 + 8;
          } while (iVar6 < iVar4);
        }
        if (iVar6 < iVar4) {
          (**(code **)(*(int *)this + 0x24))(param_2);
          return 0;
        }
      }
      else if (param_1 == 1000) {
        fVar2 = *(float *)(this + 0x480) - gsElapsedTime;
        *(float *)(this + 0x480) = fVar2;
        if (___real_00000000 <= fVar2) {
          *(undefined4 *)(this + 0x478) = 0;
        }
        else {
          *(undefined4 *)(this + 0x478) = 1;
          *(undefined4 *)(this + 0x480) = *(undefined4 *)(this + 0x47c);
        }
        if ((((byte)this[0x470] & 0x10) != 0) &&
           ((iVar4 = gsMP_NETWORK::Client_IsJoined(gsSysNetwork), iVar4 == 0 ||
            (iVar4 = gsMP_NETWORK::Client_IsError(gsSysNetwork), iVar4 != 0)))) {
          gspPLAY_SYSTEM::StopGame(gspSysPlay);
          (**(code **)(*(int *)this + 0x1c))();
          if ((gsAppState & 0x2000U) == 0) {
            gsVideoTermHW();
            gsMsgStopLoop();
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          (**(code **)(*(int *)uiSystem + 0x38))(1,&s_null);
          this_00 = gsStrings;
          iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERROR);
          puVar5 = gsSTRINGS::GetStringById(this_00,iVar4);
          puVar14 = &s_main;
          uVar13 = 0;
          uVar12 = 0;
          iVar4 = *(int *)uiSystem;
          uVar11 = 0;
          iVar6 = gsSTRINGS::GetStringId(this_00,s_UI_ERR_SERVER_LOST);
          puVar7 = gsSTRINGS::GetStringById(this_00,iVar6);
          (**(code **)(iVar4 + 0x18))(puVar5,puVar7,uVar11,uVar12,uVar13,puVar14);
          return 0;
        }
      }
      else if ((param_1 == 0x3ec) && ((gsAppState & 0x400000U) != 0)) {
        msgSYSTEM::PostTimeMsgData
                  (&msgSystem,(msgADDR *)this,0x412,(msgDATA *)param_2,(msgADDR *)0x0,0.5);
        (**(code **)(*(int *)uiSystem + 0x94))((gsMSG_MP_SYNC *)((int)param_2 + 4));
        gsMP_NETWORK::Drv_Freeze(gsSysNetwork,1);
        return 0;
      }
    }
    else {
      if (param_1 == 0x402) {
        peVar8 = entCreate(gsScenePtr,(char *)((int)param_2 + 0x4c),(char *)((int)param_2 + 0x8c),
                           *(int *)((int)param_2 + 0xcc),(animCREATE_DATA *)((int)param_2 + 0xd0),
                           *(void **)((int)param_2 + 4),3);
        *(undefined4 *)(peVar8 + 0x8c) = *(undefined4 *)((int)param_2 + 8);
        *(undefined4 *)(peVar8 + 0x90) = *(undefined4 *)(this + 0x474);
        *(undefined4 *)((int)param_2 + 0x162) = *(undefined4 *)(*(int *)(peVar8 + 0xbc) + 0x134);
        animINST::ApplyCreateData
                  (*(animINST **)(peVar8 + 0xbc),(animCREATE_DATA *)((int)param_2 + 0xd0));
        animINST::AbvTerm(*(animINST **)(peVar8 + 0xbc));
        animINST::AbvInit(*(animINST **)(peVar8 + 0xbc));
        _scnCalcRadRenderOff(*(animINST **)(peVar8 + 0xbc));
        return 0;
      }
      if (param_1 == 0x403) {
        if (*(int *)((int)param_2 + 0xc) != -2) {
          Synchronize(this,(gsMSG_MP_SYNC *)param_2);
          return 0;
        }
        local_58 = 0xc4000;
        local_54 = *(undefined4 *)(*(int *)(this + 0x50c) + 0x8c);
        local_50 = 1;
        (**(code **)(*(int *)this + 0x2c))(0,0x405,&local_58,0x20000);
        local_58 = 0xffffff38;
        local_54 = 0x3d4ccccd;
        (**(code **)(*(int *)this + 0x2c))(0,0x40c,&stack0xffffffa4,0x20000);
        (**(code **)(*(int *)uiSystem + 0x98))(0);
        if ((gsAppState & 0x4000U) != 0) {
          gsMsgChangeMode(3);
          gsAppState = gsAppState & 0xffffbfff;
        }
        gsAppState = gsAppState & 0xffbfffff;
        msgSYSTEM::SendAll(&msgSystem,0x407,*(void **)(this + 0x50c),(msgADDR *)0x0);
        return 0;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x409:
      (**(code **)(*(int *)this + 0x34))(param_2);
      break;
    case 0x40f:
    case 0x410:
      uVar9 = gsAppState | 0x400000;
      uVar1 = gsAppState & 0x4000;
      gsAppState = uVar9;
      if (uVar1 != 0) {
        gsMsgChangeMode(3);
        gsAppState = gsAppState & 0xffffbfff;
        return 0;
      }
      break;
    case 0x412:
      if ((gsAppState & 0x400000U) != 0) {
        iVar4 = 0;
        gsMP_NETWORK::Drv_Freeze(gsSysNetwork,0);
        local_4c = 0;
        local_4b = 0x40;
        local_48 = 0xffffffff;
        local_4a = 0xc;
        local_44 = 0;
        if (0 < *(int *)(this + 0x504)) {
          pgVar10 = this + 0x488;
          do {
            msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(pgVar10 + -4),0x405,&local_4c,(msgADDR *)0x0
                              );
            *(undefined4 *)pgVar10 = 0;
            iVar4 = iVar4 + 1;
            pgVar10 = pgVar10 + 8;
          } while (iVar4 < *(int *)(this + 0x504));
        }
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysLevel,0x3ec,param_2,(msgADDR *)0x0);
        msgSYSTEM::SendAll(&msgSystem,0x3f1,(void *)0x0,(msgADDR *)0x0);
        gsAppState = gsAppState | 4;
        return 0;
      }
    }
  }
  return 0;
}




/* from: gs:gs_mp_client.cpp
   addr: 00524270 */

void __thiscall gsMP_CLIENT::ReceiveMsg(gsMP_CLIENT *this,void *param_1,int param_2)

{
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0xffffffff;
  local_c = 0xffff;
  local_a = 0xfffffffd;
  local_6 = 0;
  gsMP_CONNECTION::UnPack
            ((gsMP_CONNECTION *)(this + 0x68),(gsMSG_MP_WRAP *)&local_10,param_1,param_2);
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysClient,0x3ff,&local_10,(msgADDR *)this);
  return;
}




/* from: gs:gs_mp_client.cpp
   addr: 005242D0 */

entIACTIVE_OBJ * __thiscall gsMP_CLIENT::Synchronize(gsMP_CLIENT *this,gsMSG_MP_SYNC *param_1)

{
  entIACTIVE_OBJ eVar1;
  msgADDR *pmVar2;
  entIACTIVE_OBJ *peVar3;
  entIACTIVE_OBJ *peVar4;
  int iVar5;
  entENTITY *peVar6;
  entENTITY *peVar7;
  entIACTIVE_OBJ *peVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    for (pmVar2 = (msgADDR *)entFindNext((entENTITY *)0x0); pmVar2 != (msgADDR *)0x0;
        pmVar2 = (msgADDR *)entFindNext((entENTITY *)pmVar2)) {
      if (*(int *)(pmVar2 + 0x8c) == -3) {
        msgSYSTEM::PostMsg(&msgSystem,pmVar2,2,(msgADDR *)0x0);
      }
    }
    return (entIACTIVE_OBJ *)0x0;
  }
  peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 8),0);
  if ((peVar3 != (entIACTIVE_OBJ *)0x0) && (*(int *)(peVar3 + 0x14) == *(int *)(param_1 + 0xc))) {
    peVar8 = peVar3 + 0x44;
    peVar4 = (entIACTIVE_OBJ *)(param_1 + 0x98);
    do {
      eVar1 = *peVar4;
      bVar9 = (byte)eVar1 < (byte)*peVar8;
      if (eVar1 != *peVar8) {
LAB_00524373:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00524378;
      }
      if (eVar1 == (entIACTIVE_OBJ)0x0) break;
      eVar1 = peVar4[1];
      bVar9 = (byte)eVar1 < (byte)peVar8[1];
      if (eVar1 != peVar8[1]) goto LAB_00524373;
      peVar4 = peVar4 + 2;
      peVar8 = peVar8 + 2;
    } while (eVar1 != (entIACTIVE_OBJ)0x0);
    iVar5 = 0;
LAB_00524378:
    if (iVar5 == 0) {
      if ((*(int *)(peVar3 + 0x20) == 0x454e5424) &&
         (animINST::Transform(*(animINST **)(peVar3 + 0xbc),(m3dMATR *)(param_1 + 0xee),0),
         *(int *)(peVar3 + 0x20) == 0x454e5424)) {
        (**(code **)(*(int *)peVar3 + 0x60))();
      }
      return peVar3;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    peVar6 = (entENTITY *)entFindNextIO((entIACTIVE_OBJ *)0x0);
    if (peVar6 == (entENTITY *)0x0) {
      return (entIACTIVE_OBJ *)0x0;
    }
    while (((*(int *)((entIACTIVE_OBJ *)peVar6 + 0x14) != *(int *)(param_1 + 0xc) ||
            (*(int *)((entIACTIVE_OBJ *)peVar6 + 0x8c) != -3)) ||
           (iVar5 = (**(code **)(*(int *)peVar6 + 0x18))(param_1), iVar5 == 0))) {
      peVar6 = (entENTITY *)entFindNextIO((entIACTIVE_OBJ *)peVar6);
      if (peVar6 == (entENTITY *)0x0) {
        return (entIACTIVE_OBJ *)0x0;
      }
    }
    peVar7 = (entENTITY *)0x0;
    if (((*(int *)((entIACTIVE_OBJ *)peVar6 + 0x20) == 0x454e5424) &&
        (iVar5 = *(int *)((entIACTIVE_OBJ *)peVar6 + 0xbc), peVar7 = peVar6, iVar5 != 0)) &&
       ((*(byte *)(iVar5 + 4) & 0x40) == 0)) {
      *(undefined4 *)(param_1 + 0x16e) = *(undefined4 *)(iVar5 + 0x134);
      animINST::ApplyCreateData
                (*(animINST **)((entIACTIVE_OBJ *)peVar6 + 0xbc),(animCREATE_DATA *)(param_1 + 0xdc)
                );
    }
  }
  else {
    peVar6 = entCreate(gsScenePtr,(char *)(param_1 + 0x58),(char *)(param_1 + 0x18),
                       *(int *)(param_1 + 0xd8),(animCREATE_DATA *)(param_1 + 0xdc),
                       *(void **)(param_1 + 4),3);
    if (peVar6 == (entENTITY *)0x0) {
      return (entIACTIVE_OBJ *)0x0;
    }
    animINST::ApplyCreateData(*(animINST **)(peVar6 + 0xbc),(animCREATE_DATA *)(param_1 + 0xdc));
    animINST::AbvTerm(*(animINST **)(peVar6 + 0xbc));
    if (*(int *)(param_1 + 0x10) != 0) {
      animINST::Transform(*(animINST **)(peVar6 + 0xbc),&m3dMatrIdentity,0);
    }
    animINST::AbvInit(*(animINST **)(peVar6 + 0xbc));
    if (*(int *)(param_1 + 0x10) != 0) {
      animINST::Transform(*(animINST **)(peVar6 + 0xbc),(m3dMATR *)(param_1 + 0xee),0);
    }
    _scnCalcRadRenderOff(*(animINST **)(peVar6 + 0xbc));
    *(undefined4 *)(peVar6 + 0x90) = *(undefined4 *)(this + 0x474);
    peVar7 = peVar6;
  }
  if (peVar6 == (entENTITY *)0x0) {
    return (entIACTIVE_OBJ *)0x0;
  }
  *(undefined4 *)(peVar6 + 0x8c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(peVar6 + 0x90) = *(undefined4 *)(this + 0x474);
  if ((peVar7 != (entENTITY *)0x0) && (iVar5 = *(int *)(peVar7 + 0xbc), iVar5 != 0)) {
    if (*(int *)(iVar5 + 0xe8) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0xe8) + 8) = *(undefined4 *)(iVar5 + 0xe0);
    }
    (**(code **)(*(int *)peVar7 + 0x60))();
  }
  if (*(int *)(gsSysMP + 0x28) == 1) {
    *(undefined4 *)(peVar6 + 0x30) = *(undefined4 *)(param_1 + 0x14);
  }
  *(uint *)(peVar6 + 0x88) = *(uint *)(peVar6 + 0x88) | 3;
  return (entIACTIVE_OBJ *)peVar6;
}




/* from: gs:gs_mp_client.cpp
   addr: 00524560 */

void __thiscall gsMP_CLIENT::ShowMPMsg(gsMP_CLIENT *this,gsMSG_MP_SHOW_MSG *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    if ((*(int *)(param_1 + 0x84) < 0) || (param_1[4] == (gsMSG_MP_SHOW_MSG)0x0)) {
      iVar2 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_GAME_PLAYER_KILLED);
    }
    else {
      iVar2 = gsSTRINGS::GetStringIdFmt
                        ((gsSTRINGS *)CONCAT31((int3)((uint)this >> 8),param_1[4]),(char *)gsStrings
                         ,s_GAME_PLAYER_KILLED__d,*(int *)(param_1 + 0x84) + 1);
    }
    iVar1 = *(int *)uiSystem;
    puVar3 = gsSTRINGS::Printf((gsSTRINGS *)(param_1 + 4),(int)gsStrings,iVar2,param_1 + 0x44,
                               (gsSTRINGS *)(param_1 + 4),0x40400000,1);
    (**(code **)(iVar1 + 0x20))(puVar3);
  }
  return;
}

