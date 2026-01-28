
/* from: gs:gs_domain.cpp
   addr: 00512570 */

gsDOMAIN * __thiscall gsDOMAIN::gsDOMAIN(gsDOMAIN *this)

{
  entIACTIVE_OBJ::entIACTIVE_OBJ((entIACTIVE_OBJ *)this);
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 1;
  *(undefined ***)(this + 0xa4) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined ***)(this + 0x94) = &scnDOMAIN::_vftable_;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined ***)this = &_vftable__for__entIACTIVE_OBJ__;
  *(undefined ***)(this + 0x94) = &_vftable__for__scnDOMAIN__;
  *(undefined4 *)(this + 0x14) = 0x24444f4d;
  *(undefined4 *)(this + 0x1c) = 0x53;
  return this;
}




/* from: gs:gs_domain.cpp
   addr: 005125F0
   addr: 005125F0 */

void * __thiscall gsDOMAIN::_vector_deleting_destructor_(gsDOMAIN *this,uint param_1)

{
  *(undefined ***)(this + 0x94) = &_vftable__for__scnDOMAIN__;
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




/* from: gs:gs_domain.cpp
   addr: 00512640 */

void __thiscall gsDOMAIN::~gsDOMAIN(gsDOMAIN *this)

{
  *(undefined ***)(this + 0x94) = &_vftable__for__scnDOMAIN__;
  *(undefined ***)(this + 0x94) = &scnDOMAIN::_vftable_;
  *(undefined ***)(this + 0xa4) = &m3dVOL::_vftable_;
  *(undefined ***)this = &entIACTIVE_OBJ::_vftable_;
  entIACTIVE_OBJ::TermIActive((entIACTIVE_OBJ *)this);
  msgADDR::~msgADDR((msgADDR *)this);
  return;
}




/* from: gs:gs_domain.cpp
   addr: 00512680 */

int __thiscall gsDOMAIN::Init(gsDOMAIN *this)

{
  gsDOMAIN *pgVar1;
  int iVar2;
  int iVar3;
  int iStack_dc;
  int iStack_d8;
  char acStack_d4 [64];
  char acStack_94 [64];
  objOBJ *apoStack_54 [21];
  
  if (((byte)this[0x3c] & 2) == 0) {
    iVar2 = scnDOMAIN::Init((scnDOMAIN *)this);
    if (iVar2 == 0) {
      return 0;
    }
    pgVar1 = this + 0x34;
    (**(code **)(*(int *)(this + -0x94) + 0x20))(*(undefined4 *)(*(int *)(this + 0x34) + 0xf0));
    iStack_dc = 0;
    if (*(psSHEET **)(*(objOBJ **)pgVar1 + 0xf0) != (psSHEET *)0x0) {
      psSHEET::GetFloat(*(psSHEET **)(*(objOBJ **)pgVar1 + 0xf0),s_DOMAIN,s_height,
                        (float *)&stack0xffffff20);
      psSHEET::GetBool(*(psSHEET **)(*(objOBJ **)pgVar1 + 0xf0),s_DOMAIN,s_isExactIncl,&iStack_dc);
    }
    scnDOMAIN::SetHeight((scnDOMAIN *)this,0.0);
    *(int *)(this + 0x38) = iStack_dc;
    iStack_d8 = objMakePtrList((objOBJ **)pgVar1,1,apoStack_54,0x14);
    iVar2 = 1;
    if (1 < iStack_d8) {
      do {
        iVar3 = (**(code **)(**(int **)(this + 0x94) + 0x40))(this + -0x94,apoStack_54[iVar2]);
        if ((iVar3 == 0) || (0x12 < *(int *)(this + 0x40))) break;
        *(int *)(this + *(int *)(this + 0x40) * 4 + 0x44) = iVar3;
        iVar2 = iVar2 + 1;
        *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      } while (iVar2 < iStack_d8);
    }
    if (*(int *)(*(objOBJ **)pgVar1 + 0xf0) != 0) {
      sprintf(acStack_d4,s_subDom_d,1);
      iVar2 = psSHEET::GetStr(*(psSHEET **)(*(objOBJ **)pgVar1 + 0xf0),s_DOMAIN,acStack_d4,
                              acStack_94,0x40);
      if (iVar2 != 0) {
        iVar2 = 1;
        do {
          iVar3 = (**(code **)(**(int **)(this + 0x94) + 0x3c))(this + -0x94,acStack_94);
          if ((iVar3 == 0) || (0x12 < *(int *)(this + 0x40))) break;
          *(int *)(this + *(int *)(this + 0x40) * 4 + 0x44) = iVar3;
          iVar2 = iVar2 + 1;
          *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
          sprintf(acStack_d4,s_subDom_d,iVar2);
          iVar3 = psSHEET::GetStr(*(psSHEET **)(*(objOBJ **)pgVar1 + 0xf0),s_DOMAIN,acStack_d4,
                                  acStack_94,0x40);
        } while (iVar3 != 0);
      }
    }
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 2;
  }
  return 1;
}




/* from: gs:gs_domain.cpp
   addr: 00512860 */

void __thiscall gsDOMAIN::Term(gsDOMAIN *this)

{
  scnDOMAIN::Term((scnDOMAIN *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  return;
}




/* from: gs:gs_domain.cpp
   addr: 00512880 */

int __thiscall gsDOMAIN::AddSubDomain(gsDOMAIN *this,scnDOMAIN *param_1)

{
  if (0x12 < *(int *)(this + 0xd4)) {
    return 0;
  }
  *(scnDOMAIN **)(this + *(int *)(this + 0xd4) * 4 + 0xd8) = param_1;
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
  return 1;
}




/* from: gs:gs_domain.cpp
   addr: 005128B0 */

int __thiscall
gsDOMAIN::ProcessMsg(gsDOMAIN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 == 1) {
    (**(code **)(*(int *)(this + 0x94) + 4))();
  }
  return 0;
}




/* from: gs:gs_domain.cpp
   addr: 005128D0 */

gsDOMAIN_LIST * __thiscall gsDOMAIN_LIST::gsDOMAIN_LIST(gsDOMAIN_LIST *this)

{
  entIACTIVE_OBJ::entIACTIVE_OBJ((entIACTIVE_OBJ *)this);
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = 0x24444f4c;
  *(undefined4 *)(this + 0x1c) = 0x52;
  return this;
}




/* from: gs:gs_domain.cpp
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910
   addr: 00512910 */

void * __thiscall entENTITY::_scalar_deleting_destructor_(entENTITY *this,uint param_1)

{
  *(undefined ***)this = &entIACTIVE_OBJ::_vftable_;
  entIACTIVE_OBJ::TermIActive((entIACTIVE_OBJ *)this);
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_domain.cpp
   addr: 00512940 */

int __thiscall gsDOMAIN_LIST::ProcessINIT_LEVEL(gsDOMAIN_LIST *this)

{
  int iVar1;
  gsDOMAIN_LIST *pgVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar2 = this + 0xa0;
    do {
      iVar1 = (**(code **)(*(int *)(*(int *)pgVar2 + 0x94) + 4))();
      if (iVar1 == 0) {
        apLogErr(s_Cannot_initialize_domain__s,
                 *(undefined4 *)(*(int *)(*(int *)pgVar2 + 200) + 0x18));
      }
      iVar3 = iVar3 + 1;
      pgVar2 = pgVar2 + 4;
    } while (iVar3 < *(int *)(this + 0x9c));
  }
  return 1;
}




/* from: gs:gs_domain.cpp
   addr: 005129A0 */

void __thiscall gsDOMAIN_LIST::ProcessTERM_LEVEL(gsDOMAIN_LIST *this)

{
  int iVar1;
  gsDOMAIN_LIST *pgVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar2 = this + 0xa0;
    do {
      (**(code **)(*(int *)(*(int *)pgVar2 + 0x94) + 8))();
      msgSYSTEM::DestroyAddr(&msgSystem,*(msgADDR **)pgVar2);
      *(int *)pgVar2 = 0;
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x9c));
  }
  iVar1 = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  if (0 < *(int *)(this + 0x230)) {
    pgVar2 = this + 0x234;
    do {
      (**(code **)(**(int **)pgVar2 + 8))();
      (**(code **)(*(int *)this + 100))(*(undefined4 *)pgVar2);
      *(undefined4 *)pgVar2 = 0;
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x230));
  }
  *(undefined4 *)(this + 0x230) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_domain.cpp
   addr: 00512A50 */

int __thiscall gsDOMAIN_LIST::GetUpdatePoint(gsDOMAIN_LIST *this,int param_1,m3dV *param_2)

{
  entENTITY *peVar1;
  
  peVar1 = gsMP_SERVER::GetPlayer(gsSysServer,param_1);
  if (peVar1 == (entENTITY *)0x0) {
    return 0;
  }
  animINST::GetPos(*(animINST **)(peVar1 + 0xbc),param_2);
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + ___real_3fcccccd;
  return 1;
}




/* from: gs:gs_domain.cpp
   addr: 00512A90 */

void __thiscall gsDOMAIN_LIST::Update(gsDOMAIN_LIST *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  gsDOMAIN_LIST *pgVar6;
  int iStack_14;
  undefined1 auStack_c [12];
  
  iVar3 = (**(code **)(*(int *)this + 0x50))();
  *(uint *)(this + 0x98) = *(uint *)(this + 0x98) & 0xfffffffb;
  bVar2 = false;
  iStack_14 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar6 = this + 0xa0;
    do {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = (**(code **)(*(int *)this + 0x54))(iVar5,auStack_c);
          if (iVar4 != 0) {
            iVar4 = (**(code **)(*(int *)(*(int *)pgVar6 + 0x94) + 0xc))(auStack_c);
            if (iVar4 != 0) {
              iVar5 = *(int *)pgVar6;
              if ((*(byte *)(iVar5 + 0xd0) & 1) == 0) {
                *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
                (**(code **)(**(int **)pgVar6 + 0x40))();
                *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 4;
              }
              bVar2 = true;
              goto LAB_00512b36;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar5 = *(int *)pgVar6;
      if ((*(byte *)(iVar5 + 0xd0) & 1) != 0) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        (**(code **)(**(int **)pgVar6 + 0x44))();
        *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 4;
      }
LAB_00512b36:
      *(undefined4 *)(this + 0x94) = 0;
      if (0 < iVar3) {
        do {
          iVar5 = (**(code **)(*(int *)this + 0x54))(*(undefined4 *)(this + 0x94),auStack_c);
          if (iVar5 != 0) {
            (**(code **)(**(int **)pgVar6 + 0x3c))(auStack_c);
          }
          iVar5 = *(int *)(this + 0x94);
          *(int *)(this + 0x94) = iVar5 + 1;
        } while (iVar5 + 1 < iVar3);
      }
      iStack_14 = iStack_14 + 1;
      pgVar6 = pgVar6 + 4;
      *(undefined4 *)(this + 0x94) = 0xffffffff;
    } while (iStack_14 < *(int *)(this + 0x9c));
    if (bVar2) {
      if (((byte)this[0x98] & 1) == 0) {
        (**(code **)(*(int *)this + 0x48))();
      }
      uVar1 = *(uint *)(this + 0x98);
      *(uint *)(this + 0x98) = uVar1 & 0xfffffffd;
      *(uint *)(this + 0x98) = uVar1 & 0xfffffffd | 1;
      return;
    }
  }
  if (((byte)this[0x98] & 2) == 0) {
    (**(code **)(*(int *)this + 0x4c))();
  }
  uVar1 = *(uint *)(this + 0x98);
  *(uint *)(this + 0x98) = uVar1 & 0xfffffffe;
  *(uint *)(this + 0x98) = uVar1 & 0xfffffffe | 2;
  return;
}




/* from: gs:gs_domain.cpp
   addr: 00512C50 */

gsDOMAIN * __thiscall gsDOMAIN_LIST::FindDomain(gsDOMAIN_LIST *this,char *param_1)

{
  int iVar1;
  int iVar2;
  gsDOMAIN_LIST *pgVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar3 = this + 0xa0;
    do {
      iVar1 = stricmp(*(char **)(*(int *)(*(int *)pgVar3 + 200) + 0x18),param_1);
      if (iVar1 == 0) {
        return *(gsDOMAIN **)(this + iVar2 * 4 + 0xa0);
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x9c));
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs:gs_domain.cpp
   addr: 00512CB0 */

scnDOMAIN * __thiscall
gsDOMAIN_LIST::AddSubDomain(gsDOMAIN_LIST *this,gsDOMAIN *param_1,char *param_2)

{
  objOBJ *poVar1;
  scnDOMAIN *psVar2;
  
  poVar1 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),param_2);
  if (poVar1 == (objOBJ *)0x0) {
    return (scnDOMAIN *)0x0;
  }
  psVar2 = (scnDOMAIN *)(**(code **)(*(int *)this + 0x40))(param_1,poVar1);
  return psVar2;
}




/* from: gs:gs_domain.cpp
   addr: 00512CE0 */

scnDOMAIN * __thiscall
gsDOMAIN_LIST::AddSubDomain(gsDOMAIN_LIST *this,gsDOMAIN *param_1,objOBJ *param_2)

{
  float fVar1;
  float fVar2;
  scnDOMAIN *psVar3;
  objOBJ *poVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  gsDOMAIN_LIST *pgVar8;
  
  poVar4 = param_2;
  iVar7 = 0;
  if (0 < *(int *)(this + 0x230)) {
    pgVar8 = this + 0x234;
    do {
      iVar5 = stricmp(*(char **)(*(int *)(*(int *)pgVar8 + 0x34) + 0x18),*(char **)(poVar4 + 0x18));
      if (iVar5 == 0) {
        return *(scnDOMAIN **)(this + iVar7 * 4 + 0x234);
      }
      iVar7 = iVar7 + 1;
      pgVar8 = pgVar8 + 4;
    } while (iVar7 < *(int *)(this + 0x230));
  }
  if (0x62 < *(int *)(this + 0x230)) {
    return (scnDOMAIN *)0x0;
  }
  uVar6 = (**(code **)(*(int *)this + 0x60))(param_1);
  *(undefined4 *)(this + *(int *)(this + 0x230) * 4 + 0x234) = uVar6;
  psVar3 = *(scnDOMAIN **)(this + *(int *)(this + 0x230) * 4 + 0x234);
  if (psVar3 == (scnDOMAIN *)0x0) {
    return psVar3;
  }
  *(objOBJ **)(psVar3 + 0x34) = poVar4;
  iVar7 = (**(code **)(**(int **)(this + *(int *)(this + 0x230) * 4 + 0x234) + 4))();
  if (iVar7 == 0) {
    return (scnDOMAIN *)0x0;
  }
  fVar1 = *(float *)(*(int *)(this + *(int *)(this + 0x230) * 4 + 0x234) + 0xc);
  fVar2 = *(float *)(*(int *)(this + *(int *)(this + 0x230) * 4 + 0x234) + 8);
  param_1 = (gsDOMAIN *)0x0;
  if (*(psSHEET **)(poVar4 + 0xf0) != (psSHEET *)0x0) {
    psSHEET::GetFloat(*(psSHEET **)(poVar4 + 0xf0),s_DOMAIN,s_height,(float *)&stack0xfffffff8);
    psSHEET::GetBool(*(psSHEET **)(poVar4 + 0xf0),s_DOMAIN,s_isExactIncl,(int *)&param_1);
  }
  *(gsDOMAIN **)(*(int *)(this + *(int *)(this + 0x230) * 4 + 0x234) + 0x38) = param_1;
  scnDOMAIN::SetHeight(*(scnDOMAIN **)(this + *(int *)(this + 0x230) * 4 + 0x234),fVar1 - fVar2);
  iVar7 = *(int *)(this + 0x230);
  *(int *)(this + 0x230) = iVar7 + 1;
  return *(scnDOMAIN **)(this + (iVar7 + 1) * 4 + 0x230);
}




/* from: gs:gs_domain.cpp
   addr: 00512E40 */

int __thiscall gsDOMAIN_LIST::FindDomNmb(gsDOMAIN_LIST *this,gsDOMAIN *param_1)

{
  int iVar1;
  gsDOMAIN_LIST *pgVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x9c)) {
    pgVar2 = this + 0xa0;
    do {
      if (*(gsDOMAIN **)pgVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pgVar2 = pgVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x9c));
  }
  return -1;
}




/* from: gs:gs_domain.cpp
   addr: 00512E70 */

int __thiscall gsDOMAIN_LIST::Collect(gsDOMAIN_LIST *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  objOBJ *poVar5;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar3 = (**(code **)(*(int *)this + 0x58))(param_1), iVar3 != 0)) {
    if (99 < *(int *)(this + 0x9c)) {
      return 1;
    }
    uVar4 = (**(code **)(*(int *)this + 0x5c))();
    *(undefined4 *)(this + *(int *)(this + 0x9c) * 4 + 0xa0) = uVar4;
    if (*(int *)(this + *(int *)(this + 0x9c) * 4 + 0xa0) == 0) {
      return 0;
    }
    *(objOBJ **)(*(int *)(this + *(int *)(this + 0x9c) * 4 + 0xa0) + 200) = param_1;
    *(gsDOMAIN_LIST **)(*(int *)(this + *(int *)(this + 0x9c) * 4 + 0xa0) + 0x128) = this;
    apNAME::SetName((apNAME *)(*(int *)(this + *(int *)(this + 0x9c) * 4 + 0xa0) + 0x44),
                    *(char **)(param_1 + 0x18));
    msgSYSTEM::InsertAddr(&msgSystem,*(msgADDR **)(this + *(int *)(this + 0x9c) * 4 + 0xa0),0,0);
    *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar5 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
      poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
    iVar3 = Collect(this,poVar5);
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* from: gs:gs_domain.cpp
   addr: 00512F80 */

void __thiscall gsDOMAIN_LIST::ProcessLEVEL_LOADED(gsDOMAIN_LIST *this)

{
  if (*(objOBJ **)(gsScenePtr + 0x44) != (objOBJ *)0x0) {
    Collect(this,*(objOBJ **)(gsScenePtr + 0x44));
  }
  return;
}




/* from: gs:gs_domain.cpp
   addr: 00512FA0 */

int __thiscall
gsDOMAIN_LIST::ProcessMsg
          (gsDOMAIN_LIST *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 < 0x3f5) {
    if (param_1 == 0x3f4) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x44))();
      return 0;
    }
  }
  else if (param_1 == 0x3f5) {
    (**(code **)(*(int *)this + 0x70))();
  }
  else if (param_1 == 0x3f6) {
    (**(code **)(*(int *)this + 0x68))();
    return 0;
  }
  return 0;
}

