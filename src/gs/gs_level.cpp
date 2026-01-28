
/* from: gs:gs_level.cpp
   addr: 00520F00 */

gsLVL_SYSTEM * __thiscall gsLVL_SYSTEM::gsLVL_SYSTEM(gsLVL_SYSTEM *this)

{
  gsLVL_SYSTEM *pgVar1;
  int iVar2;
  
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
  *(undefined4 *)(this + 0x28) = 0;
  this[0x338] = (gsLVL_SYSTEM)0x0;
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3bc) = 0;
  this[0x3c0] = (gsLVL_SYSTEM)0x0;
  this[0x400] = (gsLVL_SYSTEM)0x0;
  *(undefined4 *)(this + 0x440) = 0;
  pgVar1 = this + 0x444;
  iVar2 = 10;
  do {
    *pgVar1 = (gsLVL_SYSTEM)0x0;
    pgVar1 = pgVar1 + 0x48;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pgVar1 = this + 0x714;
  iVar2 = 2;
  do {
    *(undefined4 *)pgVar1 = 0;
    _vector_constructor_iterator_(pgVar1 + 4,0x88,0x32,gsLVL_TEX2MTL::gsLVL_TEX2MTL);
    pgVar1 = pgVar1 + 0x1a94;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &_vftable_;
  this[0x2c] = (gsLVL_SYSTEM)0x0;
  this[0x130] = (gsLVL_SYSTEM)0x0;
  this[0x234] = (gsLVL_SYSTEM)0x0;
  pgVar1 = this + 0x714;
  for (iVar2 = 0xd4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pgVar1 = 0;
    pgVar1 = pgVar1 + 4;
  }
  pgVar1 = this + 0x714;
  for (iVar2 = 0xd4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pgVar1 = 0;
    pgVar1 = pgVar1 + 4;
  }
  *(undefined4 *)(this + 0x1c) = 10;
  return this;
}




/* from: gs:gs_level.cpp
   addr: 00520FD0
   addr: 00520FD0 */

void * __thiscall gsLVL_SYSTEM::_vector_deleting_destructor_(gsLVL_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_level.cpp
   addr: 00521010 */

int __thiscall gsLVL_SYSTEM::Init(gsLVL_SYSTEM *this)

{
  scnSCENE *this_00;
  int iVar1;
  
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24535953,0);
  this_00 = (scnSCENE *)operator_new(0x8c);
  if (this_00 == (scnSCENE *)0x0) {
    gsScenePtr = (scnSCENE *)0x0;
    return 0;
  }
  gsScenePtr = (scnSCENE *)scnSCENE::scnSCENE(this_00);
  if (gsScenePtr == (scnSCENE *)0x0) {
    return 0;
  }
  _apCfgReadString((void **)0x0,s_Level,s_PathDB,(char *)(this + 0x130),0x104);
  _apCfgReadString((void **)0x0,s_Level,s_PathScn,(char *)(this + 0x2c),0x104);
  _apCfgReadString((void **)0x0,s_Level,s_PathLev,(char *)(this + 0x234),0x104);
  iVar1 = PreloadInit(this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x40))();
  return (uint)(iVar1 != 0);
}




/* from: gs:gs_level.cpp
   addr: 005210D0 */

void __thiscall gsLVL_SYSTEM::Term(gsLVL_SYSTEM *this)

{
  scnSCENE *psVar1;
  
  PreloadTerm(this);
  psVar1 = gsScenePtr;
  if (gsScenePtr != (scnSCENE *)0x0) {
    scnSCENE::~scnSCENE(gsScenePtr);
    operator_delete(psVar1);
  }
  msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)this);
  return;
}




/* from: gs:gs_level.cpp
   addr: 00521110 */

int __thiscall gsLVL_SYSTEM::LoadLevel(gsLVL_SYSTEM *this,gsLOAD_SCENE_PARAM *param_1)

{
  int iVar1;
  
  DAT_0095ceac = DAT_0095ceac + 1;
  if (1 < DAT_0095ceac) {
    iVar1 = gsLoadLevel1(param_1);
    return iVar1;
  }
  iVar1 = gsLoadLevel(param_1);
  return iVar1;
}




/* from: gs:gs_level.cpp
   addr: 00521150 */

int __fastcall gsLoadLevel(gsLOAD_SCENE_PARAM *param_1)

{
  gsLOAD_SCENE_PARAM *pgVar1;
  gsLOAD_SCENE_PARAM gVar2;
  gsLOAD_SCENE_PARAM *pgVar3;
  int iVar4;
  txmTEXTURE *ptVar5;
  
  gsLVL_SYSTEM::PrepareReloadAnchor(gsSysLevel,param_1);
  gsLVL_SYSTEM::PreloadDumpInfo(gsSysLevel);
  apMsg(s_Destroy_current_level);
  (**(code **)(*(int *)gsSysLevel + 0x20))(param_1);
  apMsg(s_Load_preloaded_textures);
  txmMANAGER::LoadAll(txmManager,_gsLvlLoadTexErrorCB);
  pgVar1 = param_1 + 4;
  pgVar3 = pgVar1;
  do {
    gVar2 = *pgVar3;
    pgVar3[(int)&gsSceneFullName - (int)pgVar1] = gVar2;
    pgVar3 = pgVar3 + 1;
  } while (gVar2 != (gsLOAD_SCENE_PARAM)0x0);
  apMsg(s_Load_file__s,pgVar1);
  iVar4 = gsLVL_SYSTEM::PreloadInitLevel(gsSysLevel,(char *)pgVar1);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = gsLVL_SYSTEM::PreloadLoadScene(gsSysLevel,(char *)pgVar1);
  if (iVar4 == 0) {
    return 0;
  }
  apMsg(s_Start_level_preprocessing____);
  iVar4 = scnSCENE::InitLevel(gsScenePtr);
  if (iVar4 != 0) {
    _gsLvlCalcCDT2(gsScenePtr);
    gsLVL_SYSTEM::ApplyReloadAnchor(gsSysLevel,param_1);
    apMsg(s_Load_scene_textures);
    txmMANAGER::LoadAll(txmManager,_gsLvlLoadTexErrorCB);
    (**(code **)(*(int *)gsSysLevel + 0x28))(*(undefined4 *)(gsScenePtr + 0x44));
    apMsg(s_Load_instances);
    iVar4 = gsLVL_SYSTEM::LoadInstAll(gsSysLevel);
    if (iVar4 != 0) {
      apMsg(s_Load_instance_textures);
      txmMANAGER::LoadAll(txmManager,_gsLvlLoadTexErrorCB);
      gsLVL_SYSTEM::PreloadUnloadData(gsSysLevel);
      for (ptVar5 = txmMANAGER::GetNext(txmManager,(txmTEXTURE *)0x0); ptVar5 != (txmTEXTURE *)0x0;
          ptVar5 = txmMANAGER::GetNext(txmManager,ptVar5)) {
        iVar4 = apSTATE::IsState((apSTATE *)(ptVar5 + 4),0x1000000);
        if (iVar4 != 0) {
          (**(code **)(*(int *)txmManager + 0x14))(ptVar5);
        }
      }
      msgSYSTEM::SendAll(&msgSystem,0x3f6,(void *)0x0,(msgADDR *)0x0);
      apMsg(s_Sending_GS_MSG_INIT_LEVEL);
      gsAppState = gsAppState & 0xfff7ffffU | 0x40000;
      msgSYSTEM::SendAll(&msgSystem,0x3f4,(void *)0x0,(msgADDR *)0x0);
      gsMP_SYSTEM::SetupMPStates(gsSysMP);
      msgSYSTEM::SendAll(&msgSystem,0x3f7,(void *)0x0,(msgADDR *)0x0);
      if ((param_1 != (gsLOAD_SCENE_PARAM *)0x0) && (*(int *)(param_1 + 0x14c) != 0)) {
        gsElapsedTimeLevel = 0.0;
        msgSYSTEM::SendAll(&msgSystem,0x3f1,(void *)0x0,(msgADDR *)0x0);
      }
      apMsg(s_Level_loaded_successfuly__Start_);
      return 1;
    }
    (**(code **)(*(int *)gsSysLevel + 0x20))(0);
    return 0;
  }
  return 0;
}




/* from: gs:gs_level.cpp
   addr: 005213A0 */

void __thiscall gsLVL_SYSTEM::DestroyLevel(gsLVL_SYSTEM *this,gsLOAD_SCENE_PARAM *param_1)

{
  entENTITY *peVar1;
  entENTITY *peVar2;
  msgADDR *pmVar3;
  int iVar4;
  uint uVar5;
  
  apMsg(s_Destroy_current_level);
  gsAppState = gsAppState & 0xfffbffff;
  if (gsScenePtr != (scnSCENE *)0x0) {
    for (peVar2 = entFindNext((entENTITY *)0x0); peVar2 != (entENTITY *)0x0;
        peVar2 = entFindNext(peVar2)) {
      *(uint *)(peVar2 + 0xb4) = *(uint *)(peVar2 + 0xb4) & 0xfffffff7;
    }
    for (pmVar3 = (msgADDR *)entFindNext((entENTITY *)0x0); pmVar3 != (msgADDR *)0x0;
        pmVar3 = (msgADDR *)entFindNext((entENTITY *)pmVar3)) {
      if (param_1 != (gsLOAD_SCENE_PARAM *)0x0) {
        uVar5 = *(uint *)(pmVar3 + 0xb4);
        if ((uVar5 & 4) == 0) {
          if (((((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x150) == 0)) ||
               (*(int *)(pmVar3 + 0xbc) == 0)) ||
              ((iVar4 = msgSYSTEM::SendMsg(&msgSystem,pmVar3,0x3fb,(void *)0x0,(msgADDR *)0x0),
               iVar4 == 0 && (((byte)pmVar3[0xb4] & 1) == 0)))) ||
             (iVar4 = (**(code **)(**(int **)(param_1 + 0x150) + 0x2c))
                                (*(undefined4 *)(pmVar3 + 0xbc)), iVar4 == 0)) goto LAB_00521487;
          uVar5 = *(uint *)(pmVar3 + 0xb4);
        }
        *(uint *)(pmVar3 + 0xb4) = uVar5 | 8;
      }
LAB_00521487:
    }
    msgSYSTEM::SendAll(&msgSystem,0x3f5,(void *)0x0,(msgADDR *)0x0);
    peVar2 = entFindNext((entENTITY *)0x0);
    while (peVar1 = peVar2, peVar1 != (entENTITY *)0x0) {
      peVar2 = entFindNext(peVar1);
      if ((((byte)peVar1[0xb4] & 8) == 0) ||
         (iVar4 = apSTATE::IsState((apSTATE *)(peVar1 + 0xc),4), iVar4 != 0)) {
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar1,2,(void *)0x0,(msgADDR *)0x0);
      }
    }
    (**(code **)(*(int *)gsSysLevel + 0x30))(*(undefined4 *)(gsScenePtr + 0x44));
    partDestroyEmitters();
    pteMANAGER::TermLevel(pteManager);
    if (param_1 == (gsLOAD_SCENE_PARAM *)0x0) {
      (**(code **)(*(int *)this + 0x38))(1);
    }
    else {
      (**(code **)(*(int *)this + 0x38))(0);
    }
    scnSCENE::DestroyLevel(gsScenePtr,0);
    (**(code **)(*(int *)rendDrv + 0x9c))(gsScenePtr);
    msgSYSTEM::PurgeDestroyAddrAll(&msgSystem);
    msgSYSTEM::DeleteAllMsg(&msgSystem);
  }
  return;
}




/* from: gs:gs_level.cpp
   addr: 00521570 */

int __thiscall gsLVL_SYSTEM::PrepareReloadAnchor(gsLVL_SYSTEM *this,gsLOAD_SCENE_PARAM *param_1)

{
  gsLOAD_SCENE_PARAM *pgVar1;
  gsLOAD_SCENE_PARAM gVar2;
  animINST *this_00;
  int iVar3;
  gsLOAD_SCENE_PARAM *pgVar4;
  
  if (param_1 != (gsLOAD_SCENE_PARAM *)0x0) {
    pgVar1 = param_1 + 0x108;
    iVar3 = -1;
    pgVar4 = pgVar1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      gVar2 = *pgVar4;
      pgVar4 = pgVar4 + 1;
    } while (gVar2 != (gsLOAD_SCENE_PARAM)0x0);
    if (iVar3 != -2) {
      this_00 = scnSCENE::FindInstName(gsScenePtr,(char *)pgVar1);
      if (this_00 == (animINST *)0x0) {
        apLogErr(s_Cannot_find_anchor_instance__s);
        return 0;
      }
      apNAME::SetName((apNAME *)(this + 0x338),(char *)pgVar1);
      animINST::GetMatrL2W(this_00,(m3dMATR *)(this + 0x378));
      if (*(msgADDR **)(this_00 + 0x13c) == (msgADDR *)0x0) {
        return 1;
      }
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this_00 + 0x13c),2,(void *)0x0,(msgADDR *)0x0);
      return 1;
    }
  }
  apNAME::SetName((apNAME *)(this + 0x338),s_);
  m3dMATR::Identity((m3dMATR *)(this + 0x378));
  return 1;
}




/* from: gs:gs_level.cpp
   addr: 00521620 */

int __thiscall gsLVL_SYSTEM::ApplyReloadAnchor(gsLVL_SYSTEM *this,gsLOAD_SCENE_PARAM *param_1)

{
  gsLVL_SYSTEM *pgVar1;
  gsLVL_SYSTEM gVar2;
  animINST *this_00;
  int iVar3;
  gsLVL_SYSTEM *pgVar4;
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  pgVar1 = this + 0x338;
  iVar3 = -1;
  pgVar4 = pgVar1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    gVar2 = *pgVar4;
    pgVar4 = pgVar4 + 1;
  } while (gVar2 != (gsLVL_SYSTEM)0x0);
  if (iVar3 != -2) {
    this_00 = scnSCENE::FindInstName(gsScenePtr,(char *)pgVar1);
    if (this_00 == (animINST *)0x0) {
      apLogErr(s_Cannot_find_anchor_instance__s,pgVar1);
      return 0;
    }
    animINST::GetMatrL2W(this_00,local_40);
    m3dMATR::Invert((m3dMATR *)(this + 0x378),local_80);
    m3dMATR::Transform(local_80,local_40,2);
    msgSYSTEM::SendAll(&msgSystem,0x3fa,local_80,(msgADDR *)0x0);
  }
  return 1;
}




/* from: gs:gs_level.cpp
   addr: 005216F0 */

int __thiscall gsLVL_SYSTEM::LoadInstAll(gsLVL_SYSTEM *this)

{
  animTPL aVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  animINST *paVar5;
  char *pcVar6;
  animINST *paVar7;
  animTPL *paVar8;
  entENTITY *peVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  animTPL *paVar15;
  undefined4 *puVar16;
  bool bVar17;
  int local_1c;
  int local_18;
  undefined4 *local_c;
  
  puVar3 = (undefined4 *)apCalloc(0x11a,*(uint *)(gsScenePtr + 100));
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  pvVar4 = apCalloc(4,*(uint *)(gsScenePtr + 100));
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  local_1c = 0;
  paVar5 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
  if (paVar5 != (animINST *)0x0) {
    pcVar13 = (char *)((int)puVar3 + 0xd6);
    do {
      if ((*(int *)(paVar5 + 0x13c) == 0) && ((*(uint *)(paVar5 + 4) & 0x10000) == 0)) {
        pcVar6 = *(char **)(paVar5 + 0x20);
        pcVar12 = s_;
        if (pcVar6 != (char *)0x0) {
          pcVar12 = pcVar6;
        }
        iVar10 = 0xd;
        bVar17 = true;
        pcVar14 = &s_pwp_mdg_item;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          bVar17 = *pcVar12 == *pcVar14;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        } while (bVar17);
        if (!bVar17) {
          pcVar12 = s_;
          if (pcVar6 != (char *)0x0) {
            pcVar12 = pcVar6;
          }
          iVar10 = 0xd;
          bVar17 = true;
          pcVar14 = s_pwp_mng_item;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar17 = *pcVar12 == *pcVar14;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          } while (bVar17);
          if (!bVar17) {
            pcVar12 = s_;
            if (pcVar6 != (char *)0x0) {
              pcVar12 = pcVar6;
            }
            iVar10 = 0xd;
            bVar17 = true;
            pcVar14 = s_pwp_amg_item;
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar17 = *pcVar12 == *pcVar14;
              pcVar12 = pcVar12 + 1;
              pcVar14 = pcVar14 + 1;
            } while (bVar17);
            if (!bVar17) {
              pcVar12 = s_;
              if (pcVar6 != (char *)0x0) {
                pcVar12 = pcVar6;
              }
              iVar10 = 0xd;
              bVar17 = true;
              pcVar14 = &s_pwp_mdg_ammo;
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar17 = *pcVar12 == *pcVar14;
                pcVar12 = pcVar12 + 1;
                pcVar14 = pcVar14 + 1;
              } while (bVar17);
              if (!bVar17) {
                pcVar12 = s_;
                if (pcVar6 != (char *)0x0) {
                  pcVar12 = pcVar6;
                }
                iVar10 = 0xd;
                bVar17 = true;
                pcVar14 = &s_pwp_mng_ammo;
                do {
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  bVar17 = *pcVar12 == *pcVar14;
                  pcVar12 = pcVar12 + 1;
                  pcVar14 = pcVar14 + 1;
                } while (bVar17);
                if (!bVar17) {
                  if (pcVar6 == (char *)0x0) {
                    pcVar6 = s_;
                  }
                  iVar10 = 0xd;
                  bVar17 = true;
                  pcVar12 = &s_pwp_amg_ammo;
                  do {
                    if (iVar10 == 0) break;
                    iVar10 = iVar10 + -1;
                    bVar17 = *pcVar6 == *pcVar12;
                    pcVar6 = pcVar6 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (bVar17);
                  if (!bVar17) {
                    animINST::MakeCreateData(paVar5,(animCREATE_DATA *)(pcVar13 + -0xd6));
                    pcVar6 = *(char **)(paVar5 + 0x1c);
                    if (pcVar6 == (char *)0x0) {
                      pcVar6 = s_;
                    }
                    pcVar12 = pcVar13 + -0x40;
                    do {
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                      *pcVar12 = cVar2;
                      pcVar12 = pcVar12 + 1;
                    } while (cVar2 != '\0');
                    pcVar6 = *(char **)(paVar5 + 0x20);
                    pcVar12 = pcVar13;
                    if (pcVar6 == (char *)0x0) {
                      pcVar6 = s_;
                    }
                    do {
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                      *pcVar12 = cVar2;
                      pcVar12 = pcVar12 + 1;
                    } while (cVar2 != '\0');
                    local_1c = local_1c + 1;
                    *(undefined4 *)(pcVar13 + 0x40) = *(undefined4 *)(paVar5 + 4);
                    pcVar13 = pcVar13 + 0x11a;
                    *(undefined4 *)(paVar5 + 0x134) = 0;
                  }
                }
              }
            }
          }
        }
      }
      paVar5 = scnSCENE::FindNextInst(gsScenePtr,paVar5);
    } while (paVar5 != (animINST *)0x0);
  }
  iVar10 = local_1c;
  paVar5 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
  while (paVar5 != (animINST *)0x0) {
    if ((*(int *)(paVar5 + 0x13c) == 0) && ((*(uint *)(paVar5 + 4) & 0x10000) == 0)) {
      paVar7 = scnSCENE::FindNextInst(gsScenePtr,paVar5);
      scnSCENE::DestroyInst(gsScenePtr,paVar5);
      paVar5 = paVar7;
    }
    else {
      paVar5 = scnSCENE::FindNextInst(gsScenePtr,paVar5);
    }
  }
  local_18 = 0;
  local_1c = 0;
  if (0 < iVar10) {
    pcVar13 = (char *)((int)puVar3 + 0xd6);
    local_c = puVar3;
    do {
      iVar11 = -1;
      pcVar6 = pcVar13;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (iVar11 == -2) {
        entGetClassTplName(pcVar13 + -0x40,pcVar13);
      }
      paVar8 = (animTPL *)(**(code **)(*(int *)gsSysLevel + 0x24))(pcVar13);
      if (paVar8 == (animTPL *)0x0) {
        apMsg(s_Cannot_load_template__s,pcVar13,pcVar13 + -0x84);
      }
      else {
        paVar5 = scnSCENE::CreateInst(gsScenePtr,paVar8,(animCREATE_DATA *)(pcVar13 + -0xd6),-1);
        if (paVar5 == (animINST *)0x0) {
          return 0;
        }
        *(uint *)(paVar5 + 4) = *(uint *)(paVar5 + 4) | *(uint *)(pcVar13 + 0x40);
        iVar11 = -1;
        pcVar6 = pcVar13 + -0x40;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (iVar11 == -2) {
          paVar8 = paVar8 + 0x44;
          iVar11 = -1;
          paVar15 = paVar8;
          do {
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            aVar1 = *paVar15;
            paVar15 = paVar15 + 1;
          } while (aVar1 != (animTPL)0x0);
          if (iVar11 == -2) {
            pcVar6 = s_dynamic;
            do {
              cVar2 = *pcVar6;
              (pcVar13 + -0x5ed804)[(int)pcVar6] = cVar2;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
          }
          else {
            iVar11 = (int)(pcVar13 + -0x40) - (int)paVar8;
            do {
              aVar1 = *paVar8;
              paVar8[iVar11] = aVar1;
              paVar8 = paVar8 + 1;
            } while (aVar1 != (animTPL)0x0);
          }
        }
        pcVar6 = pcVar13 + -0xd6;
        puVar16 = local_c;
        for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          puVar16 = puVar16 + 1;
        }
        *(undefined2 *)puVar16 = *(undefined2 *)pcVar6;
        *(animINST **)((int)pvVar4 + local_18 * 4) = paVar5;
        local_18 = local_18 + 1;
        local_c = (undefined4 *)((int)local_c + 0x11a);
      }
      pcVar13 = pcVar13 + 0x11a;
      local_1c = local_1c + 1;
    } while (local_1c < iVar10);
  }
  iVar10 = 0;
  if (0 < local_18) {
    pcVar13 = (char *)((int)puVar3 + 0x96);
    do {
      peVar9 = entCreate(pcVar13,*(animINST **)((int)pvVar4 + iVar10 * 4),(void *)0x0,0);
      if (peVar9 == (entENTITY *)0x0) {
        scnSCENE::DestroyInst(gsScenePtr,*(animINST **)((int)pvVar4 + iVar10 * 4));
      }
      iVar10 = iVar10 + 1;
      pcVar13 = pcVar13 + 0x11a;
    } while (iVar10 < local_18);
  }
  apFree(puVar3);
  apFree(pvVar4);
  return 1;
}




/* from: gs:gs_level.cpp
   addr: 00521AC0 */

animTPL * __thiscall gsLVL_SYSTEM::FindTplName(gsLVL_SYSTEM *this,char *param_1)

{
  char cVar1;
  animTPL *this_00;
  int iVar2;
  animTPL *paVar3;
  char *pcVar4;
  animTPL *paVar5;
  bool bVar6;
  
  iVar2 = -1;
  pcVar4 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    this_00 = *(animTPL **)(gsScenePtr + 0x88);
  }
  else {
    this_00 = scnSCENE::FindTplName(gsScenePtr,param_1);
  }
  if (this_00 == (animTPL *)0x0) {
    this_00 = scnSCENE::AllocTpl(gsScenePtr);
    if (this_00 == (animTPL *)0x0) {
      apMsg(s_Cannot_create_template);
      return (animTPL *)0x0;
    }
    iVar2 = LoadTpl(this,param_1,this_00);
    if (iVar2 == 0) {
      scnSCENE::DestroyTpl(gsScenePtr,this_00);
      apMsg(s_Cannot_load_template__s,param_1);
      return (animTPL *)0x0;
    }
  }
  else if (((byte)this_00[0x84] & 0x40) == 0) {
    return this_00;
  }
  animOptimizeSpl(this_00);
  iVar2 = objOBJ::AssignModifiers
                    (*(objOBJ **)(this_00 + 0x88),*(int *)(this_00 + 0xa8),
                     *(objMODIFIER ***)(this_00 + 0xac));
  if (iVar2 == 0) {
    apMsg(s_Error_assigning_object_modifiers);
  }
  objBuildLOD(this_00,*(objOBJ **)(this_00 + 0x88));
  if (*(psSHEET **)(this_00 + 0xc4) != (psSHEET *)0x0) {
    psSHEET::GetStr(*(psSHEET **)(this_00 + 0xc4),s_ANIM_PROP,s_nameClass,(char *)(this_00 + 0x44),
                    0x40);
  }
  iVar2 = scnSCENE::ExpandV3DTmpList(gsScenePtr,*(objOBJ **)(this_00 + 0x88));
  if (iVar2 == 0) {
    return (animTPL *)0x0;
  }
  AddExtraObjMtls(this,*(objOBJ **)(this_00 + 0x88));
  if ((gsAppState & 0x40000U) != 0) {
    txmMANAGER::LoadAll(txmManager,_gsLvlLoadTexErrorCB);
  }
  iVar2 = animTPL::AbvInit(this_00,(abvBVOL *)0x0);
  if (iVar2 == 0) {
    return (animTPL *)0x0;
  }
  iVar2 = 8;
  bVar6 = true;
  paVar3 = this_00 + 4;
  paVar5 = (animTPL *)&s_ai_skel;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *paVar3 == *paVar5;
    paVar3 = paVar3 + 1;
    paVar5 = paVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    SetTplObjFlags(this,*(objOBJ **)(this_00 + 0x88),this_00);
  }
  animAllocNormalsLCS(this_00,*(objOBJ **)(this_00 + 0x88));
  if ((gsSysProjShd != (pshSHADOW_SYSTEM *)0x0) &&
     (iVar2 = pshSHADOW_SYSTEM::InitTemplate(gsSysProjShd,this_00,*(objOBJ **)(this_00 + 0x88)),
     iVar2 == 0)) {
    return (animTPL *)0x0;
  }
  return this_00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_level.cpp
   addr: 00521C80 */

int __thiscall
gsLVL_SYSTEM::ProcessMsg(gsLVL_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if ((DAT_0095ceb4 & 1) == 0) {
    DAT_0095ceb4 = DAT_0095ceb4 | 1;
    DAT_0095cd58._0_1_ = 0;
    DAT_0095cd58._1_1_ = 0x40;
    _DAT_0095cea0 = 0;
    _DAT_0095cea4 = 0;
    _DAT_0095cea8 = 0;
    DAT_0095cd5c = 0;
    DAT_0095ce60 = 0;
    DAT_0095cd58._2_2_ = 0x154;
    atexit((_func_4879 *)&__E14);
  }
  switch(param_1) {
  case 1000:
    (**(code **)(*(int *)this + 0x18))();
    break;
  case 0x3ec:
    puVar5 = &DAT_0095cd58;
                    /* WARNING: Load size is inaccurate */
    for (iVar3 = 0x55; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_2;
      param_2 = (undefined4 *)((int)param_2 + 4);
      puVar5 = puVar5 + 1;
    }
    apMsg(s_GS_MSG_LOAD_LEVEL___s,&DAT_0095cd5c);
    pcVar2 = strchr(&DAT_0095cd5c,0x2e);
    if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(&DAT_0095cd5c,0x5c), pcVar2 == (char *)0x0)) {
      pcVar2 = fnmMakeFullName((char *)(this + 0x2c),&DAT_0095cd5c,s_lg,1);
      pcVar4 = &DAT_0095cd5c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    (**(code **)(*(int *)gsSysRender + 0x24))(gsAppState & 0x10);
    iVar3 = (**(code **)(*(int *)this + 0x1c))(&DAT_0095cd58);
    if (iVar3 != 0) {
      (**(code **)(*(int *)gsSysRender + 0x28))();
    }
    (**(code **)(*(int *)uiSystem + 0x98))(0);
    return 0;
  case 0x3ed:
    gslLoad((char *)param_2,(gslHDR_EX *)0x0);
    return 0;
  case 0x3f1:
    gsElapsedTimeLevel = 0.0;
    return 0;
  case 0x3f2:
    gsAppState = gsAppState | 0x80000;
    return 0;
  case 0x3f4:
    (**(code **)(*(int *)this + 0x10))();
    return 0;
  case 0x3f5:
    (**(code **)(*(int *)this + 0x14))();
    return 0;
  }
  return 0;
}




/* from: gs:gs_level.cpp
   addr: 00521E60 */

int __thiscall gsLVL_SYSTEM::LoadTpl(gsLVL_SYSTEM *this,char *param_1,animTPL *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
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
  pcVar2 = fnmMakeFullName((char *)(this + 0x130),param_1,s_tpl,1);
  pcVar4 = local_104;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = fioFILE_DISK::Init((fioFILE_DISK *)&local_228,local_104,5);
  if (iVar3 == 0) {
    return 0;
  }
  sioSetSourceFile((fioFILE *)&local_228);
  iVar3 = sioReadTemplate(param_2,1);
  if (iVar3 == 0) {
    return 0;
  }
  fioFILE_DISK::Term((fioFILE_DISK *)&local_228);
  strncpy((char *)(param_2 + 4),param_1,0x3f);
  param_2[0x42] = (animTPL)0x0;
  return 1;
}




/* from: gs:gs_level.cpp
   addr: 00521F50 */

int __thiscall gsLVL_SYSTEM::ProcessINIT_LEVEL(gsLVL_SYSTEM *this)

{
  SetExtraLightFlags(this,gsScenePtr);
  pteMANAGER::InitLevel(pteManager,gsScenePtr);
  (**(code **)(*(int *)rendDrv + 0x98))(gsScenePtr);
  (**(code **)(*(int *)gsSysRender + 0xc))();
  scnSCENE::ForAllInst(gsScenePtr,gsLvlInstLoadNotify,(void *)0x0);
  return 1;
}




/* from: gs:gs_level.cpp
   addr: 00521FB0 */

void __fastcall _gsLvlCalcCDT2(scnSCENE *param_1)

{
  int iVar1;
  cdtCOLL *this;
  
  iVar1 = cdtCOLL::CalcTotalMemory(*(cdtCOLL **)(param_1 + 0x50));
  apLog(s_Collision_memory_size_before__d,iVar1);
  if ((*(byte *)(*(int *)(param_1 + 0x50) + 4) & 1) == 0) {
    objOBJ::CalcFaceNormals(*(objOBJ **)(param_1 + 0x44));
    this = (cdtCOLL *)operator_new(0x68);
    if (this == (cdtCOLL *)0x0) {
      this = (cdtCOLL *)0x0;
    }
    else {
      cdtCOLL::cdtCOLL(this);
      *(undefined ***)this = &cdtCOLL_SCN::_vftable_;
    }
    *(scnSCENE **)(this + 100) = param_1;
    iVar1 = *(int *)(param_1 + 0x50);
    cdtCOLL::CalcData2(this,*(float *)(iVar1 + 0x34),*(float *)(iVar1 + 0x38),
                       *(float *)(iVar1 + 0x3c),*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc),
                       *(int *)(iVar1 + 0x10),(m3dBOX *)(iVar1 + 0x14));
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    }
    *(cdtCOLL **)(param_1 + 0x50) = this;
    iVar1 = cdtCOLL::CalcTotalMemory(this);
    apLog(s_Collision_memory_size_after__d,iVar1);
  }
  return;
}

