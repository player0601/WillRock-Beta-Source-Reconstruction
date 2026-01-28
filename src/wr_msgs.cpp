
/* from: wr_msgs.cpp
   addr: 0049E1E0 */

int __fastcall wrMsgInit(void)

{
  gsDOMAIN_LIST *pgVar1;
  sncCHANNEL *this;
  
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 == (gsDOMAIN_LIST *)0x0) {
    DAT_0060f030 = (gsDOMAIN_LIST *)0x0;
    return 0;
  }
  gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
  *(undefined ***)pgVar1 = &wrMSG_SYSTEM::_vftable_;
  apNAME::SetName((apNAME *)(pgVar1 + 0x44),s_msg);
  DAT_0060f030 = pgVar1;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x24534e44,0x57);
  this = (sncCHANNEL *)operator_new(0x74);
  if (this == (sncCHANNEL *)0x0) {
    DAT_0060f034 = (sncCHANNEL *)0x0;
    return 0;
  }
  DAT_0060f034 = (sncCHANNEL *)sncCHANNEL::sncCHANNEL(this);
  if (DAT_0060f034 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,DAT_0060f034,(entIACTIVE_OBJ *)DAT_0060f030,(objOBJ *)0x0);
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 != (gsDOMAIN_LIST *)0x0) {
    gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
    *(undefined ***)pgVar1 = &wrSECRET_SYSTEM::_vftable_;
    apNAME::SetName((apNAME *)(pgVar1 + 0x44),s_secret);
    DAT_0060f02c = pgVar1;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x24534e44,0x57);
    return 1;
  }
  DAT_0060f02c = (gsDOMAIN_LIST *)0x0;
  return 0;
}




/* from: wr_msgs.cpp
   addr: 0049E2E0 */

void __fastcall wrMsgTerm(void)

{
  gsSND_SYSTEM::DelChannel(gsSysSound,DAT_0060f030);
  DAT_0060f034 = 0;
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)DAT_0060f030);
  DAT_0060f030 = (entIACTIVE_OBJ *)0x0;
  msgSYSTEM::DestroyAddr(&msgSystem,DAT_0060f02c);
  DAT_0060f02c = (msgADDR *)0x0;
  return;
}




/* from: wr_msgs.cpp
   addr: 0049E340 */

void __fastcall wrMSG_SYSTEM::ShowMsg(char *param_1,float param_2)

{
  gsSTRINGS *this;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_stack_00000004;
  undefined4 uVar4;
  char *local_4;
  
  local_4 = param_1;
  iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,(int *)&local_4);
  if ((iVar1 == 0) || (local_4 != (char *)0x0)) {
    iVar1 = gsSTRINGS::GetStringId(gsStrings,param_1);
    this = gsStrings;
    if (iVar1 != 0) {
      iVar1 = *(int *)uiSystem;
      uVar4 = 0;
      iVar2 = gsSTRINGS::GetStringId(gsStrings,param_1);
      puVar3 = gsSTRINGS::GetStringById(this,iVar2);
      (**(code **)(iVar1 + 0x20))(puVar3,in_stack_00000004,uVar4);
    }
  }
  (**(code **)(*DAT_0060f034 + 0xc))();
  sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
  iVar1 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,param_1,6);
  if (iVar1 != 0) {
    (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
  }
  return;
}




/* from: wr_msgs.cpp
   addr: 0049E3F0 */

int __thiscall wrMSG_SYSTEM::IsAddObj(wrMSG_SYSTEM *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_msg);
  return (uint)(pcVar1 != (char *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_msgs.cpp
   addr: 0049E410 */

int __thiscall
wrMSG_SYSTEM::ProcessMsg(wrMSG_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char *pcVar1;
  gsSTRINGS *pgVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pvVar3 = param_2;
  if (param_1 == 0x3f8) {
    iVar4 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_SHOW);
    if (iVar4 != 0) {
      fVar7 = *(float *)((int)pvVar3 + 0x50);
      pcVar1 = (char *)((int)pvVar3 + 0x60);
      if (fVar7 <= _DAT_005dae54) {
        iVar4 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,(int *)&param_2);
        if ((iVar4 == 0) || (param_2 != (void *)0x0)) {
          iVar4 = gsSTRINGS::GetStringId(gsStrings,pcVar1);
          pgVar2 = gsStrings;
          if (iVar4 != 0) {
            uVar9 = 0;
            uVar8 = 0x3fc00000;
            iVar4 = *(int *)uiSystem;
            iVar5 = gsSTRINGS::GetStringId(gsStrings,pcVar1);
            puVar6 = gsSTRINGS::GetStringById(pgVar2,iVar5);
            (**(code **)(iVar4 + 0x20))(puVar6,uVar8,uVar9);
          }
        }
        (**(code **)(*DAT_0060f034 + 0xc))();
        sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
        iVar4 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,pcVar1,6);
        if (iVar4 != 0) {
          (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
        }
      }
      else {
        iVar4 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,(int *)&param_2);
        if ((iVar4 == 0) || (param_2 != (void *)0x0)) {
          iVar4 = gsSTRINGS::GetStringId(gsStrings,pcVar1);
          pgVar2 = gsStrings;
          if (iVar4 != 0) {
            uVar8 = 0;
            iVar4 = *(int *)uiSystem;
            iVar5 = gsSTRINGS::GetStringId(gsStrings,pcVar1);
            puVar6 = gsSTRINGS::GetStringById(pgVar2,iVar5);
            (**(code **)(iVar4 + 0x20))(puVar6,fVar7,uVar8);
          }
        }
        (**(code **)(*DAT_0060f034 + 0xc))();
        sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
        iVar4 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,pcVar1,6);
        if (iVar4 != 0) {
          (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
        }
      }
    }
  }
  iVar4 = gsDOMAIN_LIST::ProcessMsg((gsDOMAIN_LIST *)this,param_1,pvVar3,param_3,param_4);
  return iVar4;
}




/* from: wr_msgs.cpp
   addr: 0049E5B0 */

int __thiscall wrDOMAIN_MSG::Init(wrDOMAIN_MSG *this)

{
  int iVar1;
  wrDOMAIN_MSG *local_4;
  
  local_4 = this;
  if (*(psSHEET **)(*(int *)(this + 0x34) + 0xf0) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetBool(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_DOM_MSG,s_isShowOnce,
                             (int *)&local_4);
    if ((iVar1 != 0) && (local_4 != (wrDOMAIN_MSG *)0x0)) {
      *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x200;
    }
  }
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  return iVar1;
}




/* from: wr_msgs.cpp
   addr: 0049E600 */

void __thiscall wrDOMAIN_MSG::Enter(wrDOMAIN_MSG *this)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_108;
  char local_104 [260];
  
  if (((*(uint *)(this + 0xd0) & 0x200) == 0) || ((*(uint *)(this + 0xd0) & 0x100) == 0)) {
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x100;
    if (*(psSHEET **)(*(int *)(this + 200) + 0xf0) != (psSHEET *)0x0) {
      iVar1 = psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 200) + 0xf0),s_DOM_MSG,s_msg,local_104,
                              0x104);
      if (iVar1 != 0) {
        iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,&local_108);
        if ((iVar1 == 0) || (local_108 != 0)) {
          iVar1 = gsSTRINGS::GetStringId(gsStrings,local_104);
          this_00 = gsStrings;
          if (iVar1 != 0) {
            iVar1 = *(int *)uiSystem;
            uVar5 = 0;
            uVar4 = 0x3fc00000;
            iVar2 = gsSTRINGS::GetStringId(gsStrings,local_104);
            puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
            (**(code **)(iVar1 + 0x20))(puVar3,uVar4,uVar5);
          }
        }
        (**(code **)(*DAT_0060f034 + 0xc))();
        sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
        iVar1 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,local_104,6);
        if (iVar1 != 0) {
          (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
        }
      }
    }
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
  }
  return;
}




/* from: wr_msgs.cpp
   addr: 0049E720 */

int __thiscall wrSECRET_SYSTEM::IsAddObj(wrSECRET_SYSTEM *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_secret);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: wr_msgs.cpp
   addr: 0049E740 */

int __thiscall
wrSECRET_SYSTEM::ProcessMsg
          (wrSECRET_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = param_1;
  if (param_1 == 0x3f8) {
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_FIND);
    if (iVar1 != 0) {
      iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,&param_1);
      if ((iVar1 == 0) || (param_1 != 0)) {
        iVar1 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_SECRET_FOUND);
        this_00 = gsStrings;
        if (iVar1 != 0) {
          iVar1 = *(int *)uiSystem;
          uVar6 = 0;
          uVar5 = 0x3fc00000;
          iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_SECRET_FOUND);
          puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
          (**(code **)(iVar1 + 0x20))(puVar3,uVar5,uVar6);
        }
      }
      (**(code **)(*DAT_0060f034 + 0xc))();
      sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
      iVar1 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,s_GAME_MSG_SECRET_FOUND,6);
      if (iVar1 != 0) {
        (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
      }
    }
  }
  iVar4 = gsDOMAIN_LIST::ProcessMsg((gsDOMAIN_LIST *)this,iVar4,param_2,param_3,param_4);
  return iVar4;
}




/* from: wr_msgs.cpp
   addr: 0049E840 */

int __thiscall wrDOMAIN_SECRET::Init(wrDOMAIN_SECRET *this)

{
  int iVar1;
  
  if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
    *(int *)(wrSysStat + 0x98) = *(int *)(wrSysStat + 0x98) + 1;
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)(this + -0x94));
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  return iVar1;
}




/* from: wr_msgs.cpp
   addr: 0049E870 */

void __thiscall wrDOMAIN_SECRET::Update(wrDOMAIN_SECRET *this,m3dV *param_1)

{
  int iVar1;
  int iVar2;
  entENTITY *peVar3;
  int iVar4;
  wrDOMAIN_SECRET *pwVar5;
  
  iVar2 = (**(code **)(*(int *)(this + 0x94) + 0xc))(param_1);
  if ((iVar2 != 0) &&
     (peVar3 = gsMP_SERVER::GetPlayer(gsSysServer,*(int *)(DAT_0060f02c + 0x94)),
     peVar3 != (entENTITY *)0x0)) {
    iVar2 = *(int *)(this + 300);
    iVar1 = *(int *)(peVar3 + 0x8c);
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x130;
      do {
        if (*(int *)pwVar5 == iVar1) {
          return;
        }
        iVar4 = iVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar4 < iVar2);
    }
    if (iVar2 == 0x10) {
      *(undefined4 *)(this + 300) = 0xf;
    }
    *(int *)(this + *(int *)(this + 300) * 4 + 0x130) = iVar1;
    *(int *)(this + 300) = *(int *)(this + 300) + 1;
    if (((byte)this[0x88] & 4) != 0) {
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&stack0xfffffff0,0x20000,
                 0xfffffffd,0xfffffffd);
    }
  }
  return;
}




/* from: wr_msgs.cpp
   addr: 0049E960 */

int __thiscall
wrDOMAIN_SECRET::ProcessMsg
          (wrDOMAIN_SECRET *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  gsSTRINGS *this_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  entIACTIVE_OBJ *peVar5;
  wrSTAT *pwVar6;
  wrDOMAIN_SECRET *pwVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pvVar1 = param_2;
  if (param_1 == 0x408) {
    iVar2 = *(int *)(this + 300);
    iVar3 = 0;
    if (0 < iVar2) {
      pwVar7 = this + 0x130;
      do {
        if (*(int *)pwVar7 == *(int *)((int)param_2 + 0x8c)) break;
        iVar3 = iVar3 + 1;
        pwVar7 = pwVar7 + 4;
      } while (iVar3 < iVar2);
    }
    if (iVar3 != iVar2) {
      if (iVar3 < iVar2 + -1) {
        pwVar7 = this + iVar3 * 4 + 0x130;
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)pwVar7 = *(undefined4 *)(pwVar7 + 4);
          pwVar7 = pwVar7 + 4;
        } while (iVar3 < *(int *)(this + 300) + -1);
      }
      *(int *)(this + 300) = *(int *)(this + 300) + -1;
    }
  }
  else if ((param_1 == 0x40c) && (*(int *)((int)param_2 + 4) == 0)) {
    if (*(int *)((int)param_2 + 8) == *(int *)(plrPlayer + 0x8c)) {
      iVar2 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,(int *)&param_2);
      if ((iVar2 == 0) || (param_2 != (void *)0x0)) {
        iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_SECRET_FOUND);
        this_00 = gsStrings;
        if (iVar2 != 0) {
          uVar9 = 0;
          uVar8 = 0x3fc00000;
          iVar2 = *(int *)uiSystem;
          iVar3 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_SECRET_FOUND);
          puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
          (**(code **)(iVar2 + 0x20))(puVar4,uVar8,uVar9);
        }
      }
      (**(code **)(*DAT_0060f034 + 0xc))();
      sncSOUND_DESCR::UnlinkData((sncSOUND_DESCR *)&DAT_0060f038);
      iVar2 = sncSOUND_DESCR::LinkData((sncSOUND_DESCR *)&DAT_0060f038,s_GAME_MSG_SECRET_FOUND,6);
      if (iVar2 != 0) {
        (**(code **)(*DAT_0060f034 + 4))(&DAT_0060f038,0);
      }
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
    }
    if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
      peVar5 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)pvVar1 + 8),0);
      pwVar6 = wrSTAT_SYSTEM::GetPlayerStat(wrSysStat,(plrPLAYER_COMMON *)peVar5);
      *(int *)(pwVar6 + 0x74) = *(int *)(pwVar6 + 0x74) + 1;
    }
  }
  iVar2 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,pvVar1,param_3,param_4);
  return iVar2;
}




/* from: wr_msgs.cpp
   addr: 0049EB20 */

scnDOMAIN * __thiscall gsDOMAIN_LIST::MakeSubDomain(gsDOMAIN_LIST *this,gsDOMAIN *param_1)

{
  scnDOMAIN *psVar1;
  
  psVar1 = (scnDOMAIN *)operator_new(0x3c);
  if (psVar1 != (scnDOMAIN *)0x0) {
    *(undefined4 *)(psVar1 + 4) = 0;
    *(undefined4 *)(psVar1 + 8) = 0;
    *(undefined4 *)(psVar1 + 0xc) = 0;
    *(undefined4 *)(psVar1 + 0x14) = 1;
    *(undefined ***)(psVar1 + 0x10) = &m3dBOX::_vftable_;
    *(undefined4 *)(psVar1 + 0x30) = 0;
    *(undefined4 *)(psVar1 + 0x34) = 0;
    *(undefined4 *)(psVar1 + 0x38) = 0;
    *(undefined ***)psVar1 = &scnDOMAIN::_vftable_;
    return psVar1;
  }
  return (scnDOMAIN *)0x0;
}




/* from: wr_msgs.cpp
   addr: 0049EB60 */

void __thiscall gsDOMAIN_LIST::DestroySubDomain(gsDOMAIN_LIST *this,scnDOMAIN *param_1)

{
  if (param_1 != (scnDOMAIN *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049eb72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1)();
    return;
  }
  return;
}




/* from: wr_msgs.cpp
   addr: 0049EB80 */

gsDOMAIN * __thiscall wrMSG_SYSTEM::MakeDomain(wrMSG_SYSTEM *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(300);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined ***)this_00 = &wrDOMAIN_MSG::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &wrDOMAIN_MSG::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: wr_msgs.cpp
   addr: 0049EBC0 */

gsDOMAIN * __thiscall wrSECRET_SYSTEM::MakeDomain(wrSECRET_SYSTEM *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(0x170);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined4 *)(this_00 + 300) = 0;
    *(undefined ***)this_00 = &wrDOMAIN_SECRET::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &wrDOMAIN_SECRET::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}

