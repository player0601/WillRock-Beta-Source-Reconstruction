
/* from: wr_game_opt.cpp
   addr: 00498790 */

int __fastcall wrGOInit(void)

{
  entIACTIVE_OBJ *this;
  
  this = (entIACTIVE_OBJ *)operator_new(0xb4);
  if (this == (entIACTIVE_OBJ *)0x0) {
    this = (entIACTIVE_OBJ *)0x0;
  }
  else {
    entIACTIVE_OBJ::entIACTIVE_OBJ(this);
    *(undefined4 *)(this + 0x98) = 0xbf800000;
    *(undefined4 *)(this + 0x9c) = 1;
    *(undefined4 *)(this + 0xa0) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0xa8) = 1;
    *(undefined4 *)(this + 0xac) = 0x42f00000;
    *(undefined4 *)(this + 0xb0) = 0x14;
    *(undefined ***)this = &wrGO_SYSTEM::_vftable_;
  }
  wrSysGO = (wrGO_SYSTEM *)this;
  *(undefined4 *)((wrGO_SYSTEM *)this + 0x14) = 0x5752474f;
  *(undefined4 *)(wrSysGO + 0x1c) = 0x14;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)wrSysGO,0x24535953,0);
  apNAME::SetName((apNAME *)(wrSysGO + 0x44),s_WRGO_SYSTEM);
  return 1;
}




/* from: wr_game_opt.cpp
   addr: 00498850 */

void __fastcall wrGOTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)wrSysGO);
  return;
}




/* from: wr_game_opt.cpp
   addr: 00498870 */

int __thiscall
wrGO_SYSTEM::ProcessMsg(wrGO_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  gsMP_SYSTEM *this_00;
  int iVar4;
  char *pcVar5;
  m3dV local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(param_1) {
  case 1000:
    ProcessFRAME(this);
    return 0;
  case 0x3ef:
    ProcessINIT_GAME(this);
    return 0;
  case 0x3f0:
    wrSTAT_SYSTEM::Notify_GameEnd(wrSysStat);
    gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,1,(char *)0x0,-1);
    return 0;
  case 0x3f1:
    if (((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) &&
       (*(int *)(this + 0x94) == 3)) {
      iVar4 = 0;
      iVar1 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
      if (0 < iVar1) {
        do {
          gsMP_SYSTEM::GetStartPosDir(gsSysMP,iVar4,&local_c,(m3dV *)0x0);
          GenerateMP_Treasure(this,1,&local_c);
          iVar4 = iVar4 + 1;
          iVar1 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
        } while (iVar4 < iVar1);
        return 0;
      }
    }
    break;
  case 0x3f4:
    ProcessINIT_LEVEL(this);
    return 0;
  case 0x3fc:
    return 1;
  case 0x406:
    if ((gsAppState & 0x80000U) != 0) {
      local_c = (m3dV)0x0;
      local_b = 0x40;
      local_8 = 0;
      local_a = 0xc;
      local_4 = 1;
      (**(code **)(*(int *)gsSysServer + 0x2c))
                (*(undefined4 *)((int)param_2 + 0x90),wrSysGO,0x40c,&local_c,0x20000);
      return 0;
    }
    break;
  case 0x407:
    if (*(int *)((int)param_2 + 0x94) != 2) {
      wrSTAT_SYSTEM::Notify_AddPlayer(wrSysStat,(plrPLAYER_COMMON *)param_2);
    }
    if (*(int *)(gsSysMP + 0x28) != 2) {
      if (*(int *)(gsSysMP + 0x28) != 3) {
        return 0;
      }
      if ((plrPLAYER *)param_2 != plrPlayer) {
        return 0;
      }
      pcVar2 = *(char **)(*(int *)((int)param_2 + 0xbc) + 0x18);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      pcVar5 = s_GAME_PLAYER_JOINED;
      goto LAB_00498ac8;
    }
    pcVar2 = *(char **)(*(int *)((int)param_2 + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar1 = *(int *)uiSystem;
    pcVar5 = s_GAME_PLAYER_JOINED;
    this_00 = gsSysMP;
    goto LAB_00498ad7;
  case 0x408:
    if (*(int *)((int)param_2 + 0x94) != 2) {
      wrSTAT_SYSTEM::Notify_StopPlayer(wrSysStat,(plrPLAYER_COMMON *)param_2);
      *(uint *)((int)param_2 + 0x2a3) = *(uint *)((int)param_2 + 0x2a3) & 0xffffffef;
    }
    if (*(int *)(gsSysMP + 0x28) == 1) {
      return 0;
    }
    pcVar2 = *(char **)(*(int *)((int)param_2 + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    pcVar5 = s_GAME_PLAYER_DISCONNECTED;
LAB_00498ac8:
    iVar1 = *(int *)uiSystem;
    this_00 = (gsMP_SYSTEM *)uiSystem;
LAB_00498ad7:
    puVar3 = gsSTRINGS::Printf((gsSTRINGS *)this_00,(char *)gsStrings,pcVar5,pcVar2,0x40400000,1);
    (**(code **)(iVar1 + 0x20))(puVar3);
    break;
  case 0x40c:
    ProcessMP_NOTIFY(this,(gsEVENT *)param_2);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_game_opt.cpp
   addr: 00498B50 */

void __thiscall wrGO_SYSTEM::ProcessFRAME(wrGO_SYSTEM *this)

{
  gsSTRINGS *pgVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  entENTITY *peVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  msgDATA local_118;
  undefined1 local_117;
  undefined2 local_116;
  uint local_114;
  undefined4 local_110;
  undefined4 uStack_18;
  undefined4 uStack_10;
  
  scnSCENE::GetNInst(gsScenePtr);
  m3dTerm2DMatr();
  pgVar1 = gsStrings;
  if ((gsAppState & 0x80000U) == 0) {
    if ((*(int *)(gsSysMP + 0x28) != 2) && (*(int *)(gsSysMP + 0x28) != 4)) {
      return;
    }
    if ((*(int *)(this + 0x94) == 1) || (*(int *)(this + 0x94) == 3)) {
      local_118 = (msgDATA)0x0;
      local_117 = 0x40;
      local_110 = 0;
      local_114 = 0;
      local_116 = 0xc;
      if (0 < *(int *)(this + 0xb0)) {
        for (peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
            peVar5 != (entENTITY *)0x0; peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar5)) {
          if (*(int *)(this + 0xb0) <= *(int *)(peVar5 + 0x2b7)) {
            local_110 = 1;
            gsMP_SERVER::SendMsgClientAll
                      (gsSysServer,(entIACTIVE_OBJ *)wrSysGO,0x40c,&local_118,0x20000,0xfffffffd,
                       0xfffffffd);
          }
        }
      }
      if ((___real_00000000 < *(float *)(this + 0xac)) &&
         (*(float *)(this + 0xac) < gsElapsedTimeLevel)) {
        local_110 = 1;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)wrSysGO,0x40c,&local_118,0x20000,0xfffffffd,
                   0xfffffffd);
      }
    }
    if (*(int *)(this + 0x94) != 3) {
      return;
    }
    iVar4 = 0;
    local_118 = (msgDATA)0x0;
    local_117 = 0x40;
    local_110 = 0;
    local_114 = 0;
    local_116 = 0xc;
    iVar2 = 0;
    for (peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
        peVar5 != (entENTITY *)0x0; peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar5)) {
      if (*(int *)(peVar5 + 0x2b3) == 0) {
        iVar4 = iVar4 + *(int *)(peVar5 + 0x2bf);
      }
      else if (*(int *)(peVar5 + 0x2b3) == 1) {
        iVar2 = iVar2 + *(int *)(peVar5 + 0x2bf);
      }
    }
    gsMP_SYSTEM::GetNStartPos(gsSysMP);
    iVar6 = ftol();
    if (iVar4 < iVar6) {
      gsMP_SYSTEM::GetNStartPos(gsSysMP);
      iVar4 = ftol();
      if (iVar2 < iVar4) {
        return;
      }
    }
    local_110 = 1;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)wrSysGO,0x40c,&local_118,0x20000,0xfffffffd,0xfffffffd)
    ;
    return;
  }
  if (*(int *)(gsSysMP + 0x28) == 1) {
    uVar9 = 0;
    uVar8 = 0x3dcccccd;
    iVar4 = *(int *)uiSystem;
    iVar2 = gsSTRINGS::GetStringId(gsStrings,s_DEMO_OVER);
    puVar3 = gsSTRINGS::GetStringById(pgVar1,iVar2);
    (**(code **)(iVar4 + 0x20))(puVar3,uVar8,uVar9);
LAB_00498c58:
    iVar4 = *(int *)(gsSysInput + 0x40);
    if (((((0x10 < *(int *)(iVar4 + 8)) || (*(int *)(iVar4 + 0xc) < 0x11)) ||
         (0x10 < *(int *)(iVar4 + 8))) ||
        ((*(int *)(iVar4 + 0xc) < 0x11 ||
         ((*(uint *)(*(int *)(iVar4 + 4) + (0x10 - *(int *)(iVar4 + 8)) * 0x9c) & 1) == 0)))) ||
       ((0x10 < *(int *)(iVar4 + 8) ||
        ((*(int *)(iVar4 + 0xc) < 0x11 ||
         ((*(uint *)(*(int *)(iVar4 + 4) + (0x10 - *(int *)(iVar4 + 8)) * 0x9c) & 2) == 0)))))) {
      return;
    }
    gsMP_NETWORK::Server_ResetLadder(gsSysNetwork);
    if ((gsAppState & 0x4000U) != 0) {
      gsMsgChangeMode(3);
      gsAppState = gsAppState & 0xffffbfff;
    }
    msgSYSTEM::SendAll(&msgSystem,0x3f3,(void *)0x0,(msgADDR *)0x0);
    apMsg(s_GS_MSG_TERM_MAP);
    if (*(int *)(gsSysMP + 0x28) == 1) {
      gspPLAY_SYSTEM::StopGame(gspSysPlay);
      (**(code **)(*(int *)uiSystem + 0x38))(1,0);
      return;
    }
    if ((*(int *)(this + 0x94) != 1) && (*(int *)(this + 0x94) != 3)) {
      gspPLAY_SYSTEM::StopGame(gspSysPlay);
      (**(code **)(*(int *)uiSystem + 0x38))(1,0);
      return;
    }
    local_118 = (msgDATA)0x0;
    local_117 = 0x40;
    uStack_10 = 0xffffffff;
    local_114 = local_114 & 0xffffff00;
    local_116 = 0x10c;
    (**(code **)(*(int *)uiSystem + 0x9c))(&local_114,0x104);
    uStack_18 = 2;
    msgSYSTEM::PostMsgData
              (&msgSystem,(msgADDR *)gspSysPlay,0x40f,(msgDATA *)&stack0xfffffee0,(msgADDR *)0x0);
    return;
  }
  if (*(int *)(gsSysMP + 0x28) == 2) {
    iVar4 = gsMP_NETWORK::Server_GetLadderStatus(gsSysNetwork);
    pgVar1 = gsStrings;
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        pcVar7 = s_GAME_MSG_LADDER_DATA_SENT;
        iVar4 = *(int *)uiSystem;
      }
      else {
        if (iVar4 != 3) {
          uVar9 = 0;
          uVar8 = 0x3dcccccd;
          iVar4 = *(int *)uiSystem;
          iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_OVER_SERVER);
          puVar3 = gsSTRINGS::GetStringById(pgVar1,iVar2);
          (**(code **)(iVar4 + 0x20))(puVar3,uVar8,uVar9);
          goto LAB_00498c58;
        }
        pcVar7 = s_GAME_MSG_LADDER_DATA_SENT_FAIL;
        iVar4 = *(int *)uiSystem;
      }
      uVar9 = 3;
      uVar8 = 0x40400000;
      iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar7);
      puVar3 = gsSTRINGS::GetStringById(pgVar1,iVar2);
      (**(code **)(iVar4 + 0x20))(puVar3,uVar8,uVar9);
      gsMP_NETWORK::Server_StopLadder(gsSysNetwork);
      goto LAB_00498c58;
    }
    uVar8 = 3;
    pcVar7 = s_GAME_MSG_LADDER_DATA_SENDING;
    iVar4 = *(int *)uiSystem;
  }
  else {
    uVar8 = 0;
    iVar4 = *(int *)uiSystem;
    pcVar7 = s_GAME_OVER_CLIENT;
  }
  pgVar1 = gsStrings;
  uVar9 = 0x3dcccccd;
  iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar7);
  puVar3 = gsSTRINGS::GetStringById(pgVar1,iVar2);
  (**(code **)(iVar4 + 0x20))(puVar3,uVar9,uVar8);
  return;
}




/* from: wr_game_opt.cpp
   addr: 00499060 */

void __thiscall wrGO_SYSTEM::ProcessINIT_LEVEL(wrGO_SYSTEM *this)

{
  int iVar1;
  msgADDR *pmVar2;
  int local_4;
  
  if (*(int *)(gsSysMP + 0x28) != 3) {
    local_4 = 1;
    _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerAllowHealth,&local_4);
    if ((local_4 == 0) && ((*(int *)(this + 0x94) == 1 || (*(int *)(this + 0x94) == 3)))) {
      for (pmVar2 = (msgADDR *)entFindNext((entENTITY *)0x0); pmVar2 != (msgADDR *)0x0;
          pmVar2 = (msgADDR *)entFindNext((entENTITY *)pmVar2)) {
        if ((*(int *)(pmVar2 + 0x14) == 0x2449544d) &&
           ((((iVar1 = *(int *)(pmVar2 + 0x94), iVar1 == 0x28 || (iVar1 == 0x29)) || (iVar1 == 0x2a)
             ) || (iVar1 == 0x2b)))) {
          msgSYSTEM::PostMsg(&msgSystem,pmVar2,2,(msgADDR *)0x0);
        }
      }
    }
    local_4 = 1;
    _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerAllowArmor,&local_4);
    if ((local_4 == 0) && ((*(int *)(this + 0x94) == 1 || (*(int *)(this + 0x94) == 3)))) {
      for (pmVar2 = (msgADDR *)entFindNext((entENTITY *)0x0); pmVar2 != (msgADDR *)0x0;
          pmVar2 = (msgADDR *)entFindNext((entENTITY *)pmVar2)) {
        if ((*(int *)(pmVar2 + 0x14) == 0x2449544d) &&
           (((iVar1 = *(int *)(pmVar2 + 0x94), iVar1 == 0x2c || (iVar1 == 0x2d)) ||
            ((iVar1 == 0x2e || (iVar1 == 0x2f)))))) {
          msgSYSTEM::PostMsg(&msgSystem,pmVar2,2,(msgADDR *)0x0);
        }
      }
    }
  }
  return;
}




/* from: wr_game_opt.cpp
   addr: 00499180 */

void __thiscall wrGO_SYSTEM::ProcessINIT_GAME(wrGO_SYSTEM *this)

{
  wrGO_SYSTEM *pwVar1;
  byte bVar2;
  int iVar3;
  gsMP_SYSTEM *pgVar4;
  byte *pbVar5;
  float extraout_ECX;
  int iVar6;
  uint uVar7;
  float extraout_ECX_00;
  float extraout_ECX_01;
  byte *pbVar8;
  bool bVar9;
  byte local_40 [64];
  
  iVar3 = *(int *)(gsSysMP + 0x28);
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  wrSTAT_SYSTEM::Notify_GameBegin(wrSysStat);
  local_40[0] = 0;
  _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerMode,(char *)local_40,0x40);
  if (iVar3 == 1) {
    *(undefined4 *)(this + 0x94) = 0;
  }
  else {
    if ((iVar3 != 2) && (iVar3 != 4)) {
      return;
    }
    *(undefined4 *)(this + 0x94) = 0;
    do {
      pbVar8 = local_40;
      pbVar5 = (&PTR_s_SINGLE_005da7e4)[*(int *)(this + 0x94)];
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_0049922a:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0049922f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_0049922a;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_0049922f:
    } while ((iVar6 != 0) &&
            (uVar7 = *(int *)(this + 0x94) + 1, *(uint *)(this + 0x94) = uVar7, uVar7 < 4));
    if (*(int *)(this + 0x94) == 4) {
      *(undefined4 *)(this + 0x94) = 1;
    }
  }
  pwVar1 = this + 0xa8;
  *(int *)pwVar1 = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_Difficulty,(int *)pwVar1);
  if ((*(int *)(this + 0x94) == 1) || (*(int *)(this + 0x94) == 3)) {
    *(int *)pwVar1 = 1;
  }
  aiPLANNER::UsePredictiveAiming(aiAttackPlanner,(uint)(1 < *(int *)pwVar1));
  if (*(int *)pwVar1 == 0) {
    aiSpawnSetOppCoeff(extraout_ECX);
  }
  *(float *)(this + 0xac) = 120.0;
  _apCfgReadFloat((void **)0x0,s_Multiplayer,s_ServerTimeLimit,(float *)(this + 0xac));
  *(int *)(this + 0xb0) = 0x14;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerFragLimit,(int *)(this + 0xb0));
  pwVar1 = this + 0x98;
  *(float *)pwVar1 = -1.0;
  _apCfgReadFloat((void **)0x0,s_Multiplayer,s_ServerPlrGODAfterDeath,(float *)pwVar1);
  if (*(int *)(this + 0x94) == 0) {
    *(float *)pwVar1 = -1.0;
  }
  pwVar1 = this + 0x9c;
  *(int *)pwVar1 = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerPlrIsFriendlyFire,(int *)pwVar1);
  if (*(int *)(this + 0x94) == 0) {
    *(int *)pwVar1 = 0;
  }
  pwVar1 = this + 0xa0;
  *(int *)pwVar1 = 0;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerPlrIsUnlimitAmmo,(int *)pwVar1);
  if (*(int *)(this + 0x94) == 0) {
    *(int *)pwVar1 = 0;
  }
  else {
    if (*(int *)(this + 0x94) != 2) {
      *(undefined4 *)(this + 0xa4) = 1;
      goto LAB_004993bc;
    }
    _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerItemOnPick,(char *)local_40,0x40);
    iVar6 = 5;
    bVar9 = true;
    pbVar8 = local_40;
    pbVar5 = &s_keep;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pbVar8 == *pbVar5;
      pbVar8 = pbVar8 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar9);
    if (bVar9) {
      *(undefined4 *)(this + 0xa4) = 2;
      goto LAB_004993bc;
    }
  }
  *(undefined4 *)(this + 0xa4) = 0;
LAB_004993bc:
  if (iVar3 == 1) {
    uVar7 = *(uint *)(gsSysCinema + 0x80) | 4;
  }
  else {
    uVar7 = *(uint *)(gsSysCinema + 0x80) & 0xfffffffb;
  }
  *(uint *)(gsSysCinema + 0x80) = uVar7;
  *(uint *)(gsScenePtr + 0x40) = *(uint *)(gsScenePtr + 0x40) & 0xfffffffe;
  if (iVar3 != 1) {
    gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,0,(char *)&gsSceneFullName,*(int *)(this + 0x94));
    pgVar4 = gsSysMP;
    if (*(int *)(gsSysMP + 0x28) == 2) {
      *(uint *)(gsScenePtr + 0x40) = *(uint *)(gsScenePtr + 0x40) | 1;
    }
    gsMsgSetElapsedTimeScale((float)pgVar4);
    return;
  }
  if ((gsAppState & 0x20000U) != 0) {
    gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,2,(char *)&gsSceneFullName,-1);
    gsMsgSetElapsedTimeScale(extraout_ECX_01);
    return;
  }
  gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,0,(char *)&gsSceneFullName,-1);
  gsMsgSetElapsedTimeScale(extraout_ECX_00);
  return;
}




/* from: wr_game_opt.cpp
   addr: 004994A0 */

void __thiscall wrGO_SYSTEM::ProcessMP_NOTIFY(wrGO_SYSTEM *this,gsEVENT *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == -100) {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(iVar4 + 4);
    *(int *)(this + 0x94) = iVar3;
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(iVar4 + 8);
    if (iVar3 == 2) {
      plrPLAYER::SelectPosDirCOOP(plrPlayer);
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    apMsg(s_GS_MSG_COMPLETE_MAP);
    pcVar1 = strstr((char *)&gsSceneFullName,s_lev_10_4);
    if (pcVar1 == (char *)0x0) {
      msgSYSTEM::SendAll(&msgSystem,0x3f2,(void *)0x0,(msgADDR *)0x0);
      if ((gsAppState & 0x4000U) == 0) {
        gsMsgChangeMode(2);
        gsAppState = gsAppState | 0x4000;
      }
    }
    else {
      (**(code **)(*(int *)uiSystem + 0x38))(1,&s_null);
      (**(code **)(*(int *)uiSystem + 0x1c))(2);
    }
    gsMP_NETWORK::Server_StartLadderSending(gsSysNetwork);
    iVar4 = 0;
    if (0 < *(int *)(wrSysStat + 0x11c)) {
      iVar3 = 0;
      do {
        pcVar1 = (char *)(*(int *)(wrSysStat + 0x120) + iVar3);
        gsMP_NETWORK::Server_SendLadderData
                  (gsSysNetwork,pcVar1,0,*(int *)(*(int *)(wrSysStat + 0x120) + 0x44 + iVar3));
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,1,*(int *)(pcVar1 + 0x5c));
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,2,*(int *)(pcVar1 + 0x48));
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,3,*(int *)(pcVar1 + 0x4c));
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,4,0);
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,5,1);
        iVar2 = ftol();
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,6,iVar2);
        iVar2 = ftol();
        gsMP_NETWORK::Server_SendLadderData(gsSysNetwork,pcVar1,7,iVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x200;
      } while (iVar4 < *(int *)(wrSysStat + 0x11c));
    }
    gsMP_NETWORK::Server_FinishLadderSending(gsSysNetwork);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_game_opt.cpp
   addr: 00499650 */

void __thiscall wrGO_SYSTEM::ProcessMP_GET_SYNC_DATA(wrGO_SYSTEM *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_0060eff0 & 1) == 0) {
      DAT_0060eff0 = DAT_0060eff0 | 1;
      DAT_0060efe4 = 0;
      DAT_0060efe5 = 0x40;
      DAT_0060efe8 = 0;
      _DAT_0060efe6 = 0xc;
      atexit((_func_4879 *)&__E43);
    }
    puVar1 = &DAT_0060efe4;
    *(undefined1 **)param_1 = &DAT_0060efe4;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(this + 0xa8);
  return;
}




/* from: wr_game_opt.cpp
   addr: 004996C0 */

void __thiscall wrGO_SYSTEM::ProcessMP_WRITE_SYNC_DATA(wrGO_SYSTEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  pgVar2 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_6 = 0xffffffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf1,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 8);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&param_1,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_game_opt.cpp
   addr: 00499740 */

void __thiscall wrGO_SYSTEM::ProcessMP_READ_SYNC_DATA(wrGO_SYSTEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_14;
  short local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  puVar3 = *(undefined **)param_1;
  local_10 = 0;
  uStack_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_0060eff0 & 1) == 0) {
      DAT_0060eff0 = DAT_0060eff0 | 1;
      DAT_0060efe8 = 0;
      _DAT_0060efe4 = 0xc4000;
      atexit((_func_4879 *)&__E43);
    }
    puVar3 = &DAT_0060efe4;
    *(undefined **)param_1 = &DAT_0060efe4;
    _DAT_0060efe4 = 0xc4000;
    DAT_0060efe8 = 0;
    DAT_0060efec = local_14;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  do {
    if ((iVar1 == 0) || (local_10 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_10 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_0049980d:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else if (local_10 == 0xf1) {
      puVar2 = puVar3 + 8;
      goto LAB_0049980d;
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  } while( true );
}




/* from: wr_game_opt.cpp
   addr: 00499840 */

void __thiscall wrGO_SYSTEM::GenerateMP_Treasure(wrGO_SYSTEM *this,int param_1,m3dV *param_2)

{
  int iVar1;
  entENTITY *this_00;
  char *local_b0 [3];
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  if (((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) &&
     (*(int *)(this + 0x94) == 3)) {
    local_b0[0] = s_item_mpth_helmet;
    local_b0[1] = s_item_mpth_sword;
    local_b0[2] = s_item_mpth_shield;
    animCREATE_DATA::animCREATE_DATA(local_98);
    iVar1 = m3dRandIntRange(0,2);
    if (param_1 == 0) {
      SelectMP_TreasureDefaultPos(this,local_a4);
      param_2 = local_a4;
    }
    m3dMATR::MakeLCS2WCS_VZ(local_86,param_2,&m3dVUnitX);
    this_00 = entCreate(gsScenePtr,s_item,local_b0[iVar1],local_98,(void *)0x0,4);
    if (param_1 == 2) {
      wrITEM::StartSpray((wrITEM *)this_00);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_game_opt.cpp
   addr: 00499910 */

void __thiscall wrGO_SYSTEM::SelectMP_TreasureDefaultPos(wrGO_SYSTEM *this,m3dV *param_1)

{
  entENTITY *peVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 extraout_MM1;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [64];
  
  if (((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) &&
     (*(int *)(this + 0x94) == 3)) {
    pfVar5 = local_100;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    peVar1 = entFindNext((entENTITY *)0x0);
    fVar6 = DAT_005da7e0;
    while (DAT_005da7e0 = fVar6, peVar1 != (entENTITY *)0x0) {
      if ((*(int *)(peVar1 + 0x14) == 0x2449544d) && (*(int *)(peVar1 + 0x94) == 0x3c)) {
        bVar7 = (*(uint *)(peVar1 + 0x14f) & 0x20000) == 0;
      }
      else {
        bVar7 = *(int *)(peVar1 + 0x14) == 0x504c5952;
      }
      if (bVar7) {
        animINST::GetPos(*(animINST **)(peVar1 + 0xbc),(m3dV *)&local_10c);
        iVar3 = 0;
        iVar2 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
        if (0 < iVar2) {
          do {
            gsMP_SYSTEM::GetStartPosDir(gsSysMP,iVar3,(m3dV *)&local_118,(m3dV *)0x0);
            local_11c = (local_10c - local_118) * (local_10c - local_118) +
                        (local_108 - local_114) * (local_108 - local_114) +
                        (local_104 - local_110) * (local_104 - local_110);
            if (m3dSimdType == 0) {
              local_11c = local_11c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar11 = rsqrtss(ZEXT416((uint)local_11c),ZEXT416((uint)local_11c));
              fVar6 = auVar11._0_4_;
              local_11c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - local_11c * fVar6 * fVar6)
                          * local_11c;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar8 = (ulonglong)(uint)local_11c;
              uVar9 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar8);
              uVar10 = PackedFloatingMUL(uVar9,uVar9);
              uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
              uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
              uVar9 = PackedFloatingMUL(uVar9,uVar8);
              local_11c = (float)uVar9;
              FastExitMediaState();
            }
            else {
              local_11c = SQRT(local_11c);
            }
            fVar6 = ___real_3f800000 / (local_11c + ___real_3f800000);
            if (local_100[iVar3] < fVar6) {
              local_100[iVar3] = fVar6;
            }
            iVar3 = iVar3 + 1;
            iVar2 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
          } while (iVar3 < iVar2);
        }
      }
      peVar1 = entFindNext(peVar1);
      fVar6 = DAT_005da7e0;
    }
    fVar4 = 0.0;
    iVar2 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
    local_11c = fVar6;
    if (0 < iVar2) {
      do {
        if (local_100[(int)fVar4] < local_11c) {
          local_11c = local_100[(int)fVar4];
          fVar6 = fVar4;
        }
        fVar4 = (float)((int)fVar4 + 1);
        iVar2 = gsMP_SYSTEM::GetNStartPos(gsSysMP);
      } while ((int)fVar4 < iVar2);
    }
    gsMP_SYSTEM::GetStartPosDir(gsSysMP,(int)fVar6,param_1,(m3dV *)0x0);
    return;
  }
  *(undefined4 *)param_1 = _m3dVZero;
  *(undefined4 *)(param_1 + 4) = DAT_00963740;
  *(undefined4 *)(param_1 + 8) = DAT_00963744;
  return;
}




/* from: wr_game_opt.cpp
   addr: 00499B60 */

int __thiscall wrGO_SYSTEM::SelectDefaultTeam(wrGO_SYSTEM *this,plrPLAYER_COMMON *param_1)

{
  entENTITY *peVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(this + 0x94) != 3) ||
     ((*(int *)(gsSysMP + 0x28) != 2 && (*(int *)(gsSysMP + 0x28) != 4)))) {
    return -1;
  }
  iVar3 = 0;
  iVar2 = 0;
  peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0);
  if (peVar1 != (entENTITY *)0x0) {
    do {
      if (peVar1 != (entENTITY *)param_1) {
        if (*(int *)(peVar1 + 0x2b3) == 0) {
          iVar3 = iVar3 + 1;
        }
        else if (*(int *)(peVar1 + 0x2b3) == 1) {
          iVar2 = iVar2 + 1;
        }
      }
      peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar1);
    } while (peVar1 != (entENTITY *)0x0);
    if (iVar2 < iVar3) {
      return 1;
    }
  }
  return 0;
}




/* from: wr_game_opt.cpp
   addr: 00499BF0 */

int __thiscall wrGO_SYSTEM::GetNMP_TreasureVictory(wrGO_SYSTEM *this)

{
  int iVar1;
  
  gsMP_SYSTEM::GetNStartPos(gsSysMP);
  iVar1 = ftol();
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_game_opt.cpp
   addr: 00499C20 */

float __thiscall wrGO_SYSTEM::GetPlrDmgScale(wrGO_SYSTEM *this)

{
  if (*(int *)(this + 0xa8) == 0) {
    return ___real_3f000000;
  }
  if (*(int *)(this + 0xa8) != 2) {
    return ___real_3f800000;
  }
  return ___real_40000000;
}

