
/* from: gs_shared:aia_arena.cpp
   addr: 00538C60 */

int __fastcall aiaArenaInit(void)

{
  gsDOMAIN_LIST *this;
  
  this = (gsDOMAIN_LIST *)operator_new(0x3c8);
  if (this != (gsDOMAIN_LIST *)0x0) {
    gsDOMAIN_LIST::gsDOMAIN_LIST(this);
    *(undefined ***)this = &aiaDOMAIN_LIST_ARENA::_vftable_;
    aiaArenaDomList = (aiaDOMAIN_LIST_ARENA *)this;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24535953,0x52);
    return 1;
  }
  aiaArenaDomList = (aiaDOMAIN_LIST_ARENA *)0x0;
  return 0;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00538CB0 */

void __fastcall aiaArenaTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)aiaArenaDomList);
  aiaArenaDomList = (aiaDOMAIN_LIST_ARENA *)0x0;
  return;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00538CD0 */

int __thiscall aiaDOMAIN_LIST_ARENA::IsAddObj(aiaDOMAIN_LIST_ARENA *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_arena);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs_shared:aia_arena.cpp
   addr: 00538D00 */

void __thiscall
aiaDOMAIN_LIST_ARENA::AssignArena(aiaDOMAIN_LIST_ARENA *this,aiDOMAIN_SPAWN *param_1)

{
  byte *pbVar1;
  float fVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  aiaDOMAIN_LIST_ARENA *paVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_20 [3];
  byte *local_14;
  undefined8 *local_10;
  float *local_c;
  aiaDOMAIN_LIST_ARENA *local_8;
  
  local_8 = this;
  if (*(int *)(this + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
    return;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xd8) + -0x94;
  }
  pbVar3 = *(byte **)(iVar5 + 200);
  if ((*pbVar3 & 1) == 0) {
    pbVar1 = pbVar3 + 0x3c;
    local_c = local_20;
    puVar4 = *(undefined8 **)(*(int *)(pbVar3 + 0x28) + 0x40);
    local_10 = puVar4;
    local_14 = pbVar1;
    if (m3dSimdType != 0) {
      if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar12 = (undefined4)*puVar4;
        uVar15 = CONCAT44(uVar12,uVar12);
        uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
        uVar18 = CONCAT44(uVar12,uVar12);
        uVar19 = CONCAT44(*(undefined4 *)(puVar4 + 1),*(undefined4 *)(puVar4 + 1));
        uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)pbVar1);
        uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar3 + 0x4c));
        uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar3 + 0x5c));
        uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(pbVar3 + 0x6c));
        uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(pbVar3 + 0x44));
        uVar15 = PackedFloatingADD(uVar14,uVar16);
        uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar3 + 0x54));
        uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar3 + 100));
        uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(pbVar3 + 0x74));
        uVar15 = PackedFloatingADD(uVar13,uVar15);
        uVar13 = PackedFloatingADD(uVar14,uVar19);
        local_20[1] = (float)((ulonglong)uVar15 >> 0x20);
        local_20[0] = (float)uVar15;
        uVar15 = PackedFloatingADD(uVar18,uVar13);
        local_20[2] = (float)uVar15;
        FastExitMediaState();
      }
      else {
        iVar5 = 0;
        local_14 = pbVar1 + -(int)local_20;
        pfVar10 = local_20;
        do {
          pbVar3 = local_14;
          iVar6 = 0;
          *pfVar10 = 0.0;
          pfVar9 = (float *)(pbVar3 + (int)pfVar10);
          do {
            iVar8 = iVar6 * 4;
            fVar2 = *pfVar9;
            iVar6 = iVar6 + 1;
            pfVar9 = pfVar9 + 4;
            *pfVar10 = *(float *)((int)puVar4 + iVar8) * fVar2 + *pfVar10;
          } while (iVar6 < 3);
          iVar6 = iVar5 + iVar6 * 4;
          iVar5 = iVar5 + 1;
          *pfVar10 = *(float *)(pbVar1 + iVar6 * 4) + *pfVar10;
          pfVar10 = pfVar10 + 1;
        } while (iVar5 < 3);
      }
    }
  }
  else {
    pfVar10 = *(float **)(*(int *)(pbVar3 + 0x28) + 0x40);
    local_20[0] = *pfVar10;
    local_20[1] = pfVar10[1];
    local_20[2] = pfVar10[2];
  }
  iVar5 = 0;
  if (0 < *(int *)(local_8 + 0x9c)) {
    paVar11 = local_8 + 0xa0;
    do {
      iVar6 = (**(code **)(*(int *)(*(int *)paVar11 + 0x94) + 0xc))(local_20);
      if (iVar6 != 0) break;
      iVar5 = iVar5 + 1;
      paVar11 = paVar11 + 4;
    } while (iVar5 < *(int *)(local_8 + 0x9c));
  }
  if (*(int *)(local_8 + 0x9c) <= iVar5) {
    *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
    return;
  }
  *(int *)(param_1 + 0x1d8) = iVar5;
  iVar6 = *(int *)(*(int *)(local_8 + iVar5 * 4 + 0xa0) + 0x4eac);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
    return;
  }
  iVar6 = iVar6 + -1;
  iVar7 = 0;
  iVar8 = iVar6;
  if (0 < iVar6) {
    pfVar10 = (float *)(*(int *)(local_8 + iVar5 * 4 + 0xa0) + 0x10ac);
    do {
      iVar8 = iVar7;
      if (local_20[1] < *pfVar10) break;
      iVar7 = iVar7 + 1;
      pfVar10 = pfVar10 + 0x3e0;
      iVar8 = iVar6;
    } while (iVar7 < iVar6);
  }
  *(int *)(param_1 + 0x1dc) = iVar8;
  return;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00538FC0 */

int __thiscall aiaDOMAIN_LIST_ARENA::GetPlrStageNmb(aiaDOMAIN_LIST_ARENA *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_c [3];
  
  (**(code **)(*(int *)plgsPlayer + 0x68))(local_c);
  if (*(int *)(this + 0x3c4) == -1) {
    return -1;
  }
  iVar1 = *(int *)(*(int *)(this + *(int *)(this + 0x3c4) * 4 + 0xa0) + 0x4eac);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = iVar1 + -1;
  iVar2 = 0;
  if (0 < iVar1) {
    pfVar3 = (float *)(*(int *)(this + *(int *)(this + 0x3c4) * 4 + 0xa0) + 0x10ac);
    do {
      if (local_c[0] < *pfVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x3e0;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00539040 */

int __thiscall aiaDOMAIN_LIST_ARENA::GetNPCStageNmb(aiaDOMAIN_LIST_ARENA *this,aiNPC *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  m3dV local_c [4];
  float local_8;
  
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),local_c);
  if (*(int *)(this + 0x3c4) == -1) {
    return -1;
  }
  iVar1 = *(int *)(*(int *)(this + *(int *)(this + 0x3c4) * 4 + 0xa0) + 0x4eac);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = iVar1 + -1;
  iVar2 = 0;
  if (0 < iVar1) {
    pfVar3 = (float *)(*(int *)(this + *(int *)(this + 0x3c4) * 4 + 0xa0) + 0x10ac);
    do {
      if (local_8 < *pfVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x3e0;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}




/* from: gs_shared:aia_arena.cpp
   addr: 005390D0 */

void __thiscall aiaDOMAIN_ARENA::Enter(aiaDOMAIN_ARENA *this)

{
  int iVar1;
  
  iVar1 = gsDOMAIN_LIST::FindDomNmb(*(gsDOMAIN_LIST **)(this + 0x128),(gsDOMAIN *)this);
  *(int *)(aiaArenaDomList + 0x3c4) = iVar1;
  return;
}




/* from: gs_shared:aia_arena.cpp
   addr: 005390F0 */

void __thiscall aiaDOMAIN_ARENA::Leave(aiaDOMAIN_ARENA *this)

{
  *(undefined4 *)(aiaArenaDomList + 0x3c4) = 0xffffffff;
  return;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00539100 */

int __thiscall aiaDOMAIN_ARENA::Init(aiaDOMAIN_ARENA *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  psSECT *ppVar4;
  objOBJ *poVar5;
  int iVar6;
  char local_80 [64];
  char local_40 [64];
  
  iVar3 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(this + 0x34) + 0xf0) != 0) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      sprintf(local_80,s_STAGE__d,iVar3);
      ppVar4 = psSHEET::FindSect(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),local_80);
      if (ppVar4 == (psSECT *)0x0) {
        return 1;
      }
      *(undefined4 *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x98) = 0;
      psSHEET::GetFloat(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),local_80,s_y,
                        (float *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x98));
      *(undefined4 *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) = 0;
      local_40[0] = '\0';
      psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),local_80,s_objMarkup,local_40,0x40
                     );
      poVar5 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_40);
      if (poVar5 != (objOBJ *)0x0) {
        iVar1 = *(int *)(poVar5 + 0x38);
        if (iVar1 == 0) {
          *(objOBJ **)
           (this + *(int *)(this + 0x4e18) * 0xf80 +
                   *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) * 0x18c + 0xd0) =
               poVar5;
          (**(code **)(*(int *)(this + *(int *)(this + 0x4e18) * 0xf80 +
                                       *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) *
                                       0x18c + 0x9c) + 4))();
          *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) =
               *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) + 1;
        }
        else {
          bVar2 = false;
          for (iVar6 = iVar1; (iVar1 != 0 && ((!bVar2 || (iVar6 != iVar1))));
              iVar6 = *(int *)(iVar6 + 0x30)) {
            *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 +
                            *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) * 0x18c + 0xd0
                    ) = iVar6;
            (**(code **)(*(int *)(this + *(int *)(this + 0x4e18) * 0xf80 +
                                         *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) *
                                         0x18c + 0x9c) + 4))();
            *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) =
                 *(int *)(this + *(int *)(this + 0x4e18) * 0xf80 + 0x1014) + 1;
            bVar2 = true;
          }
        }
      }
      *(int *)(this + 0x4e18) = *(int *)(this + 0x4e18) + 1;
    } while (iVar3 < 5);
  }
  return 1;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00539380 */

gsDOMAIN * __thiscall aiaDOMAIN_LIST_ARENA::MakeDomain(aiaDOMAIN_LIST_ARENA *this)

{
  gsDOMAIN *this_00;
  gsDOMAIN *pgVar1;
  int iVar2;
  
  this_00 = (gsDOMAIN *)operator_new(0x4eb0);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    pgVar1 = this_00 + 300;
    iVar2 = 5;
    do {
      *(undefined4 *)pgVar1 = 0;
      _vector_constructor_iterator_(pgVar1 + 4,0x18c,10,aiAREA::aiAREA);
      *(undefined4 *)(pgVar1 + 0xf7c) = 0;
      pgVar1 = pgVar1 + 0xf80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this_00 + 0x4eac) = 0;
    *(undefined ***)this_00 = &aiaDOMAIN_ARENA::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &aiaDOMAIN_ARENA::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00539400
   addr: 00539400 */

void * __thiscall aiaDOMAIN_ARENA::_scalar_deleting_destructor_(aiaDOMAIN_ARENA *this,uint param_1)

{
  aiaDOMAIN_ARENA *paVar1;
  int iVar2;
  
  paVar1 = this + 0x4eb0;
  iVar2 = 5;
  do {
    paVar1 = paVar1 + -0xf80;
    _vector_destructor_iterator_(paVar1,0x18c,10,aiAREA::~aiAREA);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  gsDOMAIN::~gsDOMAIN((gsDOMAIN *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:aia_arena.cpp
   addr: 00539450
   addr: 00539450 */

void * __thiscall
aiaDOMAIN_LIST_ARENA::_scalar_deleting_destructor_(aiaDOMAIN_LIST_ARENA *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

