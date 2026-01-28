
/* from: gs_shared:ai_spawn.cpp
   addr: 00539490 */

int __fastcall aiSpawnInit(void)

{
  gsDOMAIN_LIST *this;
  
  this = (gsDOMAIN_LIST *)operator_new(0x3cc);
  if (this != (gsDOMAIN_LIST *)0x0) {
    gsDOMAIN_LIST::gsDOMAIN_LIST(this);
    *(undefined4 *)(this + 0x3c4) = 0;
    *(undefined4 *)(this + 0x3c8) = 0xffffffff;
    *(undefined ***)this = &aiDOMAIN_LIST_SPAWN::_vftable_;
    aiSpawnDomList = (aiDOMAIN_LIST_SPAWN *)this;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24535953,0x53);
    return 1;
  }
  aiSpawnDomList = (aiDOMAIN_LIST_SPAWN *)0x0;
  return 0;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539500 */

void __fastcall aiSpawnTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)aiSpawnDomList);
  aiSpawnDomList = (aiDOMAIN_LIST_SPAWN *)0x0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 00539520 */

void __fastcall aiSpawnSetOppCoeff(float param_1)

{
  float in_stack_00000004;
  
  if ((___real_00000000 <= in_stack_00000004) && (in_stack_00000004 <= ___real_3f800000)) {
    _DAT_005f8f74 = in_stack_00000004;
    return;
  }
  _DAT_005f8f74 = 1.0;
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539560 */

int __thiscall aiDOMAIN_LIST_SPAWN::IsAddObj(aiDOMAIN_LIST_SPAWN *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_ai);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539580 */

scnDOMAIN * __thiscall
aiDOMAIN_LIST_SPAWN::MakeSubDomain(aiDOMAIN_LIST_SPAWN *this,gsDOMAIN *param_1)

{
  entIACTIVE_OBJ *peVar1;
  entIACTIVE_OBJ *this_00;
  
  this_00 = (entIACTIVE_OBJ *)operator_new(0x224);
  if (this_00 != (entIACTIVE_OBJ *)0x0) {
    entIACTIVE_OBJ::entIACTIVE_OBJ(this_00);
    peVar1 = this_00 + 0x94;
    *(undefined4 *)(this_00 + 0x98) = 0;
    *(undefined4 *)(this_00 + 0x9c) = 0;
    *(undefined4 *)(this_00 + 0xa0) = 0;
    *(undefined4 *)(this_00 + 0xa8) = 1;
    *(undefined ***)(this_00 + 0xa4) = &m3dBOX::_vftable_;
    *(undefined4 *)(this_00 + 0xc4) = 0;
    *(undefined4 *)(this_00 + 200) = 0;
    *(undefined4 *)(this_00 + 0xcc) = 0;
    *(undefined4 *)(this_00 + 0xd0) = 0;
    *(undefined4 *)(this_00 + 0xd4) = 0;
    *(undefined4 *)(this_00 + 0x21c) = 2;
    *(undefined ***)peVar1 = &aiAREA::_vftable_;
    *(undefined ***)this_00 = &aiSPAWN_AREA::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)peVar1 = &aiSPAWN_AREA::_vftable__for__aiAREA__;
    *(undefined4 *)(this_00 + 0x14) = 0x24444f4d;
    *(undefined4 *)(this_00 + 0x1c) = 0x53;
    *(undefined4 *)(this_00 + 0x220) = 0;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this_00,0,0);
    *(gsDOMAIN **)(this_00 + 0x220) = param_1;
    return (scnDOMAIN *)peVar1;
  }
  return (scnDOMAIN *)0x0;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539630 */

void __thiscall aiDOMAIN_LIST_SPAWN::DestroySubDomain(aiDOMAIN_LIST_SPAWN *this,scnDOMAIN *param_1)

{
  if (param_1 != (scnDOMAIN *)0x0) {
    msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)(param_1 + -0x94));
    return;
  }
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)0x0);
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539660 */

void __thiscall aiDOMAIN_LIST_SPAWN::ProcessLEVEL_LOADED(aiDOMAIN_LIST_SPAWN *this)

{
  gsDOMAIN_LIST::ProcessLEVEL_LOADED((gsDOMAIN_LIST *)this);
  CreateWaves(this,*(objOBJ **)(gsScenePtr + 0x44));
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539690 */

void __thiscall aiDOMAIN_LIST_SPAWN::Update(aiDOMAIN_LIST_SPAWN *this)

{
  if (*(int *)(gsSysMP + 0x28) != 3) {
    gsDOMAIN_LIST::Update((gsDOMAIN_LIST *)this);
    return;
  }
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 005396C0 */

int __thiscall aiDOMAIN_SPAWN::Init(aiDOMAIN_SPAWN *this)

{
  aiDOMAIN_SPAWN aVar1;
  psSHEET *this_00;
  char *pcVar2;
  aiDOMAIN_SPAWN *paVar3;
  uint uVar4;
  scnDOMAIN *psVar5;
  int iVar6;
  char **ppcVar7;
  aiDOMAIN_SPAWN *paVar8;
  bool bVar9;
  int local_8;
  uint local_4;
  
  this_00 = *(psSHEET **)(*(int *)(this + 0x34) + 0xf0);
  if (this_00 == (psSHEET *)0x0) {
    return 1;
  }
  pcVar2 = s_;
  do {
    aVar1 = (aiDOMAIN_SPAWN)*pcVar2;
    (this + -0x601f0c)[(int)pcVar2] = aVar1;
    pcVar2 = (char *)((aiDOMAIN_SPAWN *)pcVar2 + 1);
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  paVar8 = this + 0x9c;
  pcVar2 = s_;
  do {
    aVar1 = (aiDOMAIN_SPAWN)*pcVar2;
    (this + -0x601f4c)[(int)pcVar2] = aVar1;
    pcVar2 = (char *)((aiDOMAIN_SPAWN *)pcVar2 + 1);
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  psSHEET::GetStr(this_00,s_AI_SPAWN,s_oppClass,(char *)(this + 0xdc),0x40);
  iVar6 = -1;
  paVar3 = this + 0xdc;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    aVar1 = *paVar3;
    paVar3 = paVar3 + 1;
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  if (iVar6 != -2) {
    entGetClassTplName((char *)(this + 0xdc),(char *)paVar8);
  }
  iVar6 = -1;
  paVar3 = paVar8;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    aVar1 = *paVar3;
    paVar3 = paVar3 + 1;
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  if (iVar6 == -2) {
    psSHEET::GetStr(this_00,s_AI_SPAWN,s_oppName,(char *)paVar8,0x40);
  }
  iVar6 = -1;
  paVar3 = paVar8;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    aVar1 = *paVar3;
    paVar3 = paVar3 + 1;
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  if (iVar6 == -2) {
    paVar3 = this + 0xdc;
    iVar6 = (int)paVar8 - (int)paVar3;
    do {
      aVar1 = *paVar3;
      paVar3[iVar6] = aVar1;
      paVar3 = paVar3 + 1;
    } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
    pcVar2 = strstr((char *)paVar8,s__);
    if ((pcVar2 != (char *)0x0) && (pcVar2 = strstr(pcVar2 + 1,s__), pcVar2 != (char *)0x0)) {
      *pcVar2 = '\0';
    }
  }
  iVar6 = -1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    aVar1 = *paVar8;
    paVar8 = paVar8 + 1;
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  if (iVar6 == -2) {
    iVar6 = -1;
    paVar8 = this + 0xdc;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      aVar1 = *paVar8;
      paVar8 = paVar8 + 1;
    } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
    if (iVar6 == -2) {
      apLogErr(s_Incorrect_AI_spawning_params_for,*(undefined4 *)(*(int *)(this + 0x34) + 0x18));
      return 0;
    }
  }
  iVar6 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar6 == 0) {
    return 0;
  }
  paVar8 = this + 0x128;
  *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x100;
  *(int *)paVar8 = -1;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_nSpawn,(int *)paVar8);
  *(int *)(this + 0x140) = 1;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_nSpawnFirst,(int *)(this + 0x140));
  iVar6 = *(int *)paVar8 + -1;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  *(int *)(this + 0x138) = iVar6;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_nKillComplete,(int *)(this + 0x138));
  *(undefined4 *)(this + 0x13c) = 0;
  *(float *)(this + 0x98) = 0.5;
  psSHEET::GetFloat(this_00,s_AI_SPAWN,s_timeOppSpawn,(float *)(this + 0x98));
  pcVar2 = strstr((char *)(this + 0xdc),&s_ai_skel);
  paVar8 = this + 0x120;
  if (pcVar2 == (char *)0x0) {
    *(float *)paVar8 = 0.5;
  }
  else {
    *(float *)paVar8 = 0.2;
  }
  psSHEET::GetFloat(this_00,s_AI_SPAWN,s_timeAfterKill,(float *)paVar8);
  paVar8 = this + 0x130;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(int *)paVar8 = -1;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_nMaxSimult,(int *)paVar8);
  paVar3 = this + 0x134;
  *(int *)paVar3 = -1;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_nMaxSimultSame,(int *)paVar3);
  local_8 = *(int *)paVar8;
  if (2 < local_8) {
    iVar6 = ftol();
    if (iVar6 < 3) {
      iVar6 = 3;
    }
    *(int *)paVar8 = iVar6;
  }
  local_8 = *(int *)paVar3;
  if (2 < local_8) {
    iVar6 = ftol();
    if (iVar6 < 3) {
      iVar6 = 3;
    }
    *(int *)paVar3 = iVar6;
  }
  local_8 = 0;
  psSHEET::GetInt(this_00,s_AI_SPAWN,s_isExplicit,&local_8);
  iVar6 = 0;
  do {
    pcVar2 = s_distant + iVar6;
    *(char *)((int)&apBuffer + iVar6) = *pcVar2;
    iVar6 = iVar6 + 1;
  } while (*pcVar2 != '\0');
  psSHEET::GetStr(this_00,s_AI_SPAWN,s_distrib,(char *)&apBuffer,0x1000);
  iVar6 = 8;
  bVar9 = true;
  ppcVar7 = &apBuffer;
  pcVar2 = s_distant;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *(char *)ppcVar7 == *pcVar2;
    ppcVar7 = (char **)((int)ppcVar7 + 1);
    pcVar2 = pcVar2 + 1;
  } while (bVar9);
  if (bVar9) {
    uVar4 = *(uint *)(this + 0x3c) | 0x1000;
  }
  else {
    iVar6 = 5;
    bVar9 = true;
    ppcVar7 = &apBuffer;
    pcVar2 = &s_even;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *(char *)ppcVar7 == *pcVar2;
      ppcVar7 = (char **)((int)ppcVar7 + 1);
      pcVar2 = pcVar2 + 1;
    } while (bVar9);
    if (bVar9) {
      uVar4 = *(uint *)(this + 0x3c) | 0x800;
    }
    else {
      iVar6 = 10;
      bVar9 = true;
      ppcVar7 = &apBuffer;
      pcVar2 = s_formation;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *(char *)ppcVar7 == *pcVar2;
        ppcVar7 = (char **)((int)ppcVar7 + 1);
        pcVar2 = pcVar2 + 1;
      } while (bVar9);
      if (!bVar9) goto LAB_00539a04;
      uVar4 = *(uint *)(this + 0x3c) | 0x2000;
    }
  }
  *(uint *)(this + 0x3c) = uVar4;
LAB_00539a04:
  local_4 = (uint)(local_8 == 0);
  psSHEET::GetBool(this_00,s_AI_SPAWN,s_areaMerge,(int *)&local_4);
  *(undefined4 *)(this + 0x11c) = DAT_005dd6f4;
  if (*(int *)(this + 0x40) == 0) {
    psVar5 = (scnDOMAIN *)
             (**(code **)(**(int **)(this + 0x94) + 0x40))
                       ((gsDOMAIN *)(this + -0x94),*(undefined4 *)(this + 0x34));
    if ((psVar5 == (scnDOMAIN *)0x0) || (psVar5 == (scnDOMAIN *)0x94)) {
      return 0;
    }
    iVar6 = gsDOMAIN::AddSubDomain((gsDOMAIN *)(this + -0x94),psVar5);
    if (iVar6 == 0) {
      return 0;
    }
  }
  if (local_4 == 0) {
    if (local_8 != 0) {
      *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0xc000;
      FillExplicitMergedPointsList(this + -0x94);
      if (*(int *)(this + 0x134) == -1) {
        *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x14c);
      }
    }
  }
  else {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x4000;
    FillMergedPointsList(this + -0x94);
  }
  *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x200;
  aiaDOMAIN_LIST_ARENA::AssignArena(aiaArenaDomList,this + -0x94);
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)(this + -0x94));
  return 1;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539B10 */

void __thiscall aiDOMAIN_SPAWN::Update(aiDOMAIN_SPAWN *this,m3dV *param_1)

{
  int iVar1;
  
  if (*(int *)(gsSysMP + 0x28) != 3) {
    *(float *)(this + 0x1b0) = gsElapsedTime + *(float *)(this + 0x1b0);
    *(float *)(this + 0x1b8) = gsElapsedTime + *(float *)(this + 0x1b8);
    if ((((*(uint *)(this + 0xd0) & 1) != 0) && ((*(uint *)(this + 0xd0) & 0x200) != 0)) &&
       (iVar1 = IsReadySpawn(this), iVar1 != 0)) {
      if (*(int *)(this + 0x1c0) == 0) {
        iVar1 = *(int *)(this + 0x1d4);
      }
      else {
        iVar1 = 1;
      }
      if (0 < iVar1) {
        do {
          SpawnSingle(this);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 00539B90 */

int __thiscall aiDOMAIN_SPAWN::IsReadySpawn(aiDOMAIN_SPAWN *this)

{
  aiDOMAIN_SPAWN aVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  aiDOMAIN_SPAWN *paVar5;
  aiDOMAIN_SPAWN *paVar6;
  
  if ((*(uint *)(this + 0xd0) & 1) == 0) {
    return 0;
  }
  if (0 < *(int *)(this + 0x30)) {
    return 0;
  }
  if ((*(uint *)(this + 0xd0) & 0x400) != 0) {
    return 0;
  }
  if (*(float *)(this + 0x1b0) < *(float *)(this + 300)) {
    return 0;
  }
  if ((0 < *(int *)(this + 0x1bc)) && (*(int *)(this + 0x1bc) <= *(int *)(this + 0x1c0))) {
    return 0;
  }
  if (*(float *)(this + 0x1b8) < *(float *)(this + 0x1b4) - _DAT_005dd6f0) {
    return 0;
  }
  if ((0 < *(int *)(this + 0x1c4)) &&
     (iVar2 = aiNPC::GetNOpp((char *)0x0,(char *)(this + 0x130)), *(int *)(this + 0x1c4) <= iVar2))
  {
    return 0;
  }
  paVar5 = this + 0x170;
  iVar2 = -1;
  paVar6 = paVar5;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    aVar1 = *paVar6;
    paVar6 = paVar6 + 1;
  } while (aVar1 != (aiDOMAIN_SPAWN)0x0);
  if (iVar2 == -2) {
    if (*(int *)(this + 0x1c8) < 1) goto LAB_00539c75;
    paVar5 = this + 0x130;
  }
  else if (*(int *)(this + 0x1c8) < 1) goto LAB_00539c75;
  iVar2 = aiNPC::GetNOpp((char *)paVar5,(char *)0x0);
  if (*(int *)(this + 0x1c8) <= iVar2) {
    return 0;
  }
LAB_00539c75:
  iVar2 = *(int *)(this + 0xd4);
  iVar4 = 0;
  if (0 < iVar2) {
    paVar5 = this + 0xd8;
    do {
      if (*(int *)paVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)paVar5 + -0x94;
      }
      if (*(int *)(iVar3 + 0x30) < 1) break;
      iVar4 = iVar4 + 1;
      paVar5 = paVar5 + 4;
    } while (iVar4 < iVar2);
  }
  return (uint)(iVar4 != iVar2);
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539CB0 */

void __thiscall aiDOMAIN_SPAWN::Spawn(aiDOMAIN_SPAWN *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x1c0) == 0) {
    iVar1 = *(int *)(this + 0x1d4);
  }
  else {
    iVar1 = 1;
  }
  if (0 < iVar1) {
    do {
      SpawnSingle(this);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 00539CE0 */

void __thiscall aiDOMAIN_SPAWN::SpawnSingle(aiDOMAIN_SPAWN *this)

{
  uint uVar1;
  int iVar2;
  entENTITY *this_00;
  int iVar3;
  m3dMATR *pmVar4;
  undefined4 *puVar5;
  aiINIT_DATA local_100 [8];
  aiDOMAIN_SPAWN *local_f8;
  int local_f4;
  m3dV local_f0 [12];
  m3dV local_e4 [12];
  m3dMATR local_d8 [64];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  aiINIT_DATA::aiINIT_DATA(local_100);
  iVar2 = GetSpawnPosDir(this,local_e4,local_f0);
  local_f8 = this;
  local_f4 = iVar2;
  m3dMATR::MakeLCS2WCS_VZ(local_d8,local_e4,local_f0);
  pmVar4 = local_d8;
  puVar5 = local_86;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pmVar4;
    pmVar4 = pmVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  this_00 = entCreate(gsScenePtr,(char *)(this + 0x170),(char *)(this + 0x130),local_98,local_100,0)
  ;
  if (this_00 != (entENTITY *)0x0) {
    if (*(int *)(this_00 + 0x14) == 0x244e5043) {
      aiNPC::DecideEnemy((aiNPC *)this_00);
      (**(code **)(*(int *)this_00 + 0x16c))(0);
    }
    if (*(int *)(this + 0x1c0) == 0) {
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
    }
    *(undefined4 *)(this + 0x1b0) = 0;
    *(int *)(this + 0x1c0) = *(int *)(this + 0x1c0) + 1;
    uVar1 = *(uint *)(this + 0x84);
    *(uint *)(this + 0x84) = uVar1 | 4;
    if ((0 < *(int *)(this + 0x1bc)) && (*(int *)(this + 0x1bc) <= *(int *)(this + 0x1c0))) {
      *(uint *)(this + 0x84) = uVar1 | 6;
    }
    if (*(int *)(this + iVar2 * 4 + 0xd8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + iVar2 * 4 + 0xd8) + -0x94;
    }
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 4;
    apLog(s_domSpawn___s___Spawned___d,*(undefined4 *)(*(int *)(this + 200) + 0x18),
          *(undefined4 *)(this + 0x1c0));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 00539E40 */

int __thiscall aiDOMAIN_SPAWN::GetSpawnPosDir(aiDOMAIN_SPAWN *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float extraout_ECX;
  float extraout_EDX;
  uint uVar6;
  aiDOMAIN_SPAWN *paVar7;
  int iVar8;
  int iVar9;
  m3dV *unaff_retaddr;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  m3dV amStack_50 [4];
  undefined1 local_4c [8];
  cdtINFO acStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  aiDOMAIN_SPAWN *paStack_1c;
  undefined4 uStack_18;
  m3dV *pmStack_4;
  
  local_30 = _m3dVZero;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = DAT_00963740;
  local_28 = DAT_00963744;
  local_24 = 0.0;
  if ((*(uint *)(this + 0xd0) & 0x4000) != 0) {
    if ((char)(*(uint *)(this + 0xd0) >> 8) < '\0') {
      GetFromMergedListSpawnPosDir(this,param_1,param_2);
      return 0;
    }
    GetFromMergedListSpawnPosDir(this,param_1,(m3dV *)0x0);
    (**(code **)(*(int *)plgsPlayer + 0x68))(&local_58);
    *(float *)param_1 = fStack_5c - *(float *)param_1;
    *(float *)(param_1 + 4) = local_58 - *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = fStack_54 - *(float *)(param_1 + 8);
    m3dNormalize(param_1);
    return 0;
  }
  (**(code **)(*(int *)plgsPlayer + 0x68))(local_4c);
  uVar2 = *(uint *)(this + 0xd0);
  if ((uVar2 & 0x1000) == 0) {
    if ((uVar2 & 0x800) == 0) {
      if ((uVar2 & 0x2000) != 0) {
        m3dRandRange(extraout_ECX,*(float *)(this + 0xd4));
        ftol();
      }
    }
    else {
      m3dRandRange(*(float *)(this + 0xd4),extraout_EDX);
      ftol();
    }
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    if (0 < *(int *)(this + 0xd4)) {
      paVar7 = this + 0xd8;
      do {
        piVar3 = *(int **)paVar7;
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + -0x25;
        }
        if ((piVar4[0xc] < 1) &&
           (iVar5 = (**(code **)(*piVar3 + 0xc))(amStack_50), iVar9 = iVar8, iVar5 != 0)) break;
        iVar8 = iVar8 + 1;
        paVar7 = paVar7 + 4;
        iVar9 = iVar8;
      } while (iVar8 < *(int *)(this + 0xd4));
    }
    if (iVar9 == *(int *)(this + 0xd4)) {
      iVar9 = 0;
      fStack_60 = DAT_005dd6f4;
      if (0 < *(int *)(this + 0xd4)) {
        paVar7 = this + 0xd8;
        do {
          iVar8 = *(int *)paVar7;
          if (iVar8 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar8 + -0x94;
          }
          if ((*(int *)(iVar5 + 0x30) < 1) &&
             (iVar8 = scnSCENE::DistPointObj
                                (gsScenePtr,*(objOBJ **)(iVar8 + 0x34),amStack_50,fStack_60,1,
                                 acStack_44), iVar8 != 0)) {
            fStack_60 = local_28;
          }
          iVar9 = iVar9 + 1;
          paVar7 = paVar7 + 4;
        } while (iVar9 < *(int *)(this + 0xd4));
      }
    }
  }
  iVar9 = ftol();
  if (*(int *)(this + iVar9 * 4 + 0xd8) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(this + iVar9 * 4 + 0xd8) + -0x94;
  }
  uVar6 = *(uint *)(iVar8 + 0x21c) & 0xfffffff0;
  *(uint *)(iVar8 + 0x21c) = uVar6;
  uVar2 = *(uint *)(this + 0xd0);
  if ((uVar2 & 0x1000) == 0) {
    if ((uVar2 & 0x800) == 0) {
      if ((uVar2 & 0x2000) == 0) goto LAB_0053a10a;
      uVar6 = *(uint *)(iVar8 + 0x21c) | 4;
    }
    else {
      uVar6 = *(uint *)(iVar8 + 0x21c) | 1;
    }
  }
  else {
    uVar6 = uVar6 | 2;
  }
  *(uint *)(iVar8 + 0x21c) = uVar6;
LAB_0053a10a:
  local_24 = _m3dVUndef;
  paStack_1c = DAT_00963750;
  fStack_20 = DAT_0096374c;
  uStack_18 = 0;
  (**(code **)(*(int *)plgsPlayer + 0x68))(&local_24);
  if (((*(uint *)(iVar8 + 0x21c) & 3) == 0) && ((*(uint *)(iVar8 + 0x21c) & 4) != 0)) {
    paStack_1c = this;
  }
  aiAREA::GetRandomPos((aiAREA *)(iVar8 + 0x94),pmStack_4,(aiAREA_GET_POINT_PARAM *)&local_28);
  *(float *)unaff_retaddr = local_28 - *(float *)pmStack_4;
  *(float *)(unaff_retaddr + 4) = local_24 - *(float *)(pmStack_4 + 4);
  fVar1 = *(float *)(pmStack_4 + 8);
  *(undefined4 *)(unaff_retaddr + 4) = 0;
  *(float *)(unaff_retaddr + 8) = fStack_20 - fVar1;
  m3dNormalize(unaff_retaddr);
  return iVar9;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053A1A0 */

int __thiscall
aiDOMAIN_SPAWN::ProcessMsg
          (aiDOMAIN_SPAWN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  aiDOMAIN_SPAWN *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(param_1) {
  case 1000:
    local_10 = 0;
    if (0 < *(int *)(this + 0xd4)) {
      local_14 = this + 0xd8;
      do {
        if (*(int *)local_14 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)local_14 + -0x94;
        }
        if (((*(byte *)(iVar1 + 0x21c) & 0x20) != 0) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0xd4))) {
          iVar3 = 0;
          do {
            puVar2 = (undefined4 *)(*(int *)(iVar1 + 0xd0) + iVar3);
            local_c = *puVar2;
            local_8 = puVar2[1];
            local_4 = puVar2[2];
            rendDRIVER::RenderCross(rendDrv,gsCameraPtr,(m3dV *)&local_c,2.0,0xffff0000);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x1c;
          } while (iVar4 < *(int *)(iVar1 + 0xd4));
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + 4;
      } while (local_10 < *(int *)(this + 0xd4));
    }
    break;
  case 0x3f8:
    this_00 = (apNAME *)((int)param_2 + 8);
    iVar1 = apNAME::IsName(this_00,s_SPAWN);
    if (iVar1 == 0) {
      iVar1 = apNAME::IsName(this_00,&s_LOCK);
      if (iVar1 == 0) {
        apNAME::IsName(this_00,s_UNLOCK);
      }
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)((int)param_2 + 0x48)) {
        do {
          if ((0 < *(int *)(this + 0x1bc)) && (*(int *)(this + 0x1bc) <= *(int *)(this + 0x1c0)))
          break;
          SpawnSingle(this);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)param_2 + 0x48));
      }
    }
    break;
  case 0x40c:
    (**(code **)(*(int *)this + 0x48))(param_2);
    break;
  case 0x4c8:
    if (*(aiDOMAIN_SPAWN **)(param_3 + 0x49f) == this) {
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x10;
      iVar1 = *(int *)(this + 0x1d0);
      *(int *)(this + 0x1d0) = iVar1 + 1;
      apLog(s_domSpawn___s___nKill___d__nKillC,*(undefined4 *)(*(int *)(this + 200) + 0x18),
            iVar1 + 1,*(undefined4 *)(this + 0x1cc));
      if (((0 < *(int *)(this + 0x1cc)) && (*(int *)(this + 0x1cc) <= *(int *)(this + 0x1d0))) &&
         ((*(uint *)(this + 0xd0) & 0x400) == 0)) {
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
        *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x400;
        apLog(s_domSpawn___s___COMPLETED,*(undefined4 *)(*(int *)(this + 200) + 0x18));
      }
      *(undefined4 *)(this + 0x1b8) = 0;
    }
  }
  iVar1 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053A500
   addr: 0053A500 */

void * __thiscall aiSPAWN_AREA::_vector_deleting_destructor_(aiSPAWN_AREA *this,uint param_1)

{
  *(undefined ***)(this + 0x94) = &_vftable__for__aiAREA__;
  *(undefined ***)(this + 0x94) = &scnDOMAIN::_vftable_;
  *(undefined ***)(this + 0xa4) = &m3dVOL::_vftable_;
  *(undefined ***)this = &entIACTIVE_OBJ::_vftable_;
  entIACTIVE_OBJ::TermIActive((entIACTIVE_OBJ *)this);
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053A550 */

int __thiscall aiSPAWN_AREA::Init(aiSPAWN_AREA *this)

{
  int iVar1;
  
  iVar1 = aiAREA::Init((aiAREA *)this);
  if (iVar1 == 0) {
    return 0;
  }
  apNAME::SetName((apNAME *)(this + -0x50),*(char **)(*(int *)(this + 0x34) + 0x18));
  (**(code **)(*(int *)(this + -0x94) + 0x20))(*(undefined4 *)(*(int *)(this + 0x34) + 0xf0));
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 0053A590 */

int __thiscall aiSPAWN_AREA::IsValidPoint(aiSPAWN_AREA *this,m3dV *param_1)

{
  objOBJ *poVar1;
  char *pcVar2;
  undefined **local_38;
  undefined4 local_34;
  undefined4 local_30;
  m3dV local_2c [12];
  uint local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20[4] = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_30 = 0;
  local_38 = &cdtREFINE::_vftable_;
  local_34 = 2;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_4 = 0;
  scnSCENE::FloorPlace
            (gsScenePtr,param_1,30.0,local_2c,1.0,1.0,0,(cdtREFINE *)&local_38,(cdtINFO *)local_20);
  if ((local_20[0] & 2) != 0) {
    poVar1 = scnSCENE::GetCDTObj(gsScenePtr,(cdtINFO *)local_20);
    if (((poVar1 != (objOBJ *)0x0) && (((byte)poVar1[0xc] & 2) != 0)) &&
       (*(int *)(this + 0x18c) != 0)) {
      pcVar2 = strstr((char *)(*(int *)(this + 0x18c) + 0x170),s_ai_bird);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr((char *)(*(int *)(this + 0x18c) + 0x170),s_ai_amur);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strstr((char *)(*(int *)(this + 0x18c) + 0x170),s_ai_croc);
          if (pcVar2 == (char *)0x0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053A6A0 */

void __thiscall aiDOMAIN_SPAWN::FillMergedPointsList(aiDOMAIN_SPAWN *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  aiDOMAIN_SPAWN *paVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_10;
  aiDOMAIN_SPAWN *local_c;
  int local_8;
  int local_4;
  
  iVar5 = *(int *)(this + 0xd4);
  *(undefined4 *)(this + 0x1e0) = 0;
  if (0 < iVar5) {
    paVar4 = this + 0xd8;
    do {
      if (*(int *)paVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)paVar4 + -0x94;
      }
      paVar4 = paVar4 + 4;
      iVar5 = iVar5 + -1;
      *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + *(int *)(iVar1 + 0xd4);
    } while (iVar5 != 0);
  }
  if (*(int *)(this + 0x1e0) != 0) {
    pvVar2 = operator_new(*(int *)(this + 0x1e0) * 0x1c);
    *(void **)(this + 0x1e4) = pvVar2;
    iVar5 = 0;
    local_4 = 0;
    local_10 = 0;
    if (0 < *(int *)(this + 0xd4)) {
      local_c = this + 0xd8;
      do {
        iVar1 = 0;
        if (*(int *)local_c == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)local_c + -0x94;
        }
        local_8 = 0;
        if (0 < *(int *)(iVar6 + 0xd4)) {
          iVar3 = iVar5 * 0x1c;
          do {
            puVar8 = (undefined4 *)(*(int *)(this + 0x1e4) + iVar3);
            iVar3 = iVar3 + 0x1c;
            puVar7 = (undefined4 *)(*(int *)(iVar6 + 0xd0) + iVar1);
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar5 = local_10 + 1;
            iVar1 = iVar1 + 0x1c;
            local_8 = local_8 + 1;
            local_10 = iVar5;
          } while (local_8 < *(int *)(iVar6 + 0xd4));
        }
        local_4 = local_4 + 1;
        local_c = local_c + 4;
      } while (local_4 < *(int *)(this + 0xd4));
    }
  }
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053A7D0 */

void __thiscall aiDOMAIN_SPAWN::FillExplicitMergedPointsList(aiDOMAIN_SPAWN *this)

{
  aiNPC *paVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0xd4)) {
    do {
      paVar1 = aiNPC::GetNext((aiNPC *)0x0,1);
      if (paVar1 != (aiNPC *)0x0) {
        do {
          pcVar2 = *(char **)(*(int *)(paVar1 + 0xbc) + 0x1c);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = s_;
          }
          pcVar2 = strstr((char *)(this + 0x170),pcVar2);
          if (pcVar2 != (char *)0x0) {
            animINST::GetPos(*(animINST **)(paVar1 + 0xbc),(m3dV *)&local_18);
            iVar3 = (**(code **)(**(int **)(this + 0xd8) + 0xc))(&local_18);
            if (iVar3 != 0) {
              *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + 1;
            }
          }
          paVar1 = aiNPC::GetNext(paVar1,1);
        } while (paVar1 != (aiNPC *)0x0);
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(this + 0xd4));
  }
  if (*(int *)(this + 0x1e0) == 0) {
    apLogErr(s_Error__dom_spawn__s_could_not_co,*(undefined4 *)(*(int *)(this + 200) + 0x18));
    return;
  }
  pvVar4 = operator_new(*(int *)(this + 0x1e0) * 0x1c);
  *(void **)(this + 0x1e4) = pvVar4;
  local_1c = 0;
  if (0 < *(int *)(this + 0xd4)) {
    do {
      paVar1 = aiNPC::GetNext((aiNPC *)0x0,1);
      if (paVar1 != (aiNPC *)0x0) {
        iVar3 = iVar7 * 0x1c;
        do {
          pcVar2 = *(char **)(*(int *)(paVar1 + 0xbc) + 0x1c);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = s_;
          }
          pcVar2 = strstr((char *)(this + 0x170),pcVar2);
          if (pcVar2 != (char *)0x0) {
            animINST::GetPos(*(animINST **)(paVar1 + 0xbc),(m3dV *)&local_18);
            animINST::GetDir(*(animINST **)(paVar1 + 0xbc),(m3dV *)&uStack_c);
            iVar5 = (**(code **)(**(int **)(this + 0xd8) + 0xc))(&local_18);
            if (iVar5 != 0) {
              puVar6 = (undefined4 *)(*(int *)(this + 0x1e4) + iVar3);
              iVar7 = iVar7 + 1;
              *puVar6 = local_18;
              puVar6[1] = uStack_14;
              puVar6[2] = uStack_10;
              puVar6 = (undefined4 *)(*(int *)(this + 0x1e4) + 0xc + iVar3);
              iVar3 = iVar3 + 0x1c;
              *puVar6 = uStack_c;
              puVar6[1] = uStack_8;
              puVar6[2] = uStack_4;
              *(aiDOMAIN_SPAWN **)(paVar1 + 0x49f) = this;
              *(undefined4 *)(paVar1 + 0x4a3) = 0;
              *(int *)(this + 0x1cc) = *(int *)(this + 0x1cc) + 1;
            }
          }
          paVar1 = aiNPC::GetNext(paVar1,1);
        } while (paVar1 != (aiNPC *)0x0);
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(this + 0xd4));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 0053A9F0 */

void __thiscall
aiDOMAIN_SPAWN::GetFromMergedListSpawnPosDir(aiDOMAIN_SPAWN *this,m3dV *param_1,m3dV *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  if ((*(uint *)(this + 0xd0) & 0x1000) == 0) {
    CalcWeightEven(this);
  }
  else {
    CalcWeightDistant(this);
  }
  iVar3 = *(int *)(this + 0x1e4);
  if (iVar3 == 0) {
    scnDOMAIN::GetRandomPoint(*(scnDOMAIN **)(this + 0xd8),param_1);
    if (param_2 != (m3dV *)0x0) {
      *(undefined4 *)param_2 = _m3dVUnitZ;
      *(undefined4 *)(param_2 + 4) = DAT_005f99a0;
      *(undefined4 *)(param_2 + 8) = DAT_005f99a4;
    }
  }
  else {
    fVar2 = *(float *)(iVar3 + 0x18);
    iVar4 = 1;
    iVar6 = 0;
    if (1 < *(int *)(this + 0x1e0)) {
      pfVar5 = (float *)(iVar3 + 0x34);
      do {
        if (*pfVar5 < fVar2) {
          fVar2 = *pfVar5;
          iVar6 = iVar4;
        }
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 7;
      } while (iVar4 < *(int *)(this + 0x1e0));
    }
    iVar6 = iVar6 * 0x1c;
    *(undefined4 *)param_1 = *(undefined4 *)(iVar6 + iVar3);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar6 + iVar3 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar6 + iVar3 + 8);
    if (param_2 != (m3dV *)0x0) {
      puVar1 = (undefined4 *)(*(int *)(this + 0x1e4) + 0xc + iVar6);
      *(undefined4 *)param_2 = *puVar1;
      *(undefined4 *)(param_2 + 4) = puVar1[1];
      *(undefined4 *)(param_2 + 8) = puVar1[2];
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 0053AAE0 */

void __thiscall aiDOMAIN_SPAWN::CalcWeightEven(aiDOMAIN_SPAWN *this)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  aiNPC *paVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  unkbyte10 extraout_ST1;
  unkbyte10 Var9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_10;
  float local_c [2];
  float local_4;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x1e0)) {
    iVar5 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar5 + 0x18 + *(int *)(this + 0x1e4)) = 0;
      iVar5 = iVar5 + 0x1c;
    } while (iVar3 < *(int *)(this + 0x1e0));
  }
  for (paVar4 = aiNPC::GetNext((aiNPC *)0x0,1); paVar4 != (aiNPC *)0x0;
      paVar4 = aiNPC::GetNext(paVar4,1)) {
    if (*(aiDOMAIN_SPAWN **)(paVar4 + 0x49f) == this) {
      animINST::GetPos(*(animINST **)(paVar4 + 0xbc),(m3dV *)local_c);
      iVar3 = 0;
      if (0 < *(int *)(this + 0x1e0)) {
        iVar5 = 0;
        Var9 = extraout_ST1;
        do {
          fVar10 = local_c[0] - *(float *)(*(int *)(this + 0x1e4) + iVar5);
          fVar2 = local_4 - *(float *)(*(int *)(this + 0x1e4) + 8 + iVar5);
          local_10 = fVar10 * fVar10 + fVar2 * fVar2;
          if (m3dSimdType == 0) {
            local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar11 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
            fVar10 = auVar11._0_4_;
            local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar10 * fVar10) *
                       local_10;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar6 = (ulonglong)(uint)local_10;
            uVar7 = PackedFloatingReciprocalSQRAprox((longlong)Var9,uVar6);
            uVar8 = PackedFloatingMUL(uVar7,uVar7);
            uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
            uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
            uVar7 = PackedFloatingMUL(uVar7,uVar6);
            Var9 = CONCAT28((short)((unkuint10)Var9 >> 0x40),uVar7);
            local_10 = (float)uVar7;
            FastExitMediaState();
          }
          else {
            local_10 = SQRT(local_10);
          }
          iVar3 = iVar3 + 1;
          pfVar1 = (float *)(iVar5 + 0x18 + *(int *)(this + 0x1e4));
          iVar5 = iVar5 + 0x1c;
          *pfVar1 = ___real_3f800000 / (local_10 * local_10 + ___real_3dcccccd) + *pfVar1;
        } while (iVar3 < *(int *)(this + 0x1e0));
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_spawn.cpp
   addr: 0053AC60 */

void __thiscall aiDOMAIN_SPAWN::CalcWeightDistant(aiDOMAIN_SPAWN *this)

{
  float extraout_ECX;
  float fVar1;
  float fVar2;
  float extraout_EDX;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  unkbyte10 extraout_ST1;
  unkbyte10 Var8;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fStack_14;
  float fStack_10;
  undefined1 local_c [4];
  float fStack_8;
  
  (**(code **)(*(int *)plgsPlayer + 0x68))(local_c);
  fVar2 = 0.0;
  fStack_14 = 0.0;
  fVar1 = extraout_ECX;
  Var8 = extraout_ST1;
  if (0 < *(int *)(this + 0x1e0)) {
    fVar1 = 0.0;
    do {
      fVar9 = *(float *)(*(int *)(this + 0x1e4) + (int)fVar1) - fStack_10;
      fVar10 = ((float *)(*(int *)(this + 0x1e4) + (int)fVar1))[2] - fStack_8;
      fVar9 = fVar9 * fVar9 + fVar10 * fVar10;
      if (m3dSimdType == 0) {
        fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar9 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar5 = (ulonglong)(uint)fVar9;
        uVar6 = PackedFloatingReciprocalSQRAprox((longlong)Var8,uVar5);
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar6);
        uVar7 = PackedFloatingMUL(uVar6,uVar6);
        uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
        uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
        uVar6 = PackedFloatingMUL(uVar6,uVar5);
        Var8 = CONCAT28((short)((unkuint10)Var8 >> 0x40),uVar6);
        fVar9 = (float)uVar6;
        FastExitMediaState();
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      if (fStack_14 < fVar9) {
        fVar9 = *(float *)(*(int *)(this + 0x1e4) + (int)fVar1) - fStack_10;
        fVar10 = ((float *)(*(int *)(this + 0x1e4) + (int)fVar1))[2] - fStack_8;
        fStack_14 = fVar9 * fVar9 + fVar10 * fVar10;
        if (m3dSimdType == 0) {
          fStack_14 = fStack_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar11 = rsqrtss(ZEXT416((uint)fStack_14),ZEXT416((uint)fStack_14));
          fVar9 = auVar11._0_4_;
          fStack_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_14 * fVar9 * fVar9) *
                      fStack_14;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar5 = (ulonglong)(uint)fStack_14;
          uVar6 = PackedFloatingReciprocalSQRAprox((longlong)Var8,uVar5);
          in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar6);
          uVar7 = PackedFloatingMUL(uVar6,uVar6);
          uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
          uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
          uVar6 = PackedFloatingMUL(uVar6,uVar5);
          Var8 = CONCAT28((short)((unkuint10)Var8 >> 0x40),uVar6);
          fStack_14 = (float)uVar6;
          FastExitMediaState();
        }
        else {
          fStack_14 = SQRT(fStack_14);
        }
      }
      fVar2 = (float)((int)fVar2 + 1);
      *(undefined4 *)((int)fVar1 + 0x18 + *(int *)(this + 0x1e4)) = 0x3f800000;
      fVar1 = (float)((int)fVar1 + 0x1c);
    } while ((int)fVar2 < *(int *)(this + 0x1e0));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x1e0)) {
    fStack_14 = fStack_14 * ___real_3f000000;
    iVar4 = 0;
    do {
      fVar9 = *(float *)(*(int *)(this + 0x1e4) + iVar4) - fStack_10;
      fVar10 = ((float *)(*(int *)(this + 0x1e4) + iVar4))[2] - fStack_8;
      fVar9 = fVar9 * fVar9 + fVar10 * fVar10;
      if (m3dSimdType == 0) {
        fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar9 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar5 = (ulonglong)(uint)fVar9;
        uVar6 = PackedFloatingReciprocalSQRAprox((longlong)Var8,uVar5);
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar6);
        uVar7 = PackedFloatingMUL(uVar6,uVar6);
        uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
        uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
        uVar6 = PackedFloatingMUL(uVar6,uVar5);
        Var8 = CONCAT28((short)((unkuint10)Var8 >> 0x40),uVar6);
        fVar9 = (float)uVar6;
        FastExitMediaState();
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      if (fStack_14 < fVar9) {
        Var8 = in_ST2;
        in_ST2 = in_ST3;
        fVar2 = m3dRandRange(fVar1,fVar2);
        fVar1 = *(float *)(this + 0x1e4);
        *(float *)(iVar4 + 0x18 + (int)fVar1) = fVar2;
        fVar2 = extraout_EDX;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (iVar3 < *(int *)(this + 0x1e0));
  }
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053AF40 */

void __thiscall aiDOMAIN_SPAWN::ProcessMP_NOTIFY(aiDOMAIN_SPAWN *this,gsEVENT *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == -100) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(iVar1 + 0x10);
  }
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053AF80 */

void __thiscall aiDOMAIN_SPAWN::ProcessMP_GET_SYNC_DATA(aiDOMAIN_SPAWN *this,void *param_1)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_0095d968 & 1) == 0) {
      DAT_0095d968 = DAT_0095d968 | 1;
      DAT_0095d950._0_1_ = 0;
      DAT_0095d950._1_1_ = 0x40;
      DAT_0095d954 = 0;
      DAT_0095d958 = 0;
      DAT_0095d95c = 0;
      DAT_0095d950._2_2_ = 0x14;
      atexit((_func_4879 *)&__E11);
    }
    puVar1 = &DAT_0095d950;
    *(undefined4 **)param_1 = &DAT_0095d950;
  }
  puVar1[3] = *(undefined4 *)(this + 0x1d0);
  puVar1[4] = *(undefined4 *)(this + 0x1cc);
  puVar1[2] = *(undefined4 *)(this + 0x1c0);
  puVar1[1] = *(undefined4 *)(this + 0xd0);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053B020
   addr: 0053B020 */

void __thiscall dynDYNAMIC::ProcessMP_WRITE_SYNC_DATA(dynDYNAMIC *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 uVar2;
  gsMSG_MP_SAVELOAD *pgVar3;
  undefined1 *puStack_40;
  undefined2 *puStack_34;
  gsMSG_MP_SAVELOAD **ppgStack_28;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar3 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  iVar1 = *(int *)param_1;
  local_10 = 0;
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x53b056;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&stack0xffffffe4);
  puStack_34 = (undefined2 *)0x53b08d;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uStack_8 = (undefined2)uVar2;
  local_6 = (undefined2)((uint)uVar2 >> 0x10);
  puStack_34 = &uStack_8;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&ppgStack_28);
  puStack_40 = (undefined1 *)0x53b0c4;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf2,(fioCHUNK *)&ppgStack_28);
  puStack_40 = &stack0xffffffec;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&puStack_34);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf3,(fioCHUNK *)&puStack_34);
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))(&stack0xffffffe0,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&puStack_40);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar3 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar3);
  return;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053B140 */

void __thiscall
aiDOMAIN_SPAWN::ProcessMP_READ_SYNC_DATA(aiDOMAIN_SPAWN *this,gsMSG_MP_SAVELOAD *param_1)

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
  undefined4 local_8;
  
  puVar3 = *(undefined4 **)param_1;
  local_24 = 0;
  uStack_22 = 0xffff;
  uStack_20 = 0xffff;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  if (puVar3 == (undefined4 *)0x0) {
    if ((DAT_0095d968 & 1) == 0) {
      DAT_0095d968 = DAT_0095d968 | 1;
      DAT_0095d950._0_1_ = 0;
      DAT_0095d950._1_1_ = 0x40;
      DAT_0095d954 = 0;
      DAT_0095d958 = 0;
      DAT_0095d95c = 0;
      DAT_0095d950._2_2_ = 0x14;
      atexit((_func_4879 *)&__E11);
    }
    puVar3 = &DAT_0095d950;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_14._2_2_ = 0x14;
    *(undefined4 **)param_1 = &DAT_0095d950;
    local_14._0_1_ = 0;
    local_14._1_1_ = 0x40;
    puVar1 = &local_14;
    puVar4 = &DAT_0095d950;
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
      goto switchD_0053b218_default;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar1,4,4);
switchD_0053b218_default:
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_24);
  } while( true );
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053B290
   addr: 0053B290 */

void * __thiscall aiDOMAIN_SPAWN::_vector_deleting_destructor_(aiDOMAIN_SPAWN *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__entIACTIVE_OBJ__;
  *(undefined ***)(this + 0x94) = &_vftable__for__scnDOMAIN__;
  *(undefined4 *)(this + 0xd4) = 0;
  if (*(void **)(this + 0x1e4) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1e4));
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  gsDOMAIN::~gsDOMAIN((gsDOMAIN *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053B2F0 */

gsDOMAIN * __thiscall aiDOMAIN_LIST_SPAWN::MakeDomain(aiDOMAIN_LIST_SPAWN *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(0x1e8);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined4 *)(this_00 + 0x1e0) = 0;
    *(undefined4 *)(this_00 + 0x1e4) = 0;
    *(undefined ***)this_00 = &aiDOMAIN_SPAWN::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &aiDOMAIN_SPAWN::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs_shared:ai_spawn.cpp
   addr: 0053B340
   addr: 0053B340 */

void * __thiscall
aiDOMAIN_LIST_SPAWN::_scalar_deleting_destructor_(aiDOMAIN_LIST_SPAWN *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

