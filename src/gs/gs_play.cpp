
/* from: gs:gs_play.cpp
   addr: 0051E630 */

int __fastcall gspInit(void)

{
  gspSysPlay = (gspPLAY_SYSTEM *)operator_new(0x30);
  if (gspSysPlay == (gspPLAY_SYSTEM *)0x0) {
    gspSysPlay = (gspPLAY_SYSTEM *)0x0;
  }
  else {
    *(undefined4 *)(gspSysPlay + 4) = 0;
    *(undefined4 *)(gspSysPlay + 8) = 0;
    *(undefined4 *)(gspSysPlay + 0xc) = 0;
    *(undefined4 *)(gspSysPlay + 0x10) = 0x4d414452;
    *(undefined4 *)(gspSysPlay + 0x14) = 0;
    *(undefined4 *)(gspSysPlay + 0x18) = 0;
    *(undefined4 *)(gspSysPlay + 0x1c) = 0;
    *(undefined4 *)(gspSysPlay + 0x20) = 0;
    *(undefined4 *)(gspSysPlay + 0x24) = 0;
    *(undefined4 *)(gspSysPlay + 0x28) = 0;
    *(undefined4 *)(gspSysPlay + 0x2c) = 0;
    *(undefined ***)gspSysPlay = &gspPLAY_SYSTEM::_vftable_;
  }
  *(undefined4 *)(gspSysPlay + 0x14) = 0x47535024;
  *(undefined4 *)(gspSysPlay + 0x1c) = 0x15;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gspSysPlay,0x24535953,0);
  return 1;
}




/* from: gs:gs_play.cpp
   addr: 0051E6B0 */

void __fastcall gspTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)gspSysPlay);
  return;
}




/* from: gs:gs_play.cpp
   addr: 0051E6D0 */

void __thiscall
gspPLAY_SYSTEM::NotifyEvent(gspPLAY_SYSTEM *this,int param_1,char *param_2,int param_3)

{
  scnSCENE *this_00;
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  gspEVENT **ppgVar5;
  gspPLAY_SYSTEM *local_4;
  
  iVar3 = *(int *)(this + 0x28);
  if (199 < iVar3) {
    if (iVar3 != 1 && -1 < iVar3 + -1) {
      puVar4 = &DAT_009576b8;
      ppgVar5 = &_gspEventList;
      for (uVar2 = iVar3 * 0x68 - 0x68U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *ppgVar5 = (gspEVENT *)*puVar4;
        puVar4 = puVar4 + 1;
        ppgVar5 = ppgVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)ppgVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        ppgVar5 = (gspEVENT **)((int)ppgVar5 + 1);
      }
    }
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
  }
  local_4 = this;
  time((time_t *)&local_4);
  *(int *)(&DAT_00957654 + *(int *)(this + 0x28) * 0x68) = param_1;
  (&_gspEventList)[*(int *)(this + 0x28) * 0x1a] = *(gspEVENT **)(this + 0x2c);
  if (param_2 != (char *)0x0) {
    pcVar1 = fnmGetName(param_2);
    apNAME::SetName((apNAME *)(&DAT_00957658 + *(int *)(this + 0x28) * 0x68),pcVar1);
  }
  *(undefined4 *)(&DAT_0095769c + *(int *)(this + 0x28) * 0x68) = *(undefined4 *)(gsSysMP + 0x28);
  *(int *)(&DAT_009576a0 + *(int *)(this + 0x28) * 0x68) = param_3;
  *(gspPLAY_SYSTEM **)(&DAT_00957698 + *(int *)(this + 0x28) * 0x68) = local_4;
  this_00 = gsScenePtr;
  *(undefined4 *)(&DAT_009576a4 + *(int *)(this + 0x28) * 0x68) =
       *(undefined4 *)(pteManager + 0x1f44);
  iVar3 = scnSCENE::GetNInst(this_00);
  *(int *)(&DAT_009576ac + *(int *)(this + 0x28) * 0x68) = iVar3;
  iVar3 = scnSCENE::GetNTpl(gsScenePtr);
  *(int *)(&DAT_009576b0 + *(int *)(this + 0x28) * 0x68) = iVar3;
  iVar3 = partGetNEmit();
  *(int *)(&DAT_009576a8 + *(int *)(this + 0x28) * 0x68) = iVar3;
  iVar3 = gsSND_SYSTEM::GetNChn(gsSysSound);
  *(int *)(&DAT_009576b4 + *(int *)(this + 0x28) * 0x68) = iVar3;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  return;
}




/* from: gs:gs_play.cpp
   addr: 0051E840 */

gspEVENT * __thiscall gspPLAY_SYSTEM::GetEvent(gspPLAY_SYSTEM *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    return (gspEVENT *)(&_gspEventList + param_1 * 0x1a);
  }
  return (gspEVENT *)0x0;
}




/* from: gs:gs_play.cpp
   addr: 0051E870 */

char * __thiscall gspEVENT::GetString(gspEVENT *this)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  gspEVENT *pgVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  sprintf(&DAT_0095c790,s________d,*(undefined4 *)this);
  switch(*(undefined4 *)(this + 4)) {
  case 0:
    pcVar3 = s_START_GAME;
    break;
  case 1:
    pcVar3 = s_STOP_GAME;
    break;
  case 2:
    pcVar3 = s_LOAD_GAME;
    break;
  case 3:
    pcVar3 = s_SAVE_GAME;
    break;
  case 4:
    pcVar3 = s_CRASH_GAME;
    break;
  default:
    pcVar3 = s____;
  }
  uVar9 = *(undefined4 *)(this + 0x54);
  uVar8 = *(undefined4 *)(this + 0x58);
  uVar7 = *(undefined4 *)(this + 0x60);
  uVar6 = *(undefined4 *)(this + 0x5c);
  uVar5 = *(undefined4 *)(this + 0x50);
  pcVar1 = gsMP_SYSTEM::Mode2String(gsSysMP,*(int *)(this + 0x4c));
  pgVar4 = this + 8;
  pcVar2 = ctime((time_t *)(this + 0x48));
  sprintf(&DAT_0095c790,s_____d__Ev___s__Time___s_________,*(undefined4 *)this,pcVar3,pcVar2,pgVar4,
          pcVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  return &DAT_0095c790;
}




/* from: gs:gs_play.cpp
   addr: 0051E930 */

int __thiscall gspPLAY_SYSTEM::StartFirst(gspPLAY_SYSTEM *this)

{
  entENTITY *peVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0;
  _apCfgReadBool((void **)0x0,s_Video,s_UseMenu,&local_4);
  if (local_4 != 0) {
    gsAppState = gsAppState | 0x2000;
  }
  gsAppState = gsAppState | 0x40000;
  peVar1 = entCreate(gsScenePtr,s_player,s_player,(animCREATE_DATA *)0x0,(void *)0x0,0);
  gsAppState = gsAppState & 0xfffbffff;
  if (peVar1 == (entENTITY *)0x0) {
LAB_0051e9e6:
    gsAppState = gsAppState & 0xffffffef;
    return 0;
  }
  for (peVar1 = entFindNext((entENTITY *)0x0); peVar1 != (entENTITY *)0x0;
      peVar1 = entFindNext(peVar1)) {
    *(uint *)(peVar1 + 0xb4) = *(uint *)(peVar1 + 0xb4) & 0xfffffffe;
  }
  if ((gsAppState & 0x2000U) == 0) {
    iVar2 = StartGame(this,(gspSTART_GAME_DATA *)0x0);
    if (iVar2 == 0) goto LAB_0051e9e6;
    if (uiSystem != (uiUI_SYSTEM *)0x0) {
      (**(code **)(*(int *)uiSystem + 0x38))(3,0);
      gsAppState = gsAppState & 0xffffffef;
      return 1;
    }
  }
  else if (uiSystem != (uiUI_SYSTEM *)0x0) {
    (**(code **)(*(int *)uiSystem + 0x38))(1,0);
  }
  gsAppState = gsAppState & 0xffffffef;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_play.cpp
   addr: 0051EA50 */

int __thiscall gspPLAY_SYSTEM::StartGame(gspPLAY_SYSTEM *this,gspSTART_GAME_DATA *param_1)

{
  gspSTART_GAME_DATA gVar1;
  int iVar2;
  gspSTART_GAME_DATA *pgVar3;
  gspSTART_GAME_DATA local_14c;
  undefined1 local_14b;
  undefined2 local_14a;
  char local_148 [260];
  int local_44;
  char local_40 [64];
  
  if ((DAT_009574f0 & 1) == 0) {
    DAT_009574f0 = DAT_009574f0 | 1;
    DAT_0095cae8 = 0;
    DAT_0095cae9 = 0x40;
    _DAT_0095cc30 = 0;
    _DAT_0095cc34 = 0;
    _DAT_0095cc38 = 0;
    DAT_0095caec = 0;
    DAT_0095cbf0 = 0;
    _DAT_0095caea = 0x154;
    atexit((_func_4879 *)&__E12);
  }
  local_14c = (gspSTART_GAME_DATA)0x0;
  local_14b = 0x40;
  local_44 = -1;
  local_148[0] = '\0';
  local_14a = 0x10c;
  if ((gsAppState & 0x4000U) != 0) {
    gsMsgChangeMode(3);
    gsAppState = gsAppState & 0xffffbfff;
  }
  StopGame(this);
  gsMP_NETWORK::Drv_Freeze(gsSysNetwork,0);
  if (param_1 == (gspSTART_GAME_DATA *)0x0) {
    local_44 = 1;
    iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,s_Mode,local_40,0x40);
    if (iVar2 != 0) {
      local_44 = gsMP_SYSTEM::String2Mode(gsSysMP,local_40);
      if (local_44 == 0) {
        local_44 = 1;
      }
    }
    _apCfgReadString((void **)0x0,s_Level,s_File,local_148,0x104);
    param_1 = &local_14c;
  }
  iVar2 = gsMP_SYSTEM::InitGame(gsSysMP,*(int *)(param_1 + 0x108));
  if (iVar2 == 0) {
    return 0;
  }
  msgSYSTEM::SendAll(&msgSystem,0x3ef,(void *)0x0,(msgADDR *)0x0);
  apMsg(s_GS_MSG_INIT_GAME);
  if (*(int *)(gsSysMP + 0x28) != 3) {
    pgVar3 = param_1 + 4;
    gsAppState = gsAppState | 4;
    iVar2 = (int)&DAT_0095caec - (int)pgVar3;
    do {
      gVar1 = *pgVar3;
      pgVar3[iVar2] = gVar1;
      pgVar3 = pgVar3 + 1;
    } while (gVar1 != (gspSTART_GAME_DATA)0x0);
    _DAT_0095cc30 = 0;
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysLevel,0x3ec,&DAT_0095cae8,(msgADDR *)0x0);
    (**(code **)(*(int *)uiSystem + 0x98))(0);
  }
  iVar2 = gsMP_SYSTEM::JoinGame(gsSysMP);
  if (iVar2 == 0) {
    return 0;
  }
  gsMP_NETWORK::Drv_NotifyGameStarted(gsSysNetwork);
  if (*(int *)(gsSysMP + 0x28) != 3) {
    msgSYSTEM::SendAll(&msgSystem,0x3f1,(void *)0x0,(msgADDR *)0x0);
    apMsg(s_GS_MSG_INIT_MAP);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_play.cpp
   addr: 0051EC90 */

int __thiscall gspPLAY_SYSTEM::LoadGame(gspPLAY_SYSTEM *this,gspSTART_GAME_DATA *param_1)

{
  int iVar1;
  
  if ((DAT_009574e8 & 1) == 0) {
    DAT_009574e8 = DAT_009574e8 | 1;
    DAT_009574f8 = 0;
    DAT_009574f9 = 0x40;
    _DAT_00957640 = 0;
    _DAT_00957644 = 0;
    _DAT_00957648 = 0;
    DAT_009574fc = 0;
    DAT_00957600 = 0;
    _DAT_009574fa = 0x154;
    atexit((_func_4879 *)&__E14);
  }
  StopGame(this);
  iVar1 = gsMP_SYSTEM::InitGame(gsSysMP,*(int *)(param_1 + 0x108));
  if (iVar1 == 0) {
    return 0;
  }
  gslLoad((char *)(param_1 + 4),(gslHDR_EX *)0x0);
  iVar1 = gsMP_SYSTEM::JoinGame(gsSysMP);
  if (iVar1 == 0) {
    return 0;
  }
  gsMP_NETWORK::Drv_NotifyGameStarted(gsSysNetwork);
  (**(code **)(*(int *)uiSystem + 0x98))(0);
  gsAppState = gsAppState | 4;
  return 1;
}




/* from: gs:gs_play.cpp
   addr: 0051ED70 */

void __thiscall gspPLAY_SYSTEM::StopGame(gspPLAY_SYSTEM *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_154;
  undefined1 local_153;
  undefined2 local_152;
  undefined1 local_150;
  undefined1 local_4c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((gsAppState & 4U) != 0) {
    gsMP_SYSTEM::LeaveGame(gsSysMP);
  }
  if ((gsAppState & 4U) != 0) {
    if ((gsAppState & 0x4000U) != 0) {
      gsMsgChangeMode(3);
      gsAppState = gsAppState & 0xffffbfff;
    }
    msgSYSTEM::SendAll(&msgSystem,0x3f3,(void *)0x0,(msgADDR *)0x0);
    msgSYSTEM::SendAll(&msgSystem,0x3f0,(void *)0x0,(msgADDR *)0x0);
    apMsg(s_GS_MSG_TERM_GAME);
  }
  iVar2 = gsMP_NETWORK::Drv_IsGameStarted(gsSysNetwork);
  if (iVar2 != 0) {
    gsMP_NETWORK::Drv_Stop(gsSysNetwork);
  }
  if ((gsAppState & 4U) != 0) {
    local_154 = 0;
    local_153 = 0x40;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_150 = 0;
    local_4c = 0;
    local_152 = 0x154;
    (**(code **)(*(int *)gsSysLevel + 0x20))(&local_154);
  }
  uVar3 = gsAppState & 0xffbfffff;
  uVar1 = gsAppState & 4;
  gsAppState = uVar3;
  if (uVar1 != 0) {
    gsMP_SYSTEM::TermGame(gsSysMP);
    gsAppState = gsAppState & 0xfffffffb;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_play.cpp
   addr: 0051EE80 */

int __thiscall gspPLAY_SYSTEM::StartNewGameMap(gspPLAY_SYSTEM *this,gspSTART_GAME_DATA *param_1)

{
  gspSTART_GAME_DATA gVar1;
  gspSTART_GAME_DATA *pgVar2;
  int iVar3;
  
  if ((DAT_0095cae4 & 1) == 0) {
    DAT_0095cae4 = DAT_0095cae4 | 1;
    DAT_0095c990 = 0;
    DAT_0095c991 = 0x40;
    _DAT_0095cad8 = 0;
    _DAT_0095cadc = 0;
    _DAT_0095cae0 = 0;
    DAT_0095c994 = 0;
    DAT_0095ca98 = 0;
    _DAT_0095c992 = 0x154;
    atexit((_func_4879 *)&__E16);
  }
  if ((gsAppState & 0x4000U) != 0) {
    gsMsgChangeMode(3);
    gsAppState = gsAppState & 0xffffbfff;
  }
  if (*(int *)(gsSysMP + 0x28) == 2) {
    gsMP_NETWORK::Drv_Freeze(gsSysNetwork,1);
    gsMP_SERVER::DeActivateClientAll(gsSysServer);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)0x0,0x40f,(msgDATA *)param_1,0x20000,0xffffffff,
               0xfffffffd);
    pgVar2 = param_1 + 4;
    gsAppState = gsAppState | 4;
    iVar3 = (int)&DAT_0095c994 - (int)pgVar2;
    do {
      gVar1 = *pgVar2;
      pgVar2[iVar3] = gVar1;
      pgVar2 = pgVar2 + 1;
    } while (gVar1 != (gspSTART_GAME_DATA)0x0);
    _DAT_0095cad8 = 0;
    _DAT_0095cadc = 1;
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3ec,&DAT_0095c990,(msgADDR *)0x0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_play.cpp
   addr: 0051EFD0 */

int __thiscall
gspPLAY_SYSTEM::ProcessMsg
          (gspPLAY_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  entENTITY *peVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  msgDATA local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(param_1) {
  case 0x3ea:
    StartGame(this,(gspSTART_GAME_DATA *)param_2);
    return 0;
  case 0x3eb:
    StopGame(this);
    return 0;
  case 0x3ec:
    msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)gsSysLevel,0x3ec,(msgDATA *)param_2,(msgADDR *)0x0)
    ;
    if (*(int *)(gsSysMP + 0x28) != 1) {
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)0x0,0x410,(msgDATA *)0x0,0x20000,0xffffffff,
                 0xfffffffd);
      gsMP_SERVER::DeActivateClientAll(gsSysServer);
      peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0);
      if (peVar1 != (entENTITY *)0x0) {
        do {
          if (*(int *)(peVar1 + 0x90) != -1) {
            (**(code **)(*(int *)gsSysServer + 0x2c))
                      (*(int *)(peVar1 + 0x90),0,0x3ec,param_2,0x20000);
          }
          peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar1);
        } while (peVar1 != (entENTITY *)0x0);
        return 0;
      }
    }
    break;
  case 0x3f1:
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,0x411,(msgADDR *)0x0);
    return 0;
  case 0x40f:
    StartNewGameMap(this,(gspSTART_GAME_DATA *)param_2);
    return 0;
  case 0x411:
    if ((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) {
      iVar2 = 1;
      for (peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0); peVar1 != (entENTITY *)0x0
          ; peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar1)) {
        if (*(int *)(peVar1 + 0x90) != -1) {
          local_20 = (msgDATA)0x0;
          local_1f = 0x40;
          local_1c = 0xffffffa1;
          local_1e = 0x20;
          local_18 = _m3dVUndef;
          local_14 = DAT_0096374c;
          local_10 = DAT_00963750;
          local_c = _m3dVUndef;
          local_8 = DAT_0096374c;
          local_4 = DAT_00963750;
          gsMP_SYSTEM::GetStartPosDir(gsSysMP,iVar2,(m3dV *)&local_38,(m3dV *)&local_2c);
          local_18 = local_38;
          local_14 = local_34;
          local_c = local_2c;
          local_10 = local_30;
          local_8 = local_28;
          local_4 = local_24;
          gsMP_SERVER::SendMsgClient(gsSysServer,peVar1,0x40c,&local_20,0x20000);
          iVar2 = iVar2 + 1;
          gsMP_SERVER::SyncClient(gsSysServer,peVar1);
        }
      }
      gsMP_NETWORK::Drv_Freeze(gsSysNetwork,0);
    }
  }
  return 0;
}

