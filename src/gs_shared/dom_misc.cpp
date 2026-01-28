
/* from: gs_shared:dom_misc.cpp
   addr: 00544B60 */

int __fastcall domMiscInit(void)

{
  gsDOMAIN_LIST *pgVar1;
  
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 == (gsDOMAIN_LIST *)0x0) {
    domTptList = (domTPT_DOMAIN_LIST *)0x0;
    return 0;
  }
  gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
  *(undefined ***)pgVar1 = &domTPT_DOMAIN_LIST::_vftable_;
  domTptList = (domTPT_DOMAIN_LIST *)pgVar1;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x56,0);
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 == (gsDOMAIN_LIST *)0x0) {
    domActList = (domACT_DOMAIN_LIST *)0x0;
    return 0;
  }
  gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
  *(undefined ***)pgVar1 = &domACT_DOMAIN_LIST::_vftable_;
  domActList = (domACT_DOMAIN_LIST *)pgVar1;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x56,0);
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 == (gsDOMAIN_LIST *)0x0) {
    domClnList = (domCLN_DOMAIN_LIST *)0x0;
    return 0;
  }
  gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
  *(undefined ***)pgVar1 = &domCLN_DOMAIN_LIST::_vftable_;
  domClnList = (domCLN_DOMAIN_LIST *)pgVar1;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x56,0);
  pgVar1 = (gsDOMAIN_LIST *)operator_new(0x3c4);
  if (pgVar1 != (gsDOMAIN_LIST *)0x0) {
    gsDOMAIN_LIST::gsDOMAIN_LIST(pgVar1);
    *(undefined ***)pgVar1 = &domKILL_DOMAIN_LIST::_vftable_;
    domKillList = (domKILL_DOMAIN_LIST *)pgVar1;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)pgVar1,0x56,0);
    return 1;
  }
  domKillList = (domKILL_DOMAIN_LIST *)0x0;
  return 0;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544C70 */

void __fastcall domMiscTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)domTptList);
  domTptList = (domTPT_DOMAIN_LIST *)0x0;
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)domActList);
  domActList = (domACT_DOMAIN_LIST *)0x0;
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)domClnList);
  domClnList = (domCLN_DOMAIN_LIST *)0x0;
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)domKillList);
  domKillList = (domKILL_DOMAIN_LIST *)0x0;
  return;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544CD0 */

int __thiscall domACT_DOMAIN_LIST::IsAddObj(domACT_DOMAIN_LIST *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_act);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544CF0 */

int __thiscall domACT_DOMAIN::Init(domACT_DOMAIN *this)

{
  int iVar1;
  
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)(this + -0x94));
  return 1;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544D20 */

void __thiscall domACT_DOMAIN::Enter(domACT_DOMAIN *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd0);
  if ((((uVar1 & 1) != 0) &&
      ((((uVar1 & 0x200) == 0 || ((uVar1 & 0x400) == 0)) && (*(int *)(this + 0x30) < 1)))) &&
     ((uVar1 & 0x100) != 0)) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x400;
  }
  return;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544D60 */

void __thiscall domACT_DOMAIN::Leave(domACT_DOMAIN *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd0);
  if (((((uVar1 & 0x200) == 0) || ((uVar1 & 0x400) == 0)) && (*(int *)(this + 0x30) < 1)) &&
     ((uVar1 & 0x100) != 0)) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x400;
  }
  return;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544DB0 */

int __thiscall
domACT_DOMAIN::ProcessMsg
          (domACT_DOMAIN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = param_2;
  iVar3 = param_1;
  if (param_1 != 0x3f4) {
    if (param_1 == 0x3f8) {
      this_00 = (apNAME *)((int)param_2 + 8);
      iVar2 = apNAME::IsName(this_00,s_ACTIVATE);
      if (iVar2 == 0) {
        iVar2 = apNAME::IsName(this_00,s_DEACTIVATE);
        if (iVar2 != 0) {
          *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) & 0xfffffeff;
          (**(code **)(*(int *)this + 0x44))();
        }
      }
      else {
        *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x100;
        (**(code **)(*(int *)this + 0x40))();
      }
    }
    else if (param_1 == 0x40c) {
      (**(code **)(*(int *)this + 0x48))(param_2);
    }
    goto LAB_00544eb9;
  }
  param_2 = (void *)0x1;
  param_1 = 1;
  if (*(psSHEET **)(*(int *)(this + 200) + 0xf0) == (psSHEET *)0x0) {
LAB_00544e93:
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x100;
  }
  else {
    psSHEET::GetBool(*(psSHEET **)(*(int *)(this + 200) + 0xf0),s_DOM_ACTION,s_isActive,&param_1);
    psSHEET::GetBool(*(psSHEET **)(*(int *)(this + 200) + 0xf0),s_DOM_ACTION,s_isActOnce,
                     (int *)&param_2);
    if (param_1 != 0) goto LAB_00544e93;
  }
  if (param_2 != (void *)0x0) {
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) | 0x200;
  }
LAB_00544eb9:
  iVar3 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,iVar3,pvVar1,param_3,param_4);
  return iVar3;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00544EE0 */

void __thiscall domACT_DOMAIN::ProcessMP_NOTIFY(domACT_DOMAIN *this,gsEVENT *param_1)

{
  if (*(int *)(param_1 + 4) == -100) {
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dom_misc.cpp
   addr: 00544F00 */

void __thiscall domACT_DOMAIN::ProcessMP_GET_SYNC_DATA(domACT_DOMAIN *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_00963454 & 1) == 0) {
      DAT_00963454 = DAT_00963454 | 1;
      DAT_00963458 = 0;
      DAT_00963459 = 0x40;
      DAT_0096345c = 0;
      _DAT_0096345a = 8;
      atexit((_func_4879 *)&__E12);
    }
    puVar1 = &DAT_00963458;
    *(undefined1 **)param_1 = &DAT_00963458;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0xd0);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dom_misc.cpp
   addr: 00544F70 */

void __thiscall
domACT_DOMAIN::ProcessMP_READ_SYNC_DATA(domACT_DOMAIN *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  short local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  puVar2 = *(undefined **)param_1;
  local_10 = 0;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_00963454 & 1) == 0) {
      DAT_00963454 = DAT_00963454 | 1;
      DAT_0096345c = 0;
      _DAT_00963458 = 0x84000;
      atexit((_func_4879 *)&__E12);
    }
    puVar2 = &DAT_00963458;
    *(undefined **)param_1 = &DAT_00963458;
    _DAT_00963458 = 0x84000;
    DAT_0096345c = 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  while ((iVar1 != 0 && (local_10 != 1))) {
    if (local_10 == 0xf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 4,4,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545070 */

int __thiscall domCLN_DOMAIN_LIST::IsAddObj(domCLN_DOMAIN_LIST *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_clean);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545090 */

int __thiscall
domCLN_DOMAIN::ProcessMsg
          (domCLN_DOMAIN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  entENTITY *peVar2;
  m3dV local_c [12];
  
  if ((param_1 == 0x3f8) &&
     (iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_CLEAN), iVar1 != 0)) {
    for (peVar2 = entFindNext((entENTITY *)0x0); peVar2 != (entENTITY *)0x0;
        peVar2 = entFindNext(peVar2)) {
      if ((*(int *)(peVar2 + 0x14) == 0x244e5043) || (*(int *)(peVar2 + 0x14) == 0x2449544d)) {
        animINST::GetPos(*(animINST **)(peVar2 + 0xbc),local_c);
        (**(code **)(*(int *)(this + 0x94) + 0xc))(local_c);
      }
    }
  }
  iVar1 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545130 */

int __thiscall domTPT_DOMAIN_LIST::IsAddObj(domTPT_DOMAIN_LIST *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_tpt);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545150 */

int __thiscall domTPT_DOMAIN::Init(domTPT_DOMAIN *this)

{
  psSHEET *this_00;
  int iVar1;
  psSECT *ppVar2;
  animINST *paVar3;
  domTPT_DOMAIN *pdVar4;
  domTPT_DOMAIN *local_4;
  
  local_4 = this;
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  this_00 = *(psSHEET **)(*(int *)(this + 0x34) + 0xf0);
  if (this_00 != (psSHEET *)0x0) {
    ppVar2 = psSHEET::FindSect(this_00,s_TELEPORT);
    if (ppVar2 != (psSECT *)0x0) {
      psSHEET::GetInt(this_00,s_TELEPORT,s_nmbLocks,(int *)(this + -100));
      pdVar4 = this + 0xd8;
      psSHEET::GetStr(this_00,s_TELEPORT,s_anchor,(char *)pdVar4,0x40);
      iVar1 = psSHEET::GetStr(this_00,s_TELEPORT,s_sceneName,(char *)(this + 0x98),0x40);
      if (iVar1 == 0) {
        paVar3 = scnSCENE::FindInstName(gsScenePtr,(char *)pdVar4);
        if (paVar3 == (animINST *)0x0) {
          apMsg(s_Cannot_find_anchor_instance__s,pdVar4);
        }
        else {
          paVar3 = paVar3 + 0x60;
          pdVar4 = this + 0x118;
          for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined4 *)pdVar4 = *(undefined4 *)paVar3;
            paVar3 = paVar3 + 4;
            pdVar4 = pdVar4 + 4;
          }
          *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x400;
        }
      }
      else {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x800;
      }
      iVar1 = psSHEET::GetBool(this_00,s_TELEPORT,s_isLevelComplete,(int *)&local_4);
      if ((iVar1 != 0) && (local_4 != (domTPT_DOMAIN *)0x0)) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x2000;
      }
      iVar1 = psSHEET::GetBool(this_00,s_TELEPORT,s_isDelayed,(int *)&local_4);
      if ((iVar1 != 0) && (local_4 != (domTPT_DOMAIN *)0x0)) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x8000;
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dom_misc.cpp
   addr: 00545290 */

void __thiscall domTPT_DOMAIN::Update(domTPT_DOMAIN *this,m3dV *param_1)

{
  domTPT_DOMAIN dVar1;
  uint uVar2;
  undefined4 uVar3;
  domTPT_DOMAIN *pdVar4;
  entENTITY *peVar5;
  int iVar6;
  undefined4 *puVar7;
  m3dV local_58 [4];
  float local_54;
  msgDATA mStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined4 auStack_44 [16];
  undefined4 uStack_4;
  
  if ((DAT_00963464 & 1) == 0) {
    DAT_00963464 = DAT_00963464 | 1;
    DAT_00963478 = 0;
    DAT_00963479 = 0x40;
    _DAT_009635c0 = 0;
    _DAT_009635c4 = 0;
    _DAT_009635c8 = (domTPT_DOMAIN *)0x0;
    DAT_0096347c = 0;
    DAT_00963580 = 0;
    _DAT_0096347a = 0x154;
    atexit((_func_4879 *)&__E14);
  }
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x30) < 1)) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x10;
    uVar2 = *(uint *)(this + 0xd0);
    if ((uVar2 & 0x800) == 0) {
      if ((uVar2 & 0x400) != 0) {
        for (peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
            peVar5 != (entENTITY *)0x0; peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar5)) {
          animINST::GetPos(*(animINST **)(peVar5 + 0xbc),local_58);
          local_54 = local_54 + ___real_3f333333;
          iVar6 = (**(code **)(*(int *)(this + 0x94) + 0xc))(local_58);
          if (iVar6 != 0) {
            uVar3 = *(undefined4 *)(this + 0xd0);
            uStack_48 = 0;
            uStack_4 = 0;
            mStack_4c = (msgDATA)0x0;
            uStack_4b = 0x40;
            uStack_4a = 0x4c;
            pdVar4 = this + 0x1ac;
            puVar7 = auStack_44;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar7 = *(undefined4 *)pdVar4;
              pdVar4 = pdVar4 + 4;
              puVar7 = puVar7 + 1;
            }
            if ((char)((uint)uVar3 >> 8) < '\0') {
              uStack_4 = 1;
            }
            gsMP_SERVER::SendMsgClient(gsSysServer,peVar5,0x40c,&mStack_4c,0x20000);
          }
        }
      }
    }
    else if ((uVar2 & 1) != 0) {
      pdVar4 = this + 300;
      iVar6 = (int)&DAT_0096347c - (int)pdVar4;
      do {
        dVar1 = *pdVar4;
        pdVar4[iVar6] = dVar1;
        pdVar4 = pdVar4 + 1;
      } while (dVar1 != (domTPT_DOMAIN)0x0);
      pdVar4 = this + 0x16c;
      iVar6 = (int)&DAT_00963580 - (int)pdVar4;
      do {
        dVar1 = *pdVar4;
        pdVar4[iVar6] = dVar1;
        pdVar4 = pdVar4 + 1;
      } while (dVar1 != (domTPT_DOMAIN)0x0);
      if ((*(uint *)(this + 0xd0) & 0x2000) == 0) {
        if (*(int *)(this + 0xd4) < 1) {
          _DAT_009635c8 = this + 0x94;
          _DAT_009635c4 = 0;
        }
        else {
          _DAT_009635c8 = *(domTPT_DOMAIN **)(this + 0xd8);
          _DAT_009635c4 = 0;
        }
      }
      else {
        _DAT_009635c4 = 1;
        if ((gsAppState & 0x80000U) != 0) {
          _DAT_009635c0 = 0;
          _DAT_009635c4 = 1;
          return;
        }
      }
      _DAT_009635c0 = 0;
      msgSYSTEM::SendAll(&msgSystem,0x4c9,&DAT_00963478,(msgADDR *)0x0);
      return;
    }
  }
  return;
}




/* from: gs_shared:dom_misc.cpp
   addr: 005454E0 */

int __thiscall domKILL_DOMAIN_LIST::IsAddObj(domKILL_DOMAIN_LIST *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_kill);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545500 */

int __thiscall domKILL_DOMAIN::Init(domKILL_DOMAIN *this)

{
  int iVar1;
  int local_8;
  float local_4;
  
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(psSHEET **)(*(int *)(this + 0x34) + 0xf0) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetFloat(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_DOMAIN,s_height,&local_4
                             );
    if (iVar1 != 0) goto LAB_00545545;
  }
  scnDOMAIN::SetHeight((scnDOMAIN *)this,1.0);
LAB_00545545:
  if (*(psSHEET **)(*(int *)(this + 0x34) + 0xf0) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetBool(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_DOM_KILL,s_isNoPlr,
                             &local_8);
    if ((iVar1 != 0) && (local_8 != 0)) {
      *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x100;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dom_misc.cpp
   addr: 00545590 */

int __thiscall
domKILL_DOMAIN::ProcessMsg
          (domKILL_DOMAIN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  msgADDR *pmVar1;
  int iVar2;
  int iVar3;
  entENTITY *peVar4;
  int iVar5;
  undefined **local_338;
  undefined4 local_334;
  undefined4 local_330;
  m3dV local_32c [12];
  scnAOBJ local_320 [800];
  
  local_334 = 0;
  local_330 = 0;
  local_338 = &cdtREFINE::_vftable_;
  if (((param_1 == 1000) && (((byte)this[0x88] & 4) != 0)) && (*(int *)(this + 0x30) < 1)) {
    iVar2 = scnSCENE::MakeAnimList
                      (gsScenePtr,(m3dBOX *)(this + 0xa4),(cdtREFINE *)&local_338,local_320,100);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        pmVar1 = *(msgADDR **)(*(int *)(local_320 + iVar5 * 8) + 0x13c);
        if ((*(int *)(pmVar1 + 0x14) == 0x244e5043) && ((*(uint *)(pmVar1 + 1099) & 0x200000) == 0))
        {
          animINST::GetPos(*(animINST **)(pmVar1 + 0xbc),local_32c);
          iVar3 = (**(code **)(*(int *)(this + 0x94) + 0xc))(local_32c);
          if (iVar3 != 0) {
            if ((DAT_0096346c & 1) == 0) {
              DAT_0096346c = DAT_0096346c | 1;
              DAT_009635cc = 0;
              DAT_009635cd = 0x40;
              _DAT_009635d0 = 4;
              _DAT_009635ce = 0x10;
              atexit((_func_4879 *)&__E16);
            }
            _DAT_009635d4 = 0x461c4000;
            msgSYSTEM::SendMsg(&msgSystem,pmVar1,0x4c5,&DAT_009635cc,(msgADDR *)0x0);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (((*(uint *)(this + 0xd0) & 0x100) == 0) &&
       (peVar4 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0),
       peVar4 != (entENTITY *)0x0)) {
      do {
        animINST::GetPos(*(animINST **)((msgADDR *)peVar4 + 0xbc),local_32c);
        iVar2 = (**(code **)(*(int *)(this + 0x94) + 0xc))(local_32c);
        if (iVar2 != 0) {
          if ((DAT_0096346c & 1) == 0) {
            DAT_0096346c = DAT_0096346c | 1;
            DAT_009635cc = 0;
            DAT_009635cd = 0x40;
            _DAT_009635d0 = 4;
            _DAT_009635ce = 0x10;
            atexit((_func_4879 *)&__E16);
          }
          _DAT_009635d4 = 0x461c4000;
          msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar4,0x4c5,&DAT_009635cc,(msgADDR *)0x0);
        }
        peVar4 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar4);
      } while (peVar4 != (entENTITY *)0x0);
    }
  }
  iVar2 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,param_2,param_3,param_4);
  return iVar2;
}




/* from: gs_shared:dom_misc.cpp
   addr: 005457E0 */

gsDOMAIN * __thiscall domACT_DOMAIN_LIST::MakeDomain(domACT_DOMAIN_LIST *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(300);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined ***)this_00 = &domACT_DOMAIN::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &domACT_DOMAIN::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545820 */

gsDOMAIN * __thiscall domCLN_DOMAIN_LIST::MakeDomain(domCLN_DOMAIN_LIST *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(300);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined ***)this_00 = &domCLN_DOMAIN::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &domCLN_DOMAIN::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs_shared:dom_misc.cpp
   addr: 00545860 */

gsDOMAIN * __thiscall domKILL_DOMAIN_LIST::MakeDomain(domKILL_DOMAIN_LIST *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(300);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined ***)this_00 = &domKILL_DOMAIN::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &domKILL_DOMAIN::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs_shared:dom_misc.cpp
   addr: 005458A0 */

gsDOMAIN * __thiscall domTPT_DOMAIN_LIST::MakeDomain(domTPT_DOMAIN_LIST *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(0x1f0);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    this_00[300] = (gsDOMAIN)0x0;
    this_00[0x16c] = (gsDOMAIN)0x0;
    *(undefined ***)this_00 = &domTPT_DOMAIN::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &domTPT_DOMAIN::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}

