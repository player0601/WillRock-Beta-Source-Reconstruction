
/* from: gs:gs_vis.cpp
   addr: 00522080 */

int __thiscall gsDOMAIN_VIS::Init(gsDOMAIN_VIS *this)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  animINST *this_00;
  gsDOMAIN *pgVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char acStack_80 [64];
  char acStack_40 [64];
  
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(gsScenePtr + 0x48)) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x20))
                        (*(undefined4 *)(*(int *)(gsScenePtr + 0x4c) + iVar1 * 4));
      if (iVar2 != 0) {
        pvVar3 = apRealloc(*(void **)(this + 0x9c),*(int *)(this + 0x98) * 4 + 4);
        *(void **)(this + 0x9c) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        *(undefined4 *)((int)pvVar3 + *(int *)(this + 0x98) * 4) =
             *(undefined4 *)(*(int *)(gsScenePtr + 0x4c) + iVar1 * 4);
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(gsScenePtr + 0x48));
  }
  for (this_00 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); this_00 != (animINST *)0x0;
      this_00 = scnSCENE::FindNextInst(gsScenePtr,this_00)) {
    if (((byte)this_00[4] & 0x40) != 0) {
      animINST::Validate(this_00,0x200);
      iVar1 = (**(code **)(*(int *)this + 0x24))(*(undefined4 *)(this_00 + 0x10));
      if (iVar1 != 0) {
        pvVar3 = apRealloc(*(void **)(this + 0xa4),*(int *)(this + 0xa0) * 4 + 4);
        *(void **)(this + 0xa4) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        *(animINST **)((int)pvVar3 + *(int *)(this + 0xa0) * 4) = this_00;
        *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
      }
    }
  }
  if (*(int *)(*(int *)(this + 0x34) + 0xf0) != 0) {
    iVar1 = 0;
    while( true ) {
      if (iVar1 == 0) {
        sprintf(acStack_80,s_vis);
      }
      else {
        sprintf(acStack_80,s_vis__d,iVar1);
      }
      iVar2 = psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_DOM_VIS,acStack_80,
                              acStack_40,0x40);
      if (iVar2 == 0) goto LAB_0052223f;
      pgVar4 = gsDOMAIN_LIST::FindDomain(*(gsDOMAIN_LIST **)(this + 0x94),acStack_40);
      if ((pgVar4 == (gsDOMAIN *)0x0) || ((scnDOMAIN *)(pgVar4 + 0x94) == (scnDOMAIN *)0x0)) break;
      iVar2 = gsDOMAIN::AddSubDomain((gsDOMAIN *)(this + -0x94),(scnDOMAIN *)(pgVar4 + 0x94));
      if (iVar2 == 0) goto LAB_0052223f;
      iVar1 = iVar1 + 1;
    }
    apLogErr(s_Vis_domain__s__Vis_subdomain__s_,*(undefined4 *)(*(int *)(this + 0x34) + 0x18),
             acStack_40);
LAB_0052223f:
    iVar1 = 0;
    while( true ) {
      if (iVar1 == 0) {
        sprintf(acStack_80,s_nvis);
      }
      else {
        sprintf(acStack_80,s_nvis__d,iVar1);
      }
      iVar2 = psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_DOM_VIS,acStack_80,
                              acStack_40,0x40);
      if ((((iVar2 == 0) ||
           (pgVar4 = gsDOMAIN_LIST::FindDomain(*(gsDOMAIN_LIST **)(this + 0x94),acStack_40),
           pgVar4 == (gsDOMAIN *)0x0)) || ((scnDOMAIN *)(pgVar4 + 0x94) == (scnDOMAIN *)0x0)) ||
         (iVar2 = gsDOMAIN::AddSubDomain((gsDOMAIN *)(this + -0x94),(scnDOMAIN *)(pgVar4 + 0x94)),
         iVar2 == 0)) break;
      iVar1 = iVar1 + 1;
      *(uint *)(pgVar4 + 0xd0) = *(uint *)(pgVar4 + 0xd0) | 0x100;
    }
  }
  puVar5 = (undefined4 *)operator_new(0xa4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar6 = puVar5 + 1;
    iVar1 = 0x14;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 **)(this + 0xa8) = puVar5;
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)(this + -0x94));
  return 1;
}




/* from: gs:gs_vis.cpp
   addr: 00522320 */

void __thiscall gsDOMAIN_VIS::Term(gsDOMAIN_VIS *this)

{
  gsDOMAIN::Term((gsDOMAIN *)this);
  apFree(*(void **)(this + 0x9c));
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  apFree(*(void **)(this + 0xa4));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  operator_delete(*(void **)(this + 0xa8));
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}




/* from: gs:gs_vis.cpp
   addr: 005223A0 */

void __thiscall gsDOMAIN_VIS::ApplyMPEnablerData(gsDOMAIN_VIS *this,gsDOM_VIS_ENABLER_DATA *param_1)

{
  int *piVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  int iVar4;
  int *piVar5;
  
  peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)param_1,0);
  if (peVar3 == (entIACTIVE_OBJ *)0x0) goto LAB_005223f7;
  piVar1 = *(int **)(this + 0x13c);
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  if (*piVar1 < 1) {
LAB_005223e8:
    piVar1[iVar4 * 2 + 1] = (int)peVar3;
    *piVar1 = *piVar1 + 1;
  }
  else {
    piVar5 = piVar1 + 1;
    do {
      if ((entIACTIVE_OBJ *)*piVar5 == peVar3) goto LAB_005223f1;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar4 < *piVar1);
    if (iVar4 < 0x14) goto LAB_005223e8;
    iVar4 = -1;
  }
LAB_005223f1:
  piVar1[iVar4 * 2 + 2] = iVar2;
LAB_005223f7:
  *(uint *)(*(int *)(this + 0x128) + 0x98) = *(uint *)(*(int *)(this + 0x128) + 0x98) | 0x100;
  return;
}




/* from: gs:gs_vis.cpp
   addr: 00522410 */

int __thiscall
gsDOMAIN_VIS::ProcessMsg(gsDOMAIN_VIS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  entIACTIVE_OBJ *peVar1;
  int iVar2;
  gsDOM_VIS_ENABLER_DATA *pgVar3;
  int iVar4;
  gsVIS_ENABLER *this_00;
  msgDATA local_10 [2];
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if (param_1 == 0x3f8) {
    iVar2 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_ACTIVATE);
    if (iVar2 == 0) {
      iVar2 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_DEACTIVATE);
      if (iVar2 == 0) goto LAB_00522581;
      msgDATA::msgDATA(local_10);
      local_c = 0;
      local_e = 0x10;
      if (param_3 == (msgADDR *)0x0) goto LAB_00522581;
      this_00 = *(gsVIS_ENABLER **)(this + 0x13c);
      iVar2 = gsVIS_ENABLER::FindEnabler(this_00,(entENTITY *)param_3);
      local_4 = *(int *)(this_00 + iVar2 * 8 + 8) + -1;
    }
    else {
      msgDATA::msgDATA(local_10);
      local_c = 0;
      local_e = 0x10;
      if (param_3 == (msgADDR *)0x0) goto LAB_00522581;
      this_00 = *(gsVIS_ENABLER **)(this + 0x13c);
      iVar2 = gsVIS_ENABLER::FindEnabler(this_00,(entENTITY *)param_3);
      local_4 = *(int *)(this_00 + iVar2 * 8 + 8) + 1;
    }
    *(int *)(this_00 + iVar2 * 8 + 8) = local_4;
    local_8 = *(undefined4 *)(*(int *)(this_00 + iVar2 * 8 + 4) + 0x8c);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,local_10,0x20000,0xffffffff,0xfffffffd);
  }
  else {
    if (param_1 != 0x40c) goto LAB_00522581;
    if (*(int *)((int)param_2 + 4) == -100) {
      iVar2 = *(int *)((int)param_2 + 8);
      iVar4 = 0;
      if (0 < *(int *)(iVar2 + 0xa4)) {
        pgVar3 = (gsDOM_VIS_ENABLER_DATA *)(iVar2 + 4);
        do {
          ApplyMPEnablerData(this,pgVar3);
          iVar4 = iVar4 + 1;
          pgVar3 = pgVar3 + 8;
        } while (iVar4 < *(int *)(iVar2 + 0xa4));
      }
      goto LAB_00522581;
    }
    if (*(int *)((int)param_2 + 4) != 0) goto LAB_00522581;
    peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_2 + 8),0);
    if (peVar1 != (entIACTIVE_OBJ *)0x0) {
      gsVIS_ENABLER::SetNEnable
                (*(gsVIS_ENABLER **)(this + 0x13c),(entENTITY *)peVar1,*(int *)((int)param_2 + 0xc))
      ;
    }
  }
  *(uint *)(*(int *)(this + 0x128) + 0x98) = *(uint *)(*(int *)(this + 0x128) + 0x98) | 0x100;
LAB_00522581:
  iVar2 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,param_2,param_3,param_4);
  return iVar2;
}




/* from: gs:gs_vis.cpp
   addr: 005225B0 */

void __thiscall gsDOMAIN_VIS::ProcessMP_GET_SYNC_DATA(gsDOMAIN_VIS *this,void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
                    /* WARNING: Load size is inaccurate */
  puVar4 = *param_1;
  if (puVar4 == (undefined4 *)0x0) {
    if ((DAT_0095cf68 & 1) == 0) {
      DAT_0095cf68 = DAT_0095cf68 | 1;
      DAT_0095cec0._0_1_ = 0;
      DAT_0095cec0._1_1_ = 0x40;
      DAT_0095cf64 = 0;
      DAT_0095cec0._2_2_ = 0xa8;
      atexit((_func_4879 *)&__E11);
    }
    puVar4 = &DAT_0095cec0;
    *(undefined4 **)param_1 = &DAT_0095cec0;
    DAT_0095cf64 = **(undefined4 **)(this + 0x13c);
  }
  iVar3 = 0;
  if (0 < (int)puVar4[0x29]) {
    puVar2 = puVar4 + 1;
    do {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)((int)puVar2 + (*(int *)(this + 0x13c) - (int)puVar4));
      puVar2[1] = piVar1[1];
      *puVar2 = *(undefined4 *)(*piVar1 + 0x8c);
      puVar2 = puVar2 + 2;
    } while (iVar3 < (int)puVar4[0x29]);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs:gs_vis.cpp
   addr: 00522670 */

void __thiscall
gsDOMAIN_VIS::ProcessMP_WRITE_SYNC_DATA(gsDOMAIN_VIS *this,gsMSG_MP_SAVELOAD *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  gsMSG_MP_SAVELOAD *pgVar4;
  int iVar5;
  rendDRIVER *unaff_ESI;
  undefined4 local_1e;
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
  
  pgVar4 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  puVar1 = *(undefined4 **)param_1;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffff;
  uStack_14 = 0xffff;
  iVar5 = 0;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = (gsMSG_MP_SAVELOAD *)puVar1[0x29];
  (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&param_1);
  puVar3 = puVar1;
  if (0 < (int)puVar1[0x29]) {
    do {
      fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0x4d8,(fioCHUNK *)&stack0xffffffd4);
      uStack_8 = (undefined2)puVar3[1];
      local_6 = (undefined2)((uint)puVar3[1] >> 0x10);
      (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&uStack_8,4,1);
      fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&stack0xffffffc8);
      fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0x4d9,(fioCHUNK *)&stack0xffffffc8);
      uVar2 = puVar3[2];
      uStack_14 = (undefined2)uVar2;
      uStack_12 = (undefined2)((uint)uVar2 >> 0x10);
      (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&uStack_14,4,4);
      fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&stack0xffffffd4);
      fioFILE::WriteLastChunk(*(fioFILE **)(pgVar4 + 4));
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar5 < (int)puVar1[0x29]);
  }
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)((int)&local_1e + 2));
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar4 + 4));
  rendDRIVER::ConfigureTransp(unaff_ESI,(camCAMERA *)pgVar4);
  return;
}




/* from: gs:gs_vis.cpp
   addr: 005227A0 */

void __thiscall
gsDOMAIN_VIS::ProcessMP_READ_SYNC_DATA(gsDOMAIN_VIS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short local_bc;
  undefined2 local_ba;
  undefined2 uStack_b8;
  undefined4 local_b6;
  undefined4 local_b2;
  rendDRIVER *local_ac;
  undefined4 local_a8;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)param_1;
  local_bc = 0;
  local_ba = 0xffff;
  uStack_b8 = 0xffff;
  local_b6 = 0xffffffff;
  local_b2 = 0xffffffff;
  local_ac = (rendDRIVER *)this;
  if (puVar4 == (undefined4 *)0x0) {
    if ((DAT_0095cf68 & 1) == 0) {
      DAT_0095cf68 = DAT_0095cf68 | 1;
      DAT_0095cec0._0_1_ = 0;
      DAT_0095cec0._1_1_ = 0x40;
      DAT_0095cf64 = 0;
      DAT_0095cec0._2_2_ = 0xa8;
      atexit((_func_4879 *)&__E11);
    }
    puVar4 = &DAT_0095cec0;
    local_4 = 0;
    local_a8._2_2_ = 0xa8;
    *(undefined4 **)param_1 = &DAT_0095cec0;
    local_a8._0_1_ = 0;
    local_a8._1_1_ = 0x40;
    puVar5 = &local_a8;
    puVar6 = &DAT_0095cec0;
    for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_bc);
  do {
    if ((iVar3 == 0) || (local_bc == 1)) {
      rendDRIVER::ConfigureTransp(local_ac,(camCAMERA *)param_1);
      return;
    }
    if (local_bc == 0xf0) {
      piVar1 = puVar4 + 0x29;
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(piVar1,4,4);
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_bc);
          while ((iVar2 != 0 && (local_bc != 1))) {
            if (local_bc == 0x4d8) {
              iVar2 = iVar3 * 2 + 1;
LAB_005228b9:
              (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + iVar2,4,4);
            }
            else if (local_bc == 0x4d9) {
              iVar2 = iVar3 * 2 + 2;
              goto LAB_005228b9;
            }
            iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_bc);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar1);
      }
    }
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_bc);
  } while( true );
}




/* from: gs:gs_vis.cpp
   addr: 00522910 */

void __thiscall gsDOMAIN_VIS::SetVisInfo(gsDOMAIN_VIS *this,scnSCENE *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 300)) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x130) + iVar2 * 4);
      uVar3 = *(uint *)(iVar1 + 8);
      if (param_2 == 0) {
        uVar3 = uVar3 | 0x20;
      }
      else {
        uVar3 = uVar3 & 0xffffffdf;
      }
      *(uint *)(iVar1 + 8) = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 300));
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x134)) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x138) + iVar2 * 4);
      if ((iVar1 != 0) && (uVar3 = *(uint *)(iVar1 + 4), (uVar3 & 0x1000) == 0)) {
        if (param_2 == 0) {
          uVar3 = uVar3 | 2;
        }
        else {
          uVar3 = uVar3 & 0xfffffffd;
        }
        *(uint *)(iVar1 + 4) = uVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x134));
  }
  return;
}




/* from: gs:gs_vis.cpp
   addr: 00522990 */

int __thiscall gsVIS_SYSTEM::Init(gsVIS_SYSTEM *this)

{
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24535953,0x56);
  return 1;
}




/* from: gs:gs_vis.cpp
   addr: 005229B0 */

int __thiscall gsVIS_SYSTEM::IsAddObj(gsVIS_SYSTEM *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_vis);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs:gs_vis.cpp
   addr: 005229D0 */

void __thiscall gsVIS_SYSTEM::SetViewPos(gsVIS_SYSTEM *this,m3dV *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  gsVIS_SYSTEM *pgVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_4;
  
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 8);
  gsDOMAIN_LIST::Update((gsDOMAIN_LIST *)this);
  iVar5 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar7 = this + 0xa0;
    do {
      iVar2 = *(int *)pgVar7;
      pgVar7 = pgVar7 + 4;
      iVar5 = iVar5 + 1;
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffff9ff;
    } while (iVar5 < *(int *)(this + 0x9c));
  }
  local_4 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar7 = this + 0xa0;
    do {
      iVar5 = *(int *)pgVar7;
      iVar2 = gsVIS_ENABLER::CalcNEnable(*(gsVIS_ENABLER **)(iVar5 + 0x13c));
      if ((0 < iVar2) || ((*(byte *)(iVar5 + 0xd0) & 1) != 0)) {
        iVar2 = 0;
        *(uint *)(*(int *)pgVar7 + 0xd0) = *(uint *)(*(int *)pgVar7 + 0xd0) | 0x200;
        if (0 < *(int *)(*(int *)pgVar7 + 0xd4)) {
          iVar9 = 0xd8;
          do {
            if (*(int *)(iVar9 + iVar5) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(iVar9 + iVar5) + -0x94;
            }
            iVar8 = 0;
            piVar1 = *(int **)(iVar5 + 0x13c);
            iVar6 = *piVar1;
            if (0 < iVar6) {
              do {
                if ((*(byte *)(*(int *)(piVar1[1] + 0xbc) + 4) & 2) == 0) {
                  iVar8 = iVar8 + piVar1[2];
                }
                iVar6 = iVar6 + -1;
                piVar1 = piVar1 + 2;
              } while (iVar6 != 0);
            }
            uVar3 = *(uint *)(iVar4 + 0xd0) & 0x100;
            if (((uVar3 == 0) && (-1 < iVar8)) || ((uVar3 != 0 && (iVar8 < 0)))) {
              if (*(int *)(iVar9 + *(int *)pgVar7) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(iVar9 + *(int *)pgVar7) + -0x94;
              }
              *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 0x200;
            }
            iVar2 = iVar2 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar2 < *(int *)(*(int *)pgVar7 + 0xd4));
        }
        local_c = 0;
        if (0 < *(int *)(*(int *)pgVar7 + 0xd4)) {
          iVar2 = 0xd8;
          do {
            if (*(int *)(iVar2 + iVar5) == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(iVar2 + iVar5) + -0x94;
            }
            iVar6 = 0;
            piVar1 = *(int **)(iVar5 + 0x13c);
            iVar4 = *piVar1;
            if (0 < iVar4) {
              do {
                if ((*(byte *)(*(int *)(piVar1[1] + 0xbc) + 4) & 2) == 0) {
                  iVar6 = iVar6 + piVar1[2];
                }
                iVar4 = iVar4 + -1;
                piVar1 = piVar1 + 2;
              } while (iVar4 != 0);
            }
            uVar3 = *(uint *)(iVar9 + 0xd0) & 0x100;
            if (((uVar3 == 0) && (iVar6 < 0)) || ((uVar3 != 0 && (-1 < iVar6)))) {
              if (*(int *)(iVar2 + *(int *)pgVar7) == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(iVar2 + *(int *)pgVar7) + -0x94;
              }
              *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 0x400;
            }
            local_c = local_c + 1;
            iVar2 = iVar2 + 4;
          } while (local_c < *(int *)(*(int *)pgVar7 + 0xd4));
        }
      }
      local_4 = local_4 + 1;
      pgVar7 = pgVar7 + 4;
    } while (local_4 < *(int *)(this + 0x9c));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_vis.cpp
   addr: 00522C20 */

void __thiscall gsVIS_SYSTEM::SetVisInfo(gsVIS_SYSTEM *this,scnSCENE *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  bool bVar3;
  unkbyte10 Var4;
  animINST *paVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  gsVIS_SYSTEM *pgVar9;
  objOBJ *poVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  float fVar14;
  undefined1 auVar15 [16];
  float local_8;
  
  if (*(int *)(this + 0x9c) != 0) {
    uVar7 = *(uint *)(this + 0x98);
    *(uint *)(this + 0x98) = uVar7 & 0xfffffdff;
    if (((uVar7 & 4) != 0) || (bVar2 = false, (uVar7 & 0x1100) != 0)) {
      bVar2 = true;
    }
    if (((uVar7 & 4) == 0) && ((uVar7 & 0x100) == 0)) {
      uVar7 = *(uint *)(this + 0x98) & 0xffffefff;
    }
    else {
      uVar7 = *(uint *)(this + 0x98) | 0x1000;
    }
    *(uint *)(this + 0x98) = uVar7;
    paVar5 = scnSCENE::FindNextInst(param_1,(animINST *)0x0);
    Var4 = extraout_ST1;
    while (paVar5 != (animINST *)0x0) {
      if (((*(uint *)(paVar5 + 4) & 0x1000) == 0) && ((*(uint *)(paVar5 + 4) & 0x40) == 0)) {
        if (bVar2) {
LAB_00522d95:
          iVar8 = 0;
          if (0 < *(int *)(this + 0x9c)) {
            pgVar9 = this + 0xa0;
            do {
              *(uint *)(*(int *)pgVar9 + 0xd0) = *(uint *)(*(int *)pgVar9 + 0xd0) & 0xfffff7ff;
              if (((*(uint *)(*(int *)pgVar9 + 0xd0) & 0x600) != 0) &&
                 (iVar6 = (**(code **)(*(int *)(*(int *)pgVar9 + 0x94) + 0x28))(paVar5), iVar6 != 0)
                 ) {
                *(uint *)(*(int *)pgVar9 + 0xd0) = *(uint *)(*(int *)pgVar9 + 0xd0) | 0x800;
              }
              iVar8 = iVar8 + 1;
              pgVar9 = pgVar9 + 4;
            } while (iVar8 < *(int *)(this + 0x9c));
          }
          *(uint *)(paVar5 + 4) = *(uint *)(paVar5 + 4) | 2;
          iVar8 = 0;
          if (0 < *(int *)(this + 0x9c)) {
            pgVar9 = this + 0xa0;
            do {
              if (((*(uint *)(*(int *)pgVar9 + 0xd0) & 0x200) != 0) &&
                 ((*(uint *)(*(int *)pgVar9 + 0xd0) & 0x800) != 0)) {
                *(uint *)(paVar5 + 4) = *(uint *)(paVar5 + 4) & 0xfffffffd;
              }
              iVar8 = iVar8 + 1;
              pgVar9 = pgVar9 + 4;
            } while (iVar8 < *(int *)(this + 0x9c));
          }
          iVar8 = 0;
          if (0 < *(int *)(this + 0x9c)) {
            pgVar9 = this + 0xa0;
            do {
              if (((*(uint *)(*(int *)pgVar9 + 0xd0) & 0x400) != 0) &&
                 ((*(uint *)(*(int *)pgVar9 + 0xd0) & 0x800) != 0)) {
                *(uint *)(paVar5 + 4) = *(uint *)(paVar5 + 4) | 2;
              }
              iVar8 = iVar8 + 1;
              pgVar9 = pgVar9 + 4;
            } while (iVar8 < *(int *)(this + 0x9c));
          }
        }
        else {
          iVar8 = *(int *)(paVar5 + 0x13c);
          if (iVar8 != 0) {
            local_8 = *(float *)(iVar8 + 0xe0) * *(float *)(iVar8 + 0xe0) +
                      *(float *)(iVar8 + 0xe8) * *(float *)(iVar8 + 0xe8);
            if (m3dSimdType == 0) {
              local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar15 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
              fVar14 = auVar15._0_4_;
              local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar14 * fVar14) *
                        local_8;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar11 = (ulonglong)(uint)local_8;
              uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var4,uVar11);
              uVar13 = PackedFloatingMUL(uVar12,uVar12);
              uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
              uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
              uVar12 = PackedFloatingMUL(uVar12,uVar11);
              local_8 = (float)uVar12;
              FastExitMediaState();
            }
            else {
              local_8 = SQRT(local_8);
            }
            if (_DAT_005dd00c * ___real_447a0000 <= local_8) goto LAB_00522d95;
          }
        }
      }
      paVar5 = scnSCENE::FindNextInst(param_1,paVar5);
      Var4 = extraout_ST1_00;
    }
    if (bVar2) {
      uVar7 = *(uint *)(this + 0x98);
      *(uint *)(this + 0x98) = uVar7 & 0xfffffeff;
      iVar8 = 0;
      *(uint *)(this + 0x98) = uVar7 & 0xfffffeff | 0x200;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + iVar8 * 4);
          uVar7 = *(uint *)(iVar6 + 8);
          if ((uVar7 & 0x20000) == 0) {
            if (*(int *)(iVar6 + 0x14) < 1) {
              uVar7 = uVar7 & 0xffffffdf;
            }
            else {
              uVar7 = uVar7 | 0x20;
            }
            *(uint *)(iVar6 + 8) = uVar7;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x48));
      }
      for (paVar5 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar5 != (animINST *)0x0;
          paVar5 = scnSCENE::FindNextInst(param_1,paVar5)) {
        uVar7 = *(uint *)(paVar5 + 4);
        if (((uVar7 & 0x1000) == 0) && ((uVar7 & 0x40) != 0)) {
          *(uint *)(paVar5 + 4) = uVar7 | 2;
        }
      }
      iVar8 = 0;
      if (0 < *(int *)(this + 0x9c)) {
        pgVar9 = this + 0xa0;
        do {
          if ((*(uint *)(*(gsDOMAIN_VIS **)pgVar9 + 0xd0) & 0x200) != 0) {
            gsDOMAIN_VIS::SetVisInfo(*(gsDOMAIN_VIS **)pgVar9,param_1,1);
          }
          iVar8 = iVar8 + 1;
          pgVar9 = pgVar9 + 4;
        } while (iVar8 < *(int *)(this + 0x9c));
      }
      iVar8 = 0;
      if (0 < *(int *)(this + 0x9c)) {
        pgVar9 = this + 0xa0;
        do {
          if ((*(uint *)(*(gsDOMAIN_VIS **)pgVar9 + 0xd0) & 0x400) != 0) {
            gsDOMAIN_VIS::SetVisInfo(*(gsDOMAIN_VIS **)pgVar9,param_1,0);
          }
          iVar8 = iVar8 + 1;
          pgVar9 = pgVar9 + 4;
        } while (iVar8 < *(int *)(this + 0x9c));
      }
      iVar8 = *(int *)(param_1 + 0x44);
      if (*(int *)(iVar8 + 0x38) != 0) {
        bVar2 = true;
        bVar3 = false;
        poVar1 = *(objOBJ **)(iVar8 + 0x38);
        for (poVar10 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (poVar10 != poVar1))));
            poVar10 = *(objOBJ **)(poVar10 + 0x30)) {
          iVar6 = _gsVisPropagateVisInfo(poVar10);
          if (iVar6 == 0) {
            bVar2 = false;
          }
          bVar3 = true;
        }
        if (*(int *)(iVar8 + 0x10) == 0) {
          if (bVar2) {
            *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x20;
            return;
          }
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xffffffdf;
        }
      }
    }
  }
  return;
}




/* from: gs:gs_vis.cpp
   addr: 00523000 */

int __thiscall gsVIS_SYSTEM::IsVisible(gsVIS_SYSTEM *this,objOBJ *param_1)

{
  animINST *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  gsVIS_SYSTEM *pgVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_28;
  int local_24;
  undefined **local_20;
  undefined4 local_1c;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  iVar2 = *(int *)(this + 0x9c);
  if (iVar2 == 0) {
    return 1;
  }
  this_00 = *(animINST **)(param_1 + 0xbc);
  if ((this_00 != (animINST *)0x0) && (((byte)this_00[4] & 0x40) == 0)) {
    animINST::GetBBox(this_00,(m3dBOX *)&local_20);
    iVar2 = (**(code **)(*(int *)this + 0x90))(&local_20);
    return iVar2;
  }
  local_28 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  pgVar4 = this + 0xa0;
  local_24 = iVar2;
LAB_00523082:
  iVar1 = *(int *)pgVar4;
  if ((*(uint *)(iVar1 + 0xd0) & 0x200) != 0) {
    iVar3 = 0;
    if (this_00 == (animINST *)0x0) {
      if (0 < *(int *)(iVar1 + 300)) {
        piVar6 = *(int **)(iVar1 + 0x130);
        do {
          if ((objOBJ *)*piVar6 == param_1) goto LAB_005230dd;
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar3 < *(int *)(iVar1 + 300));
      }
    }
    else if (0 < *(int *)(iVar1 + 0x134)) {
      puVar5 = *(undefined4 **)(iVar1 + 0x138);
      do {
        if ((animINST *)*puVar5 == this_00) goto LAB_005230dd;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x134));
    }
  }
  goto LAB_005230e5;
LAB_005230dd:
  local_28 = 1;
LAB_005230e5:
  pgVar4 = pgVar4 + 4;
  local_24 = local_24 + -1;
  if (local_24 == 0) goto code_r0x005230f3;
  goto LAB_00523082;
code_r0x005230f3:
  if (iVar2 < 1) {
    return local_28;
  }
  pgVar4 = this + 0xa0;
LAB_00523102:
  iVar1 = *(int *)pgVar4;
  if ((*(uint *)(iVar1 + 0xd0) & 0x400) != 0) {
    iVar3 = 0;
    if (this_00 == (animINST *)0x0) {
      if (0 < *(int *)(iVar1 + 300)) {
        piVar6 = *(int **)(iVar1 + 0x130);
        do {
          if ((objOBJ *)*piVar6 == param_1) goto LAB_0052315a;
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar3 < *(int *)(iVar1 + 300));
      }
    }
    else if (0 < *(int *)(iVar1 + 0x134)) {
      puVar5 = *(undefined4 **)(iVar1 + 0x138);
      do {
        if ((animINST *)*puVar5 == this_00) goto LAB_0052315a;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x134));
    }
  }
  goto LAB_00523162;
LAB_0052315a:
  local_28 = 0;
LAB_00523162:
  pgVar4 = pgVar4 + 4;
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    return local_28;
  }
  goto LAB_00523102;
}




/* from: gs:gs_vis.cpp
   addr: 00523180 */

int __thiscall gsVIS_SYSTEM::IsVisible(gsVIS_SYSTEM *this,m3dV *param_1)

{
  int iVar1;
  int iVar2;
  gsVIS_SYSTEM *pgVar3;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)(this + 0x9c) == 0) {
    return 1;
  }
  local_4 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar3 = this + 0xa0;
    do {
      if ((*(uint *)(*(int *)pgVar3 + 0xd0) & 0x200) != 0) {
        iVar1 = (**(code **)(*(int *)(*(int *)pgVar3 + 0x94) + 0xc))(param_1);
        if (iVar1 != 0) {
          local_4 = 1;
        }
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x9c));
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar3 = this + 0xa0;
    do {
      if ((*(uint *)(*(int *)pgVar3 + 0xd0) & 0x400) != 0) {
        iVar1 = (**(code **)(*(int *)(*(int *)pgVar3 + 0x94) + 0xc))(param_1);
        if (iVar1 != 0) {
          local_4 = 0;
        }
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x9c));
  }
  return local_4;
}




/* from: gs:gs_vis.cpp
   addr: 00523240 */

int __thiscall gsVIS_SYSTEM::IsVisible(gsVIS_SYSTEM *this,m3dBOX *param_1)

{
  int iVar1;
  int iVar2;
  gsVIS_SYSTEM *pgVar3;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)(this + 0x9c) == 0) {
    return 1;
  }
  local_4 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar3 = this + 0xa0;
    do {
      if ((*(uint *)(*(int *)pgVar3 + 0xd0) & 0x200) != 0) {
        iVar1 = (**(code **)(*(int *)(*(int *)pgVar3 + 0x94) + 0x1c))(param_1);
        if (iVar1 != 0) {
          local_4 = 1;
        }
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x9c));
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar3 = this + 0xa0;
    do {
      if ((*(uint *)(*(int *)pgVar3 + 0xd0) & 0x400) != 0) {
        iVar1 = (**(code **)(*(int *)(*(int *)pgVar3 + 0x94) + 0x1c))(param_1);
        if (iVar1 != 0) {
          local_4 = 0;
        }
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x9c));
  }
  return local_4;
}




/* from: gs:gs_vis.cpp
   addr: 00523300 */

int __thiscall gsVIS_SYSTEM::IsVisible(gsVIS_SYSTEM *this,m3dV *param_1,m3dV *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  gsVIS_SYSTEM *pgVar7;
  int iVar8;
  int local_14;
  int *local_c;
  gsVIS_SYSTEM *local_8;
  int local_4;
  
  if (*(int *)(this + 0x9c) != 0) {
    iVar5 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      pgVar7 = this + 0xa0;
      do {
        iVar2 = *(int *)pgVar7;
        pgVar7 = pgVar7 + 4;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xffff9fff;
      } while (iVar5 < *(int *)(this + 0x9c));
    }
    local_4 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      local_8 = this + 0xa0;
      do {
        iVar5 = *(int *)local_8;
        iVar2 = gsVIS_ENABLER::CalcNEnable(*(gsVIS_ENABLER **)(iVar5 + 0x13c));
        if ((0 < iVar2) ||
           (iVar2 = (**(code **)(*(int *)(iVar5 + 0x94) + 0xc))(param_1), iVar2 != 0)) {
          local_14 = 0;
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 0x2000;
          if (0 < *(int *)(iVar5 + 0xd4)) {
            local_c = (int *)(iVar5 + 0xd8);
            do {
              iVar2 = *local_c;
              if (iVar2 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = iVar2 + -0x94;
              }
              piVar1 = *(int **)(iVar5 + 0x13c);
              iVar8 = 0;
              iVar6 = *piVar1;
              if (0 < iVar6) {
                do {
                  if ((*(byte *)(*(int *)(piVar1[1] + 0xbc) + 4) & 2) == 0) {
                    iVar8 = iVar8 + piVar1[2];
                  }
                  iVar6 = iVar6 + -1;
                  piVar1 = piVar1 + 2;
                } while (iVar6 != 0);
              }
              uVar3 = *(uint *)(iVar4 + 0xd0) & 0x100;
              if (((uVar3 == 0) && (-1 < iVar8)) || ((uVar3 != 0 && (iVar8 < 0)))) {
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = iVar2 + -0x94;
                }
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x2000;
              }
              local_14 = local_14 + 1;
              local_c = local_c + 1;
            } while (local_14 < *(int *)(iVar5 + 0xd4));
          }
          local_14 = 0;
          if (0 < *(int *)(iVar5 + 0xd4)) {
            local_c = (int *)(iVar5 + 0xd8);
            do {
              iVar2 = *local_c;
              if (iVar2 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = iVar2 + -0x94;
              }
              piVar1 = *(int **)(iVar5 + 0x13c);
              iVar8 = 0;
              iVar6 = *piVar1;
              if (0 < iVar6) {
                do {
                  if ((*(byte *)(*(int *)(piVar1[1] + 0xbc) + 4) & 2) == 0) {
                    iVar8 = iVar8 + piVar1[2];
                  }
                  iVar6 = iVar6 + -1;
                  piVar1 = piVar1 + 2;
                } while (iVar6 != 0);
              }
              uVar3 = *(uint *)(iVar4 + 0xd0) & 0x100;
              if (((uVar3 == 0) && (iVar8 < 0)) || ((uVar3 != 0 && (-1 < iVar8)))) {
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = iVar2 + -0x94;
                }
                *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x4000;
              }
              local_14 = local_14 + 1;
              local_c = local_c + 1;
            } while (local_14 < *(int *)(iVar5 + 0xd4));
          }
        }
        local_4 = local_4 + 1;
        local_8 = local_8 + 4;
      } while (local_4 < *(int *)(this + 0x9c));
    }
    iVar5 = 0;
    iVar2 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      pgVar7 = this + 0xa0;
      do {
        if (((*(uint *)(*(int *)pgVar7 + 0xd0) & 0x2000) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)pgVar7 + 0x94) + 0xc))(param_2), iVar4 != 0)) {
          iVar5 = 1;
        }
        iVar2 = iVar2 + 1;
        pgVar7 = pgVar7 + 4;
      } while (iVar2 < *(int *)(this + 0x9c));
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      pgVar7 = this + 0xa0;
      do {
        if (((*(uint *)(*(int *)pgVar7 + 0xd0) & 0x4000) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)pgVar7 + 0x94) + 0xc))(param_2), iVar4 != 0)) {
          iVar5 = 0;
        }
        iVar2 = iVar2 + 1;
        pgVar7 = pgVar7 + 4;
      } while (iVar2 < *(int *)(this + 0x9c));
    }
    return iVar5;
  }
  return 1;
}




/* from: gs:gs_vis.cpp
   addr: 005235F0 */

int __fastcall _gsVisPropagateVisInfo(objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  objOBJ *poVar5;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return *(uint *)(param_1 + 8) & 0x20;
  }
  bVar2 = true;
  bVar3 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar5 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (poVar5 != poVar1))));
      poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
    iVar4 = _gsVisPropagateVisInfo(poVar5);
    if (iVar4 == 0) {
      bVar2 = false;
    }
    bVar3 = true;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (!bVar2) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf;
      return 0;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
  }
  if ((bVar2) && (((byte)param_1[8] & 0x20) != 0)) {
    return 1;
  }
  return 0;
}




/* from: gs:gs_vis.cpp
   addr: 00523670 */

int __thiscall gsVIS_ENABLER::FindEnabler(gsVIS_ENABLER *this,entENTITY *param_1)

{
  int iVar1;
  gsVIS_ENABLER *pgVar2;
  
  iVar1 = 0;
  if (0 < *(int *)this) {
    pgVar2 = this + 4;
    do {
      if (*(entENTITY **)pgVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 8;
    } while (iVar1 < *(int *)this);
    if (0x13 < iVar1) {
      return -1;
    }
  }
  *(entENTITY **)(this + iVar1 * 8 + 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return iVar1;
}




/* from: gs:gs_vis.cpp
   addr: 005236B0 */

void __thiscall gsVIS_ENABLER::SetNEnable(gsVIS_ENABLER *this,entENTITY *param_1,int param_2)

{
  int iVar1;
  gsVIS_ENABLER *pgVar2;
  
  iVar1 = 0;
  if (0 < *(int *)this) {
    pgVar2 = this + 4;
    do {
      if (*(entENTITY **)pgVar2 == param_1) goto LAB_005236eb;
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 8;
    } while (iVar1 < *(int *)this);
    if (0x13 < iVar1) {
      *(int *)this = param_2;
      return;
    }
  }
  *(entENTITY **)(this + iVar1 * 8 + 4) = param_1;
  *(int *)this = *(int *)this + 1;
LAB_005236eb:
  *(int *)(this + iVar1 * 8 + 8) = param_2;
  return;
}




/* from: gs:gs_vis.cpp
   addr: 00523700 */

int __thiscall gsVIS_ENABLER::CalcNEnable(gsVIS_ENABLER *this)

{
  int iVar1;
  gsVIS_ENABLER *pgVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  iVar1 = 0;
  if (0 < iVar3) {
    pgVar2 = this + 8;
    do {
      if ((*(byte *)(*(int *)(*(int *)(pgVar2 + -4) + 0xbc) + 4) & 2) == 0) {
        iVar1 = iVar1 + *(int *)pgVar2;
      }
      pgVar2 = pgVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

