
/* from: gs:gs_mp_misc.cpp
   addr: 004FA910 */

int __fastcall gsMPInit(void)

{
  gsMP_NETWORK *this;
  gsMP_SYSTEM *pgVar1;
  
  this = (gsMP_NETWORK *)operator_new(0xe0);
  if (this == (gsMP_NETWORK *)0x0) {
    gsSysNetwork = (gsMP_NETWORK *)0x0;
  }
  else {
    gsSysNetwork = (gsMP_NETWORK *)gsMP_NETWORK::gsMP_NETWORK(this);
  }
  *(undefined4 *)(gsSysNetwork + 0x14) = 0x244e4554;
  *(undefined4 *)(gsSysNetwork + 0x1c) = 0x12;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsSysNetwork,0x24535953,0);
  pgVar1 = (gsMP_SYSTEM *)operator_new(0x664);
  if (pgVar1 == (gsMP_SYSTEM *)0x0) {
    pgVar1 = (gsMP_SYSTEM *)0x0;
  }
  else {
    *(undefined4 *)(pgVar1 + 4) = 0;
    *(undefined4 *)(pgVar1 + 8) = 0;
    *(undefined4 *)(pgVar1 + 0xc) = 0;
    *(undefined4 *)(pgVar1 + 0x10) = 0x4d414452;
    *(undefined4 *)(pgVar1 + 0x14) = 0;
    *(undefined4 *)(pgVar1 + 0x18) = 0;
    *(undefined4 *)(pgVar1 + 0x1c) = 0;
    *(undefined4 *)(pgVar1 + 0x20) = 0;
    *(undefined4 *)(pgVar1 + 0x24) = 0;
    *(undefined ***)pgVar1 = &msgADDR::_vftable_;
    *(undefined4 *)(pgVar1 + 0x644) = 0;
    gsMP_STAT::gsMP_STAT((gsMP_STAT *)(pgVar1 + 0x648));
    *(undefined ***)pgVar1 = &gsMP_SYSTEM::_vftable_;
    *(undefined4 *)(pgVar1 + 0x28) = 0;
    *(char **)(pgVar1 + 0x30) = s_Single;
    *(char **)(pgVar1 + 0x34) = s_Server;
    *(char **)(pgVar1 + 0x38) = s_Client;
    *(char **)(pgVar1 + 0x3c) = s_ServerOnly;
  }
  gsSysMP = pgVar1;
  *(undefined4 *)(pgVar1 + 0x14) = 0x244d5024;
  *(undefined4 *)(gsSysMP + 0x1c) = 0x14;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsSysMP,0x24535953,0);
  *(undefined4 *)(gsSysServer + 0x14) = 0x4d505352;
  *(undefined4 *)(gsSysServer + 0x1c) = 0x19;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsSysServer,0x24535953,0);
  *(undefined4 *)(gsSysClient + 0x14) = 0x4d50434c;
  *(undefined4 *)(gsSysClient + 0x1c) = 0x19;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsSysClient,0x24535953,0);
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAA70 */

void __fastcall gsMPTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)gsSysMP);
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)gsSysNetwork);
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAAA0
   addr: 004FAAA0 */

void * __thiscall gsMP_SYSTEM::_scalar_deleting_destructor_(gsMP_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x658));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAAE0 */

int __thiscall gsMP_SYSTEM::Init(gsMP_SYSTEM *this)

{
  msgSYSTEM::RegisterMsgData(&msgSystem,(msgDATA_PACK *)&DAT_00948268);
  msgSYSTEM::RegisterMsgData(&msgSystem,(msgDATA_PACK *)&DAT_00948254);
  msgSYSTEM::RegisterMsgData(&msgSystem,(msgDATA_PACK *)&DAT_00948278);
  (**(code **)(*(int *)gsSysServer + 0x10))();
  (**(code **)(*(int *)gsSysClient + 0x10))();
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAB30 */

void __thiscall gsMP_SYSTEM::Term(gsMP_SYSTEM *this)

{
  if (uiSystem != (uiUI_SYSTEM *)0x0) {
    (**(code **)(*(int *)uiSystem + 0x3c))();
    (**(code **)(*(int *)uiSystem + 0x34))();
  }
  (**(code **)(*(int *)gsSysServer + 0x14))();
  (**(code **)(*(int *)gsSysClient + 0x14))();
  gsDEMO::Term(&gsDemo);
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAB70 */

int __thiscall gsMP_SYSTEM::InitGame(gsMP_SYSTEM *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(this + 0x28) = param_1;
  gsDEMO::Init(&gsDemo);
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 1) {
    (**(code **)(*(int *)gsSysServer + 0x18))(1);
    (**(code **)(*(int *)gsSysClient + 0x18))(1);
  }
  else if (iVar1 == 2) {
    iVar1 = (**(code **)(*(int *)gsSysServer + 0x18))(2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)gsSysClient + 0x18))((byte)((uint)gsAppState >> 8) & 4 | 2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = (**(code **)(*(int *)gsSysServer + 0x18))(0x20);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 0x10;
    if ((gsAppState & 0x800U) != 0) {
      uVar2 = 0x14;
    }
    iVar1 = (**(code **)(*(int *)gsSysClient + 0x18))(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAC30 */

void __thiscall gsMP_SYSTEM::TermGame(gsMP_SYSTEM *this)

{
  (**(code **)(*(int *)gsSysServer + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x004fac43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)gsSysClient + 0x1c))();
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAC50 */

int __thiscall gsMP_SYSTEM::JoinGame(gsMP_SYSTEM *this)

{
  char cVar1;
  int iVar2;
  entENTITY *peVar3;
  msgADDR *pmVar4;
  char local_160 [64];
  char acStack_120 [4];
  undefined1 local_11c;
  char acStack_e0 [4];
  undefined1 local_dc;
  undefined4 local_9c;
  animCREATE_DATA local_98 [152];
  
  local_160[0] = -1;
  local_160[1] = -1;
  local_160[2] = -1;
  local_160[3] = -1;
  local_9c = 0xffffffff;
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_11c = 0;
  local_dc = 0;
  if ((*(int *)(this + 0x28) == 2) || (*(int *)(this + 0x28) == 4)) {
    iVar2 = (**(code **)(*(int *)gsSysServer + 0x20))();
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(int *)gsSysClient + 0x20))();
  }
  if ((gsAppState & 0x800U) != 0) {
    gsDEMO::Play_Start(&gsDemo,(char *)0x0);
    return 1;
  }
  iVar2 = 0;
  do {
    cVar1 = s_[iVar2];
    local_160[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  _apCfgReadString((void **)0x0,s_Multiplayer,s_PlayerName,local_160,0x40);
  iVar2 = 0;
  do {
    cVar1 = s_player[iVar2];
    acStack_120[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  iVar2 = 0;
  do {
    cVar1 = s_player[iVar2];
    acStack_e0[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*(int *)gsSysClient + 0x2c))(0,0x401);
  iVar2 = *(int *)(this + 0x28);
  if ((iVar2 == 2) || (iVar2 == 1)) {
    gsMP_SERVER::GetPlayer(gsSysServer,0);
    (**(code **)(*(int *)gsSysClient + 0x2c))(0,0x405,&stack0xfffffe78,0x20000);
    pmVar4 = (msgADDR *)0x0;
    peVar3 = gsMP_SERVER::GetPlayer(gsSysServer,0);
    msgSYSTEM::SendAll(&msgSystem,0x407,peVar3,pmVar4);
  }
  else if (iVar2 == 3) {
    gsAppState = gsAppState | 0x400000;
  }
  if ((gsAppState & 0x400U) != 0) {
    gsDEMO::Record_Start(&gsDemo);
  }
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAE20 */

void __thiscall gsMP_SYSTEM::LeaveGame(gsMP_SYSTEM *this)

{
  entENTITY *peVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(this + 0x28) == 2) || (*(int *)(this + 0x28) == 1)) {
    local_c = 0;
    local_b = 0x40;
    local_8 = 0xffffffff;
    local_4 = 1;
    local_a = 0xc;
    peVar1 = gsMP_SERVER::GetPlayer(gsSysServer,0);
    local_8 = *(undefined4 *)(peVar1 + 0x8c);
    local_4 = 0;
    (**(code **)(*(int *)gsSysClient + 0x2c))(0,0x405,&local_c,0x20000);
  }
  peVar1 = (entENTITY *)0x0;
  while( true ) {
    if (*(int *)(this + 0x28) == 3) {
      peVar1 = gsMP_CLIENT::GetNextPlayer(gsSysClient,peVar1);
    }
    else {
      peVar1 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar1);
    }
    if (peVar1 == (entENTITY *)0x0) break;
    msgSYSTEM::SendAll(&msgSystem,0x408,peVar1,(msgADDR *)0x0);
  }
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAEE0 */

void __thiscall gsMP_SYSTEM::SetupMPStates(gsMP_SYSTEM *this)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    this = (gsMP_SYSTEM *)0x6;
  }
  else if (iVar1 == 3) {
    this = (gsMP_SYSTEM *)&DAT_00000002;
  }
  else if (iVar1 == 0) {
    this = (gsMP_SYSTEM *)0x0;
  }
  for (peVar2 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar2 != (entIACTIVE_OBJ *)0x0;
      peVar2 = entFindNextIO(peVar2)) {
    *(uint *)(peVar2 + 0x88) = *(uint *)(peVar2 + 0x88) & 0xfffffff9 | (uint)this;
  }
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAF40 */

int __thiscall
gsMP_SYSTEM::ProcessMsg(gsMP_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 == 1000) {
    (**(code **)(*(int *)this + 0x10))();
  }
  else {
    if (param_1 == 0x3f4) {
      (**(code **)(*(int *)this + 0x14))();
      return 0;
    }
    if (param_1 == 0x3f5) {
      (**(code **)(*(int *)this + 0x18))();
      return 0;
    }
  }
  return 0;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FAFA0 */

void __thiscall gsMP_SYSTEM::ProcessINIT_LEVEL(gsMP_SYSTEM *this)

{
  char cVar1;
  animINST *paVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  m3dV *local_8;
  
  iVar6 = 0;
  *(undefined4 *)(this + 0x640) = 0;
  if (*(int *)(this + 0x28) == 1) {
    paVar2 = scnSCENE::FindInstName(gsScenePtr,s_start_pos);
    if (paVar2 == (animINST *)0x0) {
      return;
    }
    animINST::GetPos(paVar2,(m3dV *)(this + 0x40));
    animINST::GetDir(paVar2,(m3dV *)(this + 0x340));
    *(undefined4 *)(this + 0x640) = 1;
    return;
  }
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_start_pos_coop);
  if (paVar2 == (animINST *)0x0) {
    paVar2 = scnSCENE::FindInstName(gsScenePtr,s_start_pos);
    if (paVar2 == (animINST *)0x0) goto LAB_004fb057;
    animINST::GetPos(paVar2,(m3dV *)(this + 0x40));
  }
  else {
    animINST::GetPos(paVar2,(m3dV *)(this + 0x40));
  }
  animINST::GetDir(paVar2,(m3dV *)(this + 0x340));
  iVar6 = 1;
LAB_004fb057:
  paVar2 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
  if (paVar2 != (animINST *)0x0) {
    local_8 = (m3dV *)(this + iVar6 * 0xc + 0x340);
    do {
      pcVar4 = s_;
      if (*(char **)(paVar2 + 0x18) != (char *)0x0) {
        pcVar4 = *(char **)(paVar2 + 0x18);
      }
      uVar5 = 0xffffffff;
      pcVar7 = s_start_pos;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar3 = strncmp(pcVar4,s_start_pos,~uVar5 - 1);
      if (iVar3 == 0) {
        pcVar4 = *(char **)(paVar2 + 0x18);
        pcVar7 = s_;
        if (pcVar4 != (char *)0x0) {
          pcVar7 = pcVar4;
        }
        iVar3 = 10;
        bVar9 = true;
        pcVar8 = s_start_pos;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar9 = *pcVar7 == *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (!bVar9) {
          if (pcVar4 == (char *)0x0) {
            pcVar4 = s_;
          }
          iVar3 = 0xf;
          bVar9 = true;
          pcVar7 = s_start_pos_coop;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar9 = *pcVar4 == *pcVar7;
            pcVar4 = pcVar4 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar9);
          if (!bVar9) {
            animINST::GetPos(paVar2,local_8 + -0x300);
            animINST::GetDir(paVar2,local_8);
            iVar6 = iVar6 + 1;
            local_8 = local_8 + 0xc;
            if (0x3f < iVar6) break;
          }
        }
      }
      paVar2 = scnSCENE::FindNextInst(gsScenePtr,paVar2);
    } while (paVar2 != (animINST *)0x0);
  }
  *(int *)(this + 0x640) = iVar6;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FB150 */

void __thiscall gsMP_SYSTEM::SelectStartPosDir(gsMP_SYSTEM *this,m3dV *param_1,m3dV *param_2)

{
  int iVar1;
  int iVar2;
  gsMP_SYSTEM *pgVar3;
  entENTITY *peVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = 0;
  if (*(int *)(this + 0x640) != 0) {
    if (*(int *)(this + 0x28) == 3) {
      iVar1 = gsMP_CLIENT::GetNPlayer(gsSysClient);
    }
    else {
      iVar1 = gsMP_SERVER::GetNPlayer(gsSysServer);
    }
    if (iVar1 < 2) {
      local_14 = 0;
    }
    else {
      local_10 = 0.0;
      local_14 = 0;
      if (0 < *(int *)(this + 0x640)) {
        pgVar3 = this + 0x48;
        do {
          peVar4 = (entENTITY *)0x0;
          local_18 = DAT_005dc5c8;
          while( true ) {
            if (*(int *)(this + 0x28) == 3) {
              peVar4 = gsMP_CLIENT::GetNextPlayer(gsSysClient,peVar4);
            }
            else {
              peVar4 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar4);
            }
            if (peVar4 == (entENTITY *)0x0) break;
            animINST::GetPos(*(animINST **)(peVar4 + 0xbc),(m3dV *)&local_c);
            local_1c = (local_c - *(float *)(pgVar3 + -8)) * (local_c - *(float *)(pgVar3 + -8)) +
                       (local_8 - *(float *)(pgVar3 + -4)) * (local_8 - *(float *)(pgVar3 + -4)) +
                       (local_4 - *(float *)pgVar3) * (local_4 - *(float *)pgVar3);
            if (m3dSimdType == 0) {
              local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar9 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
              fVar8 = auVar9._0_4_;
              local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar8 * fVar8) *
                         local_1c;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar5 = (ulonglong)(uint)local_1c;
              uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
              uVar7 = PackedFloatingMUL(uVar6,uVar6);
              uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
              uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
              uVar6 = PackedFloatingMUL(uVar6,uVar5);
              local_1c = (float)uVar6;
              FastExitMediaState();
            }
            else {
              local_1c = SQRT(local_1c);
            }
            if (local_1c < local_18) {
              local_18 = local_1c;
            }
          }
          if (local_10 < local_18) {
            local_10 = local_18;
            local_14 = iVar2;
          }
          iVar2 = iVar2 + 1;
          pgVar3 = pgVar3 + 0xc;
        } while (iVar2 < *(int *)(this + 0x640));
      }
    }
    *(undefined4 *)param_1 = *(undefined4 *)(this + local_14 * 0xc + 0x40);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + local_14 * 0xc + 0x44);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + local_14 * 0xc + 0x48);
    *(undefined4 *)param_2 = *(undefined4 *)(this + local_14 * 0xc + 0x340);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + local_14 * 0xc + 0x344);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + local_14 * 0xc + 0x348);
    return;
  }
  (**(code **)(*(int *)(*(int *)(gsScenePtr + 0x44) + 0xc0) + 0x24))(param_1);
  *(undefined4 *)param_1 = _m3dVUnitX;
  *(undefined4 *)(param_1 + 4) = DAT_005f9988;
  *(undefined4 *)(param_1 + 8) = DAT_005f998c;
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB380 */

void __thiscall
gsMP_SYSTEM::GetStartPosDir(gsMP_SYSTEM *this,int param_1,m3dV *param_2,m3dV *param_3)

{
  gsMP_SYSTEM *pgVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x640) <= param_1)) {
    param_1 = m3dRandIntMax(*(int *)(this + 0x640));
    if ((param_1 < 0) || (*(int *)(this + 0x640) <= param_1)) {
      param_1 = 0;
    }
  }
  if (param_2 != (m3dV *)0x0) {
    pgVar1 = this + param_1 * 0xc + 0x40;
    *(undefined4 *)param_2 = *(undefined4 *)pgVar1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pgVar1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pgVar1 + 8);
  }
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)(this + param_1 * 0xc + 0x340);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + param_1 * 0xc + 0x344);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + param_1 * 0xc + 0x348);
  }
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB410 */

char * __thiscall gsMP_SYSTEM::Mode2String(gsMP_SYSTEM *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 5)) {
    return *(char **)(this + param_1 * 4 + 0x2c);
  }
  return (char *)0x0;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB430 */

int __thiscall gsMP_SYSTEM::String2Mode(gsMP_SYSTEM *this,char *param_1)

{
  int iVar1;
  int iVar2;
  gsMP_SYSTEM *pgVar3;
  
  iVar2 = 1;
  pgVar3 = this + 0x30;
  do {
    iVar1 = stricmp(param_1,*(char **)pgVar3);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    pgVar3 = pgVar3 + 4;
  } while (iVar2 < 5);
  return 0;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB470 */

int __thiscall gsMP_SYSTEM::ReadMode(gsMP_SYSTEM *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  gsMP_SYSTEM *pgVar6;
  char local_40 [64];
  
  iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,s_Mode,local_40,0x40);
  if (iVar2 == 0) {
    pcVar4 = *(char **)(gsSysMP + 0x30);
    pcVar5 = local_40;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  iVar2 = 1;
  pgVar6 = gsSysMP + 0x30;
  do {
    iVar3 = stricmp(local_40,*(char **)pgVar6);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        return 1;
      }
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    pgVar6 = pgVar6 + 4;
  } while (iVar2 < 5);
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB4F0 */

int __thiscall gsMP_SYSTEM::IsRegularMPID(gsMP_SYSTEM *this,ulong param_1)

{
  if (((param_1 != 0xffffffff) && (param_1 != 0xfffffffd)) && (param_1 != 0xfffffffe)) {
    return 1;
  }
  return 0;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FB510
   addr: 004FB510 */

entIACTIVE_OBJ * __thiscall gsMP_SYSTEM::FindEnt(gsMP_SYSTEM *this,int param_1,int param_2)

{
  entIACTIVE_OBJ *peVar1;
  
  if (((param_1 != -1) && (param_1 != -3)) && (param_1 != -2)) {
    for (peVar1 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar1 != (entIACTIVE_OBJ *)0x0;
        peVar1 = entFindNextIO(peVar1)) {
      if (*(int *)(peVar1 + 0x8c) == param_1) {
        if (param_2 == 0) {
          return peVar1;
        }
        if ((*(uint *)(peVar1 + 0x88) & param_2) != 0) {
          return peVar1;
        }
      }
    }
  }
  return (entIACTIVE_OBJ *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FB560 */

void __thiscall gsMP_SYSTEM::UpdateEntFrame(gsMP_SYSTEM *this,entENTITY *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  gsMSG_MP_UPD_STATE *pgVar4;
  int iVar5;
  gsMP_CLIENT_FILTER *pgVar6;
  entENTITY *peVar7;
  entENTITY *peVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  msgDATA mStack_ac;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  entENTITY eStack_a4;
  undefined4 uStack_a3;
  undefined4 local_9f;
  undefined4 uStack_9b;
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined4 uStack_87;
  undefined4 uStack_83;
  undefined4 uStack_7f;
  undefined4 uStack_7b;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined4 uStack_5f;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined **ppuStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char acStack_40 [64];
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == -3) {
    return;
  }
  if (iVar2 == -2) {
    return;
  }
  if (((byte)param_1[0x88] & 1) != 0) {
    if ((*(uint *)(param_1 + 0xb4) & 0x100) == 0) goto LAB_004fb5e9;
    (**(code **)(*(int *)param_1 + 0x54))();
  }
  if (((*(uint *)(param_1 + 0xb4) & 0x100) != 0) &&
     ((((uVar1 = *(uint *)(param_1 + 0x88), (uVar1 & 2) != 0 && ((uVar1 & 5) == 0)) ||
       ((uVar1 & 4) != 0)) && (iVar2 = UpdateDeadReckonData(this,param_1), iVar2 != 0)))) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x10;
  }
LAB_004fb5e9:
  uVar1 = *(uint *)(param_1 + 0x88);
  if (((uVar1 & 2) == 0) || ((uVar1 & 5) != 0)) {
    if ((uVar1 & 4) != 0) {
      uStack_54 = *(undefined4 *)(param_1 + 0x90);
      uStack_44 = 0xffffffff;
      uStack_50 = 0xffffffff;
      ppuStack_4c = &gsMP_CLIENT_FILTER_SNAPSHOT::_vftable_;
      ppuStack_58 = &gsMP_CLIENT_FILTER_CLIENT2::_vftable_;
      pgVar6 = (gsMP_CLIENT_FILTER *)&ppuStack_4c;
      if ((uVar1 & 0x10) != 0) {
        pgVar6 = (gsMP_CLIENT_FILTER *)&ppuStack_58;
      }
      uStack_48 = uStack_54;
      if ((*(uint *)(param_1 + 0xb4) & 0x100) != 0) {
        local_9f = DAT_00963740;
        uStack_93 = DAT_00963740;
        uStack_87 = DAT_00963740;
        uStack_7b = DAT_00963740;
        uStack_6f = DAT_00963740;
        uStack_63 = DAT_00963740;
        uStack_a3 = _m3dVZero;
        uStack_97 = _m3dVZero;
        uStack_8b = _m3dVZero;
        uStack_7f = _m3dVZero;
        uStack_73 = _m3dVZero;
        uStack_67 = _m3dVZero;
        uStack_9b = DAT_00963744;
        uStack_8f = DAT_00963744;
        uStack_83 = DAT_00963744;
        uStack_77 = DAT_00963744;
        uStack_6b = DAT_00963744;
        uStack_5f = DAT_00963744;
        mStack_ac = DAT_0094827c;
        uStack_ab = 0x40;
        eStack_a4 = (entENTITY)0x0;
        uStack_aa = 0x51;
        (**(code **)(*(int *)param_1 + 0x50))(&mStack_ac);
        iVar2 = *(int *)(param_1 + 0xbc);
        peVar7 = &eStack_a4;
        peVar8 = param_1 + 0xfc;
        for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)peVar8 = *(undefined4 *)peVar7;
          peVar7 = peVar7 + 4;
          peVar8 = peVar8 + 4;
        }
        *peVar8 = *peVar7;
        pcVar3 = *(char **)(iVar2 + 0x18);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_;
        }
        sprintf(acStack_40,s_mp_send__s_log,pcVar3);
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)param_1,0x40a,&mStack_ac,0xc0000,pgVar6);
      }
      if ((*(uint *)(param_1 + 0xb4) & 0x400) != 0) {
        pgVar4 = (gsMSG_MP_UPD_STATE *)(**(code **)(*(int *)param_1 + 0x1c))();
        entIACTIVE_OBJ::PrepareMP_UPD_STATE((entIACTIVE_OBJ *)param_1,pgVar4);
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)param_1,0x40c,(msgDATA *)pgVar4,0xc0000,pgVar6);
      }
    }
  }
  else if ((*(int *)(gsSysClient + 0x478) != 0) || ((uVar1 & 0x10) != 0)) {
    if ((*(uint *)(param_1 + 0xb4) & 0x100) != 0) {
      local_9f = DAT_00963740;
      uStack_93 = DAT_00963740;
      uStack_87 = DAT_00963740;
      uStack_7b = DAT_00963740;
      uStack_6f = DAT_00963740;
      uStack_63 = DAT_00963740;
      uStack_a3 = _m3dVZero;
      uStack_9b = DAT_00963744;
      uStack_97 = _m3dVZero;
      uStack_8f = DAT_00963744;
      uStack_8b = _m3dVZero;
      uStack_83 = DAT_00963744;
      uStack_7f = _m3dVZero;
      uStack_77 = DAT_00963744;
      uStack_73 = _m3dVZero;
      uStack_6b = DAT_00963744;
      uStack_67 = _m3dVZero;
      uStack_5f = DAT_00963744;
      uStack_ab = 0x40;
      eStack_a4 = (entENTITY)0x0;
      uStack_aa = 0x51;
      mStack_ac = DAT_0094827c;
      (**(code **)(*(int *)param_1 + 0x50))(&mStack_ac);
      if (((byte)param_1[0x88] & 0x10) == 0) {
        uVar10 = 0x50000;
        uVar9 = 0x40a;
      }
      else {
        uVar10 = 0x10000;
        uVar9 = 0x40b;
      }
      (**(code **)(*(int *)gsSysClient + 0x2c))(param_1,uVar9,&stack0xffffff50,uVar10);
      iVar2 = *(int *)(param_1 + 0xbc);
      peVar7 = &eStack_a4;
      peVar8 = param_1 + 0xfc;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)peVar8 = *(undefined4 *)peVar7;
        peVar7 = peVar7 + 4;
        peVar8 = peVar8 + 4;
      }
      *peVar8 = *peVar7;
      pcVar3 = *(char **)(iVar2 + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      sprintf(acStack_40,s_mp_send__s_log,pcVar3);
    }
    if ((*(uint *)(param_1 + 0xb4) & 0x400) != 0) {
      pgVar4 = (gsMSG_MP_UPD_STATE *)(**(code **)(*(int *)param_1 + 0x1c))();
      entIACTIVE_OBJ::PrepareMP_UPD_STATE((entIACTIVE_OBJ *)param_1,pgVar4);
      if (((byte)param_1[0x88] & 0x10) != 0) {
        *(undefined4 *)(pgVar4 + 4) = 0xffffff9e;
      }
      (**(code **)(*(int *)gsSysClient + 0x2c))(param_1,0x40c,pgVar4,0x50000);
    }
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffef;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FB8D0 */

int __thiscall gsMP_SYSTEM::UpdateDeadReckonData(gsMP_SYSTEM *this,entENTITY *param_1)

{
  entENTITY *peVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_4c;
  float local_48;
  float local_44;
  char local_40 [64];
  
  peVar1 = param_1;
  fVar6 = gsElapsedTime;
  if (___real_3ba3d70a < ABS(*(float *)(param_1 + 0x125))) {
    *(float *)(param_1 + 0x121) =
         gsElapsedTime * *(float *)(param_1 + 0x139) + *(float *)(param_1 + 0x121);
    *(float *)(param_1 + 0x125) = fVar6 * *(float *)(param_1 + 0x13d) + *(float *)(param_1 + 0x125);
    *(float *)(param_1 + 0x129) = fVar6 * *(float *)(param_1 + 0x141) + *(float *)(param_1 + 0x129);
  }
  fVar6 = gsElapsedTime;
  *(float *)(param_1 + 0xfd) =
       gsElapsedTime * *(float *)(param_1 + 0x121) + *(float *)(param_1 + 0xfd);
  *(float *)(param_1 + 0x101) = fVar6 * *(float *)(param_1 + 0x125) + *(float *)(param_1 + 0x101);
  *(float *)(param_1 + 0x105) = fVar6 * *(float *)(param_1 + 0x129) + *(float *)(param_1 + 0x105);
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_4c);
  pcVar2 = *(char **)(*(int *)(param_1 + 0xbc) + 0x18);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  sprintf(local_40,s_mp_send__s_log,pcVar2);
  fVar6 = (local_4c - *(float *)(param_1 + 0xfd)) * (local_4c - *(float *)(param_1 + 0xfd)) +
          (local_48 - *(float *)(param_1 + 0x101)) * (local_48 - *(float *)(param_1 + 0x101)) +
          (local_44 - *(float *)(param_1 + 0x105)) * (local_44 - *(float *)(param_1 + 0x105));
  uVar4 = extraout_MM1;
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    param_1 = (entENTITY *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar6;
    uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_1 = (entENTITY *)uVar4;
    FastExitMediaState();
  }
  else {
    param_1 = (entENTITY *)SQRT(fVar6);
  }
  if ((float)param_1 <= ___real_3dcccccd) {
    fVar6 = (*(float *)(peVar1 + 0xe0) - *(float *)(peVar1 + 0x121)) *
            (*(float *)(peVar1 + 0xe0) - *(float *)(peVar1 + 0x121)) +
            (*(float *)(peVar1 + 0xe4) - *(float *)(peVar1 + 0x125)) *
            (*(float *)(peVar1 + 0xe4) - *(float *)(peVar1 + 0x125)) +
            (*(float *)(peVar1 + 0xe8) - *(float *)(peVar1 + 0x129)) *
            (*(float *)(peVar1 + 0xe8) - *(float *)(peVar1 + 0x129));
    if (m3dSimdType == 0) {
      fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      param_1 = (entENTITY *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar6;
      uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_1 = (entENTITY *)uVar4;
      FastExitMediaState();
    }
    else {
      param_1 = (entENTITY *)SQRT(fVar6);
    }
    if ((float)param_1 <= ___real_40000000) {
      fVar6 = *(float *)(peVar1 + 0xe0) * *(float *)(peVar1 + 0xe0) +
              *(float *)(peVar1 + 0xe4) * *(float *)(peVar1 + 0xe4) +
              *(float *)(peVar1 + 0xe8) * *(float *)(peVar1 + 0xe8);
      if (m3dSimdType == 0) {
        fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        param_1 = (entENTITY *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar6;
        uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        param_1 = (entENTITY *)uVar4;
        FastExitMediaState();
      }
      else {
        param_1 = (entENTITY *)SQRT(fVar6);
      }
      if ((float)param_1 < ___real_3c23d70a) {
        fVar6 = (*(float *)(peVar1 + 0xe0) - *(float *)(peVar1 + 0x121)) *
                (*(float *)(peVar1 + 0xe0) - *(float *)(peVar1 + 0x121)) +
                (*(float *)(peVar1 + 0xe4) - *(float *)(peVar1 + 0x125)) *
                (*(float *)(peVar1 + 0xe4) - *(float *)(peVar1 + 0x125)) +
                (*(float *)(peVar1 + 0xe8) - *(float *)(peVar1 + 0x129)) *
                (*(float *)(peVar1 + 0xe8) - *(float *)(peVar1 + 0x129));
        if (m3dSimdType == 0) {
          fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar7 = auVar8._0_4_;
          param_1 = (entENTITY *)
                    (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)fVar6;
          uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          param_1 = (entENTITY *)uVar4;
          FastExitMediaState();
        }
        else {
          param_1 = (entENTITY *)SQRT(fVar6);
        }
        if (___real_3e4ccccd < (float)param_1) {
          return 1;
        }
      }
      pcVar2 = *(char **)(*(int *)(peVar1 + 0xbc) + 0x18);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      sprintf(local_40,s_mp_send__s_log,pcVar2);
      return 0;
    }
  }
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBD50 */

entENTITY * __thiscall gsMP_SYSTEM::FindPlrLocal(gsMP_SYSTEM *this)

{
  entENTITY *peVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  peVar1 = entFindNext((entENTITY *)0x0);
  do {
    if (peVar1 == (entENTITY *)0x0) {
      return (entENTITY *)0x0;
    }
    pcVar2 = *(char **)(*(int *)(peVar1 + 0xbc) + 0x1c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar3 = 7;
    bVar5 = true;
    pcVar4 = s_player;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return peVar1;
    }
    peVar1 = entFindNext(peVar1);
  } while( true );
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBDA0 */

entENTITY * __thiscall gsMP_SYSTEM::GetNextPlayer(gsMP_SYSTEM *this,entENTITY *param_1)

{
  entENTITY *peVar1;
  
  if (*(int *)(this + 0x28) == 3) {
    peVar1 = gsMP_CLIENT::GetNextPlayer(gsSysClient,param_1);
    return peVar1;
  }
  peVar1 = gsMP_SERVER::GetNextPlayer(gsSysServer,param_1);
  return peVar1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBDC0 */

int __thiscall gsMP_SYSTEM::WriteInst(gsMP_SYSTEM *this,fioFILE *param_1,animINST *param_2)

{
  (**(code **)(*(int *)param_1 + 0x18))(*(int *)(param_2 + 0x13c) + 0x8c,4,4);
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBDF0 */

animINST * __thiscall gsMP_SYSTEM::ReadInst(gsMP_SYSTEM *this,fioFILE *param_1)

{
  entIACTIVE_OBJ *peVar1;
  
  (**(code **)(*(int *)param_1 + 0x14))(&param_1,4);
  peVar1 = entFindNextIO((entIACTIVE_OBJ *)0x0);
  while( true ) {
    if (peVar1 == (entIACTIVE_OBJ *)0x0) {
      return (animINST *)0x0;
    }
    if (*(int *)(peVar1 + 0x8c) == 4) break;
    peVar1 = entFindNextIO(peVar1);
  }
  return *(animINST **)(peVar1 + 0xbc);
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBE50 */

int __thiscall gsMP_SYSTEM::WriteEIO(gsMP_SYSTEM *this,fioFILE *param_1,entIACTIVE_OBJ *param_2)

{
  (**(code **)(*(int *)param_1 + 0x18))(param_2 + 0x8c,4,4);
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBE70 */

entIACTIVE_OBJ * __thiscall gsMP_SYSTEM::ReadEIO(gsMP_SYSTEM *this,fioFILE *param_1)

{
  entIACTIVE_OBJ *peVar1;
  
  (**(code **)(*(int *)param_1 + 0x14))(&param_1,4);
  peVar1 = entFindNextIO((entIACTIVE_OBJ *)0x0);
  while( true ) {
    if (peVar1 == (entIACTIVE_OBJ *)0x0) {
      return (entIACTIVE_OBJ *)0x0;
    }
    if (*(int *)(peVar1 + 0x8c) == 4) break;
    peVar1 = entFindNextIO(peVar1);
  }
  return peVar1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBEC0 */

void __thiscall gsMSG_MP_PTR::gsMSG_MP_PTR(gsMSG_MP_PTR *this)

{
  *this = (gsMSG_MP_PTR)0x0;
  this[1] = (gsMSG_MP_PTR)0x40;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 2) = 8;
  *this = DAT_0094826c;
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBEE0 */

void __thiscall gsEV_SYNC::gsEV_SYNC(gsEV_SYNC *this)

{
  *this = (gsEV_SYNC)0x0;
  this[1] = (gsEV_SYNC)0x40;
  *(undefined4 *)(this + 4) = 0xffffff9c;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 2) = 0xc;
  *this = DAT_00948258;
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBF10 */

int __thiscall
gsMSG_MP_PTR_PACK::Pack(gsMSG_MP_PTR_PACK *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  int iVar1;
  
  iVar1 = msgDATA_PACK::Pack((msgDATA_PACK *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(msgDATA **)(param_2 + 4) != (msgDATA *)0x0) {
    msgSYSTEM::Pack(&msgSystem,param_1,*(msgDATA **)(param_2 + 4));
  }
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBF50 */

msgDATA * __thiscall gsMSG_MP_PTR_PACK::UnPack(gsMSG_MP_PTR_PACK *this,fioFILE_MEM *param_1)

{
  msgDATA *pmVar1;
  msgDATA *pmVar2;
  
  pmVar1 = msgDATA_PACK::UnPack((msgDATA_PACK *)this,param_1);
  if (*(int *)(pmVar1 + 4) != 0) {
    pmVar2 = msgSYSTEM::UnPack(&msgSystem,param_1);
    *(msgDATA **)(pmVar1 + 4) = pmVar2;
  }
  return pmVar1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBF80 */

int __thiscall
gsMSG_MP_NOTIFY_EV_SYNC::Pack(gsMSG_MP_NOTIFY_EV_SYNC *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  int iVar1;
  
  iVar1 = msgDATA_PACK::Pack((msgDATA_PACK *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(msgDATA **)(param_2 + 8) != (msgDATA *)0x0) {
    msgSYSTEM::Pack(&msgSystem,param_1,*(msgDATA **)(param_2 + 8));
  }
  return 1;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FBFC0 */

msgDATA * __thiscall
gsMSG_MP_NOTIFY_EV_SYNC::UnPack(gsMSG_MP_NOTIFY_EV_SYNC *this,fioFILE_MEM *param_1)

{
  msgDATA *pmVar1;
  msgDATA *pmVar2;
  
  pmVar1 = msgDATA_PACK::UnPack((msgDATA_PACK *)this,param_1);
  if (*(int *)(pmVar1 + 8) != 0) {
    pmVar2 = msgSYSTEM::UnPack(&msgSystem,param_1);
    *(msgDATA **)(pmVar1 + 8) = pmVar2;
  }
  return pmVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FBFF0 */

void __thiscall gsMSG_MP_UPD_POS::gsMSG_MP_UPD_POS(gsMSG_MP_UPD_POS *this)

{
  *this = (gsMSG_MP_UPD_POS)0x0;
  this[1] = (gsMSG_MP_UPD_POS)0x40;
  *(undefined2 *)(this + 2) = 0xffff;
  this[8] = (gsMSG_MP_UPD_POS)0x0;
  *(undefined4 *)(this + 9) = _m3dVZero;
  *(undefined4 *)(this + 0xd) = DAT_00963740;
  *(undefined4 *)(this + 0x11) = DAT_00963744;
  *(undefined4 *)(this + 0x15) = _m3dVZero;
  *(undefined4 *)(this + 0x19) = DAT_00963740;
  *(undefined4 *)(this + 0x1d) = DAT_00963744;
  *(undefined4 *)(this + 0x21) = _m3dVZero;
  *(undefined4 *)(this + 0x25) = DAT_00963740;
  *(undefined4 *)(this + 0x29) = DAT_00963744;
  *(undefined4 *)(this + 0x2d) = _m3dVZero;
  *(undefined4 *)(this + 0x31) = DAT_00963740;
  *(undefined4 *)(this + 0x35) = DAT_00963744;
  *(undefined4 *)(this + 0x39) = _m3dVZero;
  *(undefined4 *)(this + 0x3d) = DAT_00963740;
  *(undefined4 *)(this + 0x41) = DAT_00963744;
  *(undefined4 *)(this + 0x45) = _m3dVZero;
  *(undefined4 *)(this + 0x49) = DAT_00963740;
  *(undefined4 *)(this + 0x4d) = DAT_00963744;
  *(undefined2 *)(this + 2) = 0x51;
  *this = DAT_0094827c;
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FC0D0 */

int __thiscall
gsMSG_MP_UPD_POS_PACK::Pack(gsMSG_MP_UPD_POS_PACK *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  msgDATA *pmVar1;
  
  pmVar1 = param_2;
  if (*(short *)(param_2 + 2) == -1) {
    return 0;
  }
  param_2 = *(msgDATA **)(param_2 + 4);
  (**(code **)(*(int *)param_1 + 0x18))(&param_2,4,1);
  (**(code **)(*(int *)param_1 + 0x18))(&stack0xfffffffc,1,1);
  if (((byte)pmVar1[8] & 1) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 9,0xc,4);
  }
  if (((byte)pmVar1[8] & 2) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x21,0xc,4);
  }
  if (((byte)pmVar1[8] & 4) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x15,0xc,4);
  }
  if (((byte)pmVar1[8] & 8) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x2d,0xc,4);
  }
  if (((byte)pmVar1[8] & 0x10) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x39,0xc,4);
  }
  if (((byte)pmVar1[8] & 0x20) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x45,0xc,4);
  }
  if (((byte)pmVar1[8] & 0x40) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(pmVar1 + 0x49,4,4);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FC1C0 */

msgDATA * __thiscall gsMSG_MP_UPD_POS_PACK::UnPack(gsMSG_MP_UPD_POS_PACK *this,fioFILE_MEM *param_1)

{
  if ((DAT_00948260 & 1) == 0) {
    DAT_00948260 = DAT_00948260 | 1;
    DAT_00948280 = 0;
    DAT_00948281 = 0x40;
    _DAT_00948282 = 0xffff;
    entMP_DEADRECKON::entMP_DEADRECKON((entMP_DEADRECKON *)&DAT_00948288);
    _DAT_00948282 = 0x51;
    DAT_00948280 = DAT_0094827c;
    atexit((_func_4879 *)&__E17);
  }
  (**(code **)(*(int *)param_1 + 0x14))(&DAT_00948284,4,4);
  (**(code **)(*(int *)param_1 + 0x14))(&DAT_00948288,1,1);
  if ((DAT_00948288 & 1) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_00948289,0xc,4);
  }
  if ((DAT_00948288 & 2) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_009482a1,0xc,4);
  }
  if ((DAT_00948288 & 4) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_00948295,0xc,4);
  }
  if ((DAT_00948288 & 8) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_009482ad,0xc,4);
  }
  if ((DAT_00948288 & 0x10) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_009482b9,0xc,4);
  }
  if ((DAT_00948288 & 0x20) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_009482c5,0xc,4);
  }
  if ((DAT_00948288 & 0x40) != 0) {
    (**(code **)(*(int *)param_1 + 0x14))(&DAT_009482c9,4,4);
  }
  return (msgDATA *)&DAT_00948280;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FC310 */

int __thiscall gsMP_CLIENT_FILTER_SNAPSHOT::IsSend(gsMP_CLIENT_FILTER_SNAPSHOT *this,int param_1)

{
  int iVar1;
  
  iVar1 = gsMP_CLIENT_FILTER_CLIENT2::IsSend((gsMP_CLIENT_FILTER_CLIENT2 *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(gsSysServer + param_1 * 0x58 + 0x4c0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_misc.cpp
   addr: 004FC340 */

void __thiscall entMP_DEADRECKON::entMP_DEADRECKON(entMP_DEADRECKON *this)

{
  *this = (entMP_DEADRECKON)0x0;
  *(undefined4 *)(this + 1) = _m3dVZero;
  *(undefined4 *)(this + 5) = DAT_00963740;
  *(undefined4 *)(this + 9) = DAT_00963744;
  *(undefined4 *)(this + 0xd) = _m3dVZero;
  *(undefined4 *)(this + 0x11) = DAT_00963740;
  *(undefined4 *)(this + 0x15) = DAT_00963744;
  *(undefined4 *)(this + 0x19) = _m3dVZero;
  *(undefined4 *)(this + 0x1d) = DAT_00963740;
  *(undefined4 *)(this + 0x21) = DAT_00963744;
  *(undefined4 *)(this + 0x25) = _m3dVZero;
  *(undefined4 *)(this + 0x29) = DAT_00963740;
  *(undefined4 *)(this + 0x2d) = DAT_00963744;
  *(undefined4 *)(this + 0x31) = _m3dVZero;
  *(undefined4 *)(this + 0x35) = DAT_00963740;
  *(undefined4 *)(this + 0x39) = DAT_00963744;
  *(undefined4 *)(this + 0x3d) = _m3dVZero;
  *(undefined4 *)(this + 0x41) = DAT_00963740;
  *(undefined4 *)(this + 0x45) = DAT_00963744;
  return;
}




/* from: gs:gs_mp_misc.cpp
   addr: 004FC400 */

gsMP_STAT * __thiscall gsMP_STAT::gsMP_STAT(gsMP_STAT *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  Clear(this);
  return this;
}

