
/* from: gs:gs_level_prel.cpp
   addr: 0052D0D0 */

int __thiscall gsLVL_SYSTEM::PreloadInit(gsLVL_SYSTEM *this)

{
  char cVar1;
  gsLVL_SYSTEM *pgVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int local_108;
  char local_104 [260];
  
  apNAME::SetName((apNAME *)(this + 0x3c0),s_);
  apNAME::SetName((apNAME *)(this + 0x400),s_);
  pgVar2 = this + 0x488;
  iVar5 = 10;
  do {
    *(undefined4 *)(pgVar2 + -4) = 0;
    *(undefined4 *)pgVar2 = 0;
    pgVar2 = pgVar2 + 0x48;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(this + 0x440) = 0;
  iVar5 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadComm,&local_108);
  if ((iVar5 != 0) && (local_108 != 0)) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
  }
  iVar5 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadMP,&local_108);
  if ((iVar5 != 0) && (local_108 != 0)) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
  }
  iVar5 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadScn,&local_108);
  if ((iVar5 != 0) && (local_108 != 0)) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
  }
  iVar5 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadScnUpd,&local_108);
  if ((iVar5 != 0) && (local_108 != 0)) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
  }
  iVar5 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadLev,&local_108);
  if ((iVar5 != 0) && (local_108 != 0)) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 0x10;
  }
  puVar3 = (undefined4 *)operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(undefined4 **)(this + 0x3b8) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  pcVar4 = fnmMakeFullName((char *)(this + 0x234),s_default,s_dsl,1);
  pcVar6 = local_104;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  psSHEET::Load(*(psSHEET **)(this + 0x3b8),local_104);
  puVar3 = (undefined4 *)operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(undefined4 **)(this + 0x3bc) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  pcVar4 = fnmMakeFullName((char *)(this + 0x234),s_m_play,s_dsl,1);
  pcVar6 = local_104;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  psSHEET::Load(*(psSHEET **)(this + 0x3bc),local_104);
  return 1;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052D2C0 */

void __thiscall gsLVL_SYSTEM::PreloadTerm(gsLVL_SYSTEM *this)

{
  psSHEET *ppVar1;
  
  PreloadTermLevel(this);
  ppVar1 = *(psSHEET **)(this + 0x3b8);
  if (ppVar1 != (psSHEET *)0x0) {
    psSHEET::Empty(ppVar1);
    operator_delete(ppVar1);
  }
  ppVar1 = *(psSHEET **)(this + 0x3bc);
  *(undefined4 *)(this + 0x3b8) = 0;
  if (ppVar1 != (psSHEET *)0x0) {
    psSHEET::Empty(ppVar1);
    operator_delete(ppVar1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
  return;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052D320 */

int __thiscall gsLVL_SYSTEM::PreloadInitLevel(gsLVL_SYSTEM *this,char *param_1)

{
  gsLVL_SYSTEM gVar1;
  gsLVL_SYSTEM *pgVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  gsLVL_SYSTEM *pgVar8;
  undefined4 uVar9;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  gsLVL_SYSTEM local_80 [64];
  gsLVL_SYSTEM local_40 [64];
  
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  if (((byte)this[0x28] & 1) != 0) {
    PreloadList(this,*(psSHEET **)(this + 0x3b8));
  }
  if (((byte)this[0x28] & 2) != 0) {
    PreloadList(this,*(psSHEET **)(this + 0x3bc));
  }
  pgVar2 = (gsLVL_SYSTEM *)fnmGetName(param_1);
  pgVar8 = local_80;
  do {
    gVar1 = *pgVar2;
    pgVar2 = pgVar2 + 1;
    *pgVar8 = gVar1;
    pgVar8 = pgVar8 + 1;
  } while (gVar1 != (gsLVL_SYSTEM)0x0);
  iVar3 = 0;
  do {
    pgVar8 = local_80 + iVar3;
    local_40[iVar3] = *pgVar8;
    iVar3 = iVar3 + 1;
  } while (*pgVar8 != (gsLVL_SYSTEM)0x0);
  pcVar4 = strchr((char *)local_40,0x5f);
  if ((pcVar4 != (char *)0x0) && (pcVar4 = strchr(pcVar4 + 1,0x5f), pcVar4 != (char *)0x0)) {
    *pcVar4 = '\0';
  }
  if (((byte)this[0x28] & 0x10) != 0) {
    iVar3 = apNAME::IsName((apNAME *)(this + 0x3c0),(char *)local_40);
    if (iVar3 != 0) goto LAB_0052d4ed;
    PreloadTermLevel(this);
    pcVar4 = fnmMakeFullName((char *)(this + 0x234),(char *)local_40,s_dsl,1);
    iVar3 = psSHEET::Load((psSHEET *)&local_90,pcVar4);
    if (iVar3 != 0) {
      iVar3 = 0;
      sprintf((char *)&apBuffer,s_SCENE__d,0);
      iVar5 = psSHEET::GetStr((psSHEET *)&local_90,(char *)&apBuffer,s_name,
                              (char *)(this + *(int *)(this + 0x440) * 0x48 + 0x444),0x40);
      while (iVar5 != 0) {
        iVar3 = iVar3 + 1;
        *(int *)(this + 0x440) = *(int *)(this + 0x440) + 1;
        sprintf((char *)&apBuffer,s_SCENE__d,iVar3);
        iVar5 = psSHEET::GetStr((psSHEET *)&local_90,(char *)&apBuffer,s_name,
                                (char *)(this + *(int *)(this + 0x440) * 0x48 + 0x444),0x40);
      }
      apNAME::SetName((apNAME *)(this + 0x3c0),(char *)local_40);
      goto LAB_0052d4ed;
    }
  }
  iVar3 = apNAME::IsName((apNAME *)(this + 0x400),(char *)local_80);
  if (iVar3 == 0) {
    PreloadTermLevel(this);
    apNAME::SetName((apNAME *)(this + 0x3c0),(char *)local_80);
    pgVar8 = local_80;
    pgVar2 = this + *(int *)(this + 0x440) * 0x48 + 0x444;
    do {
      gVar1 = *pgVar8;
      pgVar8 = pgVar8 + 1;
      *pgVar2 = gVar1;
      pgVar2 = pgVar2 + 1;
    } while (gVar1 != (gsLVL_SYSTEM)0x0);
    *(int *)(this + 0x440) = *(int *)(this + 0x440) + 1;
  }
LAB_0052d4ed:
  apNAME::SetName((apNAME *)(this + 0x400),(char *)local_80);
  local_94 = 0;
  if (0 < *(int *)(this + 0x440)) {
    pgVar8 = this + 0x488;
    do {
      if ((((byte)this[0x28] & 0x10) != 0) && (*(int *)(pgVar8 + -4) == 0)) {
        piVar6 = (int *)operator_new(300);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[1] = 0;
          piVar6[0x43] = 0;
          piVar6[0x44] = 0;
          piVar6[0x45] = 0;
          piVar6[0x46] = 0;
          piVar6[0x47] = 0;
          *(undefined1 *)(piVar6 + 2) = 0;
          piVar6[0x48] = 0;
          piVar6[0x49] = 0;
          piVar6[0x4a] = 0;
          *piVar6 = (int)&fioFILE_MEM::_vftable_;
        }
        *(int **)(pgVar8 + -4) = piVar6;
        if (piVar6 != (int *)0x0) {
          iVar3 = *piVar6;
          uVar9 = 5;
          pcVar4 = fnmMakeFullName((char *)(this + 0x2c),(char *)(pgVar8 + -0x44),s_lg,1);
          iVar3 = (**(code **)(iVar3 + 4))(pcVar4,uVar9);
          if (iVar3 == 0) {
            pcVar4 = fnmMakeFullName((char *)(this + 0x2c),(char *)(this + local_94 * 0x48 + 0x444),
                                     s_lg,1);
            apLogErr(s_Error_preloading_file__s,pcVar4);
            psSHEET::Empty((psSHEET *)&local_90);
            return 0;
          }
        }
        sioSetSourceFile(*(fioFILE **)(pgVar8 + -4));
        sioReadSceneTex();
      }
      if ((((byte)this[0x28] & 4) != 0) && (*(int *)pgVar8 == 0)) {
        puVar7 = (undefined4 *)operator_new(0x10);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
        }
        *(undefined4 **)pgVar8 = puVar7;
        if (puVar7 != (undefined4 *)0x0) {
          pcVar4 = fnmMakeFullName((char *)(this + 0x234),(char *)local_80,s_dsl,1);
          iVar3 = psSHEET::Load(*(psSHEET **)pgVar8,pcVar4);
          if (iVar3 == 0) {
            pcVar4 = fnmMakeFullName((char *)(this + 0x234),(char *)local_80,s_dsl,1);
            apLogErr(s_Error_loading_file__s,pcVar4);
          }
        }
        if ((((byte)this[0x28] & 0x10) != 0) && (*(psSHEET **)pgVar8 != (psSHEET *)0x0)) {
          PreloadList(this,*(psSHEET **)pgVar8);
        }
      }
      local_94 = local_94 + 1;
      pgVar8 = pgVar8 + 0x48;
    } while (local_94 < *(int *)(this + 0x440));
  }
  txmMANAGER::MngTexState(txmManager,0x200,1);
  psSHEET::Empty((psSHEET *)&local_90);
  return 1;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052D6D0 */

void __thiscall gsLVL_SYSTEM::PreloadTermLevel(gsLVL_SYSTEM *this)

{
  psSHEET *this_00;
  int iVar1;
  gsLVL_SYSTEM *pgVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x440)) {
    pgVar2 = this + 0x484;
    do {
      if (*(int **)pgVar2 != (int *)0x0) {
        (**(code **)(**(int **)pgVar2 + 8))();
      }
      if (*(undefined4 **)pgVar2 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)pgVar2)(1);
      }
      this_00 = *(psSHEET **)(pgVar2 + 4);
      *(int *)pgVar2 = 0;
      if (this_00 != (psSHEET *)0x0) {
        psSHEET::Empty(this_00);
        operator_delete(this_00);
      }
      *(int *)(pgVar2 + 4) = 0;
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 0x48;
    } while (iVar1 < *(int *)(this + 0x440));
    *(undefined4 *)(this + 0x440) = 0;
    return;
  }
  *(undefined4 *)(this + 0x440) = 0;
  return;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052D750 */

int __thiscall gsLVL_SYSTEM::PreloadLoadScene(gsLVL_SYSTEM *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  gsLVL_SYSTEM *this_00;
  int iVar5;
  char local_268 [64];
  undefined **local_228;
  undefined4 local_224;
  undefined1 local_220;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_104 [260];
  
  local_224 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_220 = 0;
  local_108 = 0;
  local_228 = &fioFILE_DISK::_vftable_;
  pcVar2 = fnmGetName(param_1);
  pcVar4 = local_268;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  if (0 < *(int *)(this + 0x440)) {
    this_00 = this + 0x444;
    do {
      iVar3 = apNAME::IsName((apNAME *)this_00,local_268);
      if (iVar3 != 0) break;
      iVar5 = iVar5 + 1;
      this_00 = (gsLVL_SYSTEM *)((apNAME *)this_00 + 0x48);
    } while (iVar5 < *(int *)(this + 0x440));
  }
  if ((iVar5 < *(int *)(this + 0x440)) && (*(int *)(this + iVar5 * 0x48 + 0x484) != 0)) {
    apLog(s_Using_preloaded_version_of_the_s,local_268);
    sioSetSourceFile(*(fioFILE **)(this + iVar5 * 0x48 + 0x484));
    iVar3 = sioReadScene(gsScenePtr);
    if (iVar3 == 0) {
      apLogErr(s_Cannot_load_preloaded_scene__s__,local_268);
      return 0;
    }
  }
  else {
    iVar3 = fioIsExist(param_1);
    if (iVar3 == 0) {
      pcVar2 = fnmMakeFullName((char *)(this + 0x2c),local_268,s_lg,1);
      pcVar4 = local_104;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar3 = -(int)param_1;
      do {
        cVar1 = *param_1;
        param_1[(int)(local_104 + iVar3)] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    iVar3 = fioFILE_DISK::Init((fioFILE_DISK *)&local_228,local_104,5);
    if (iVar3 == 0) {
      apLogErr(s_Cannot_load_scene__s__cannot_ope,local_104);
      return 0;
    }
    apLog(s_Loading_scene__s_from_disk,local_104);
    sioSetSourceFile((fioFILE *)&local_228);
    iVar3 = sioReadScene(gsScenePtr);
    if (iVar3 == 0) {
      apLogErr(s_Cannot_load_scene__s,local_104);
      return 0;
    }
    fioFILE_DISK::Term((fioFILE_DISK *)&local_228);
  }
  if ((iVar5 < *(int *)(this + 0x440)) &&
     (*(psSHEET **)(this + iVar5 * 0x48 + 0x488) != (psSHEET *)0x0)) {
    PreloadList(this,*(psSHEET **)(this + iVar5 * 0x48 + 0x488));
  }
  return 1;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052D990 */

void __thiscall gsLVL_SYSTEM::PreloadUnloadData(gsLVL_SYSTEM *this)

{
  animTPL *paVar1;
  animINST *paVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  txmTEXTURE *ptVar5;
  gsLVL_SYSTEM *pgVar6;
  bool bVar7;
  
  for (paVar1 = scnSCENE::FindNextTpl(gsScenePtr,(animTPL *)0x0); paVar1 != (animTPL *)0x0;
      paVar1 = scnSCENE::FindNextTpl(gsScenePtr,paVar1)) {
    bVar7 = (*(uint *)(paVar1 + 0x84) & 0x100) == 0;
    paVar2 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
    if (paVar2 != (animINST *)0x0) {
      do {
        _Str1 = *(char **)(paVar2 + 0x20);
        if (_Str1 == (char *)0x0) {
          _Str1 = s_;
        }
        iVar3 = stricmp(_Str1,(char *)(paVar1 + 4));
        if (iVar3 == 0) {
          bVar7 = false;
        }
        paVar2 = scnSCENE::FindNextInst(gsScenePtr,paVar2);
      } while (paVar2 != (animINST *)0x0);
    }
    if (((((byte)this[0x28] & 1) != 0) && (*(psSHEET **)(this + 0x3b8) != (psSHEET *)0x0)) &&
       (iVar3 = _gsLvlPreloadListFind(*(psSHEET **)(this + 0x3b8),(char *)(paVar1 + 4)), iVar3 != 0)
       ) {
      bVar7 = false;
    }
    if (((((byte)this[0x28] & 2) != 0) && (*(psSHEET **)(this + 0x3bc) != (psSHEET *)0x0)) &&
       (iVar3 = _gsLvlPreloadListFind(*(psSHEET **)(this + 0x3bc),(char *)(paVar1 + 4)), iVar3 != 0)
       ) {
      bVar7 = false;
    }
    if ((((byte)this[0x28] & 0x14) != 0) && (iVar3 = 0, 0 < *(int *)(this + 0x440))) {
      pgVar6 = this + 0x488;
      do {
        if ((*(psSHEET **)pgVar6 != (psSHEET *)0x0) &&
           (iVar4 = _gsLvlPreloadListFind(*(psSHEET **)pgVar6,(char *)(paVar1 + 4)), iVar4 != 0)) {
          bVar7 = false;
        }
        iVar3 = iVar3 + 1;
        pgVar6 = pgVar6 + 0x48;
      } while (iVar3 < *(int *)(this + 0x440));
    }
    if (bVar7) {
      apLog(s_Template__s_unloaded_from_memory,paVar1 + 4);
      (**(code **)(*(int *)this + 0x3c))(paVar1);
      scnSCENE::DestroyTpl(gsScenePtr,paVar1);
    }
  }
  objOBJ::MarkUsedTex(*(objOBJ **)(gsScenePtr + 0x44));
  for (paVar2 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar2 != (animINST *)0x0;
      paVar2 = scnSCENE::FindNextInst(gsScenePtr,paVar2)) {
    if (*(objOBJ **)(paVar2 + 0x10) != (objOBJ *)0x0) {
      objOBJ::MarkUsedTex(*(objOBJ **)(paVar2 + 0x10));
    }
  }
  for (paVar1 = scnSCENE::FindNextTpl(gsScenePtr,(animTPL *)0x0); paVar1 != (animTPL *)0x0;
      paVar1 = scnSCENE::FindNextTpl(gsScenePtr,paVar1)) {
    if (*(objOBJ **)(paVar1 + 0x88) != (objOBJ *)0x0) {
      objOBJ::MarkUsedTex(*(objOBJ **)(paVar1 + 0x88));
    }
  }
  for (ptVar5 = txmMANAGER::GetNext(txmManager,(txmTEXTURE *)0x0); ptVar5 != (txmTEXTURE *)0x0;
      ptVar5 = txmMANAGER::GetNext(txmManager,ptVar5)) {
    if (((((byte)this[0x28] & 1) != 0) && (*(psSHEET **)(this + 0x3b8) != (psSHEET *)0x0)) &&
       (iVar3 = _gsLvlPreloadListFind(*(psSHEET **)(this + 0x3b8),(char *)(ptVar5 + 8)), iVar3 != 0)
       ) {
      *(uint *)(ptVar5 + 4) = *(uint *)(ptVar5 + 4) | 0x200;
    }
    if (((((byte)this[0x28] & 2) != 0) && (*(psSHEET **)(this + 0x3bc) != (psSHEET *)0x0)) &&
       (iVar3 = _gsLvlPreloadListFind(*(psSHEET **)(this + 0x3bc),(char *)(ptVar5 + 8)), iVar3 != 0)
       ) {
      *(uint *)(ptVar5 + 4) = *(uint *)(ptVar5 + 4) | 0x200;
    }
    if ((((byte)this[0x28] & 0x14) != 0) && (iVar3 = 0, 0 < *(int *)(this + 0x440))) {
      pgVar6 = this + 0x488;
      do {
        if ((*(psSHEET **)pgVar6 != (psSHEET *)0x0) &&
           (iVar4 = _gsLvlPreloadListFind(*(psSHEET **)pgVar6,(char *)(ptVar5 + 8)), iVar4 != 0)) {
          *(uint *)(ptVar5 + 4) = *(uint *)(ptVar5 + 4) | 0x200;
        }
        iVar3 = iVar3 + 1;
        pgVar6 = pgVar6 + 0x48;
      } while (iVar3 < *(int *)(this + 0x440));
    }
  }
  if ((((byte)this[0x28] & 0x14) != 0) && (iVar3 = 0, 0 < *(int *)(this + 0x440))) {
    pgVar6 = this + 0x484;
    do {
      if (*(fioFILE **)pgVar6 != (fioFILE *)0x0) {
        sioSetSourceFile(*(fioFILE **)pgVar6);
        sioReadSceneTex();
      }
      iVar3 = iVar3 + 1;
      pgVar6 = pgVar6 + 0x48;
    } while (iVar3 < *(int *)(this + 0x440));
  }
  txmMANAGER::PurgeAll(txmManager);
  return;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052DC50 */

void __thiscall gsLVL_SYSTEM::PreloadDumpInfo(gsLVL_SYSTEM *this)

{
  char cVar1;
  uint uVar2;
  animTPL *this_00;
  int iVar3;
  int iVar4;
  txmTEXTURE *ptVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  gsLVL_SYSTEM *local_108;
  char local_104 [260];
  
  iVar7 = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = this;
  if ((*(int *)(this + 0x440) != 0) && (uVar2 = *(uint *)(this + 0x28), (uVar2 & 8) != 0)) {
    if ((uVar2 & 0x14) == 0) {
      if ((uVar2 & 1) != 0) {
        psSHEET::Empty((psSHEET *)&local_118);
        this_00 = scnSCENE::FindNextTpl(gsScenePtr,(animTPL *)0x0);
        while (this_00 != (animTPL *)0x0) {
          iVar3 = animTPL::IsDummy(this_00);
          uVar2 = *(uint *)(this_00 + 0x84);
          iVar4 = _gsLvlPreloadListFind(*(psSHEET **)(local_108 + 0x3b8),(char *)(this_00 + 4));
          if ((iVar4 == 0) && ((uVar2 & 0x800) == 0 && iVar3 == 0)) {
            sprintf((char *)&apBuffer,s_Model__d,iVar7);
            pcVar8 = fnmAddExt((char *)(this_00 + 4),s_tpl);
            psSHEET::SetStr((psSHEET *)&local_118,s_Preload_Mod,(char *)&apBuffer,pcVar8);
            iVar7 = iVar7 + 1;
          }
          this_00 = scnSCENE::FindNextTpl(gsScenePtr,this_00);
          this = local_108;
        }
        iVar7 = 0;
        for (ptVar5 = txmMANAGER::GetNext(txmManager,(txmTEXTURE *)0x0); ptVar5 != (txmTEXTURE *)0x0
            ; ptVar5 = txmMANAGER::GetNext(txmManager,ptVar5)) {
          if (((*(uint *)(ptVar5 + 4) & 0x40000) != 0) && ((*(uint *)(ptVar5 + 4) & 0x1000000) != 0)
             ) {
            sprintf((char *)&apBuffer,s_Texture__d,iVar7);
            pcVar8 = fnmAddExt((char *)(ptVar5 + 8),s_pct);
            psSHEET::SetStr((psSHEET *)&local_118,s_Preload_Tex,(char *)&apBuffer,pcVar8);
            iVar7 = iVar7 + 1;
          }
        }
        pcVar6 = fnmMakeFullName((char *)(this + 0x234),(char *)(this + 0x400),s_dsl,1);
        pcVar8 = local_104;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar8 = cVar1;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar7 = fioIsExist(local_104);
        if ((iVar7 == 0) || (iVar7 = fioIsReadOnly(local_104), iVar7 == 0)) {
          psSHEET::Save((psSHEET *)&local_118,local_104);
          psSHEET::Empty((psSHEET *)&local_118);
          return;
        }
        goto LAB_0052de26;
      }
      pcVar8 = s_Preload_common_info_switch_shoul;
    }
    else {
      pcVar8 = s_Update_preload_data_cannot_be_do;
    }
    apLogErr(pcVar8);
  }
LAB_0052de26:
  psSHEET::Empty((psSHEET *)&local_118);
  return;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052DE40 */

void __thiscall gsLVL_SYSTEM::PreloadList(gsLVL_SYSTEM *this,psSHEET *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  txmTEXTURE *ptVar4;
  char *pcVar5;
  int iVar6;
  char local_104 [260];
  
  iVar6 = 0;
  sprintf((char *)&apBuffer,s_Model__d,0);
  iVar2 = psSHEET::GetStr(param_1,s_Preload_Mod,(char *)&apBuffer,local_104,0x104);
  while (iVar2 != 0) {
    pcVar3 = fnmGetName(local_104);
    pcVar5 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)this + 0x24))(local_104);
    iVar6 = iVar6 + 1;
    sprintf((char *)&apBuffer,s_Model__d,iVar6);
    iVar2 = psSHEET::GetStr(param_1,s_Preload_Mod,(char *)&apBuffer,local_104,0x104);
  }
  iVar6 = 0;
  sprintf((char *)&apBuffer,s_Texture__d,0);
  iVar2 = psSHEET::GetStr(param_1,s_Preload_Tex,(char *)&apBuffer,local_104,0x104);
  while (iVar2 != 0) {
    pcVar3 = fnmGetName(local_104);
    pcVar5 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (txmManager != (txmMANAGER *)0x0) {
      ptVar4 = txmMANAGER::Find(txmManager,local_104);
      if (ptVar4 == (txmTEXTURE *)0x0) {
        ptVar4 = txmMANAGER::Add(txmManager,local_104,0x100,2);
        if (ptVar4 == (txmTEXTURE *)0x0) {
          apLogErr(s__Texture__s_not_found_during_pre,local_104);
        }
      }
      else {
        txmMANAGER::Load(txmManager,ptVar4,1);
      }
    }
    iVar6 = iVar6 + 1;
    sprintf((char *)&apBuffer,s_Texture__d,iVar6);
    iVar2 = psSHEET::GetStr(param_1,s_Preload_Tex,(char *)&apBuffer,local_104,0x104);
  }
  iVar6 = 0;
  sprintf((char *)&apBuffer,s_Sound__d,0);
  iVar2 = psSHEET::GetStr(param_1,s_Preload_Snd,(char *)&apBuffer,local_104,0x104);
  while (iVar2 != 0) {
    pcVar3 = fnmGetName(local_104);
    pcVar5 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (snmManager != (snmMANAGER *)0x0) {
      snmMANAGER::Add(snmManager,local_104,0);
    }
    iVar6 = iVar6 + 1;
    sprintf((char *)&apBuffer,s_Sound__d,iVar6);
    iVar2 = psSHEET::GetStr(param_1,s_Preload_Snd,(char *)&apBuffer,local_104,0x104);
  }
  return;
}




/* from: gs:gs_level_prel.cpp
   addr: 0052E060 */

int __fastcall _gsLvlPreloadListFind(psSHEET *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char local_104 [260];
  
  iVar3 = 0;
  sprintf((char *)&apBuffer,s_Model__d,0);
  iVar1 = psSHEET::GetStr(param_1,s_Preload_Mod,(char *)&apBuffer,local_104,0x104);
  while (iVar1 != 0) {
    pcVar2 = fnmGetName(local_104);
    iVar1 = stricmp(param_2,pcVar2);
    if (iVar1 == 0) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    sprintf((char *)&apBuffer,s_Model__d,iVar3);
    iVar1 = psSHEET::GetStr(param_1,s_Preload_Mod,(char *)&apBuffer,local_104,0x104);
  }
  iVar3 = 0;
  sprintf((char *)&apBuffer,s_Texture__d,0);
  iVar1 = psSHEET::GetStr(param_1,s_Preload_Tex,(char *)&apBuffer,local_104,0x104);
  while (iVar1 != 0) {
    pcVar2 = fnmGetName(local_104);
    iVar1 = stricmp(param_2,pcVar2);
    if (iVar1 == 0) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    sprintf((char *)&apBuffer,s_Texture__d,iVar3);
    iVar1 = psSHEET::GetStr(param_1,s_Preload_Tex,(char *)&apBuffer,local_104,0x104);
  }
  iVar3 = 0;
  sprintf((char *)&apBuffer,s_Sound__d,0);
  iVar1 = psSHEET::GetStr(param_1,s_Preload_Snd,(char *)&apBuffer,local_104,0x104);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = fnmGetName(local_104);
    iVar1 = stricmp(param_2,pcVar2);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
    sprintf((char *)&apBuffer,s_Sound__d,iVar3);
    iVar1 = psSHEET::GetStr(param_1,s_Preload_Snd,(char *)&apBuffer,local_104,0x104);
  }
  return 1;
}

