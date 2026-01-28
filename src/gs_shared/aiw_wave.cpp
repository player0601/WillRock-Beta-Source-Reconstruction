
/* from: gs_shared:aiw_wave.cpp
   addr: 00541000 */

int __thiscall aiDOMAIN_LIST_SPAWN::CreateWaves(aiDOMAIN_LIST_SPAWN *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  char *pcVar3;
  entIACTIVE_OBJ *this_00;
  int iVar4;
  objOBJ *poVar5;
  
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar3 = strstr(*(char **)(param_1 + 0x18),s__eio_aiw);
    if (pcVar3 != (char *)0x0) {
      this_00 = (entIACTIVE_OBJ *)operator_new(0xcc);
      if (this_00 == (entIACTIVE_OBJ *)0x0) {
        this_00 = (entIACTIVE_OBJ *)0x0;
      }
      else {
        entIACTIVE_OBJ::entIACTIVE_OBJ(this_00);
        *(undefined4 *)(this_00 + 0x98) = 0;
        *(undefined4 *)(this_00 + 0xc4) = 0;
        *(undefined4 *)(this_00 + 200) = 0;
        *(undefined ***)this_00 = &aiwWAVE::_vftable_;
        *(objOBJ **)(this_00 + 0x94) = param_1;
      }
      msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this_00,0x24535953,0x53);
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar5 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
      poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
    iVar4 = CreateWaves(this,poVar5);
    if (iVar4 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:aiw_wave.cpp
   addr: 005410C0 */

int __thiscall aiwWAVE::Init(aiwWAVE *this)

{
  int iVar1;
  psSHEET *this_00;
  m3dSPL *this_01;
  aiDOMAIN_LIST_SPAWN *paVar2;
  int iVar3;
  aiwWAVE *paVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float afStack_2c [11];
  
  apNAME::SetName((apNAME *)(this + 0x44),*(char **)(*(int *)(this + 0x94) + 0x18));
  (**(code **)(*(int *)this + 0x20))(*(undefined4 *)(*(int *)(this + 0x94) + 0xf0));
  iVar6 = 0;
  if (0 < *(int *)(aiSpawnDomList + 0x9c)) {
    iVar3 = 0xa0;
    paVar2 = aiSpawnDomList;
    do {
      iVar5 = *(int *)(paVar2 + iVar3);
      if (*(int *)(*(int *)(iVar5 + 200) + 0x2c) == *(int *)(this + 0x94)) {
        *(int *)(this + *(int *)(this + 0xc4) * 4 + 0x9c) = iVar5;
        *(int *)(this + 0xc4) = *(int *)(this + 0xc4) + 1;
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffdff;
        paVar2 = aiSpawnDomList;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < *(int *)(paVar2 + 0x9c));
  }
  iVar6 = 0;
  fVar9 = 0.0;
  if (0 < *(int *)(this + 0xc4)) {
    pfVar7 = afStack_2c;
    paVar4 = this + 0x9c;
    do {
      this_00 = *(psSHEET **)(*(int *)(*(int *)paVar4 + 200) + 0xf0);
      *pfVar7 = 10.0;
      psSHEET::GetFloat(this_00,s_AI_SPAWN,s_ratio,pfVar7);
      fVar9 = fVar9 + *pfVar7;
      iVar6 = iVar6 + 1;
      paVar4 = paVar4 + 4;
      pfVar7 = pfVar7 + 1;
    } while (iVar6 < *(int *)(this + 0xc4));
  }
  this_01 = (m3dSPL *)operator_new(0x34);
  if (this_01 == (m3dSPL *)0x0) {
    this_01 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_01 + 4) = 0;
    *(undefined4 *)(this_01 + 8) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    *(undefined4 *)(this_01 + 0x14) = 8;
    *(undefined4 *)(this_01 + 0x18) = 8;
    *(undefined4 *)(this_01 + 0x1c) = 1;
    *(undefined4 *)(this_01 + 0x20) = 0;
    *(undefined4 *)(this_01 + 0x24) = 0;
    *(undefined4 *)(this_01 + 0x28) = 0;
    *(undefined4 *)(this_01 + 0x2c) = 0;
    *(undefined4 *)(this_01 + 0x30) = 0;
    *(undefined ***)this_01 = &m3dSPL_LINEAR1D::_vftable_;
  }
  *(m3dSPL **)(this + 200) = this_01;
  if (this_01 != (m3dSPL *)0x0) {
    iVar6 = m3dSPL::AllocKpList(this_01,*(int *)(this + 0xc4) + 1);
    if (iVar6 != 0) {
      iVar6 = *(int *)(this + 200);
      *(undefined4 *)
       (*(int *)(iVar6 + 0x18) * (*(uint *)(iVar6 + 0x10) & (0 < (int)*(uint *)(iVar6 + 0x10)) - 1)
       + *(int *)(iVar6 + 0x24)) = 0;
      if (0 < *(int *)(this + 0xc4)) {
        fVar9 = ___real_3f800000 / fVar9;
        iVar6 = 0;
        do {
          iVar3 = *(int *)(this + 200);
          iVar5 = iVar6;
          if (*(int *)(iVar3 + 0x10) <= iVar6) {
            iVar5 = *(int *)(iVar3 + 0x10);
          }
          iVar1 = iVar6 + 1;
          iVar8 = *(int *)(iVar3 + 0x10);
          if (iVar1 < *(int *)(iVar3 + 0x10)) {
            iVar8 = iVar1;
          }
          *(float *)(*(int *)(iVar3 + 0x18) * iVar8 + *(int *)(iVar3 + 0x24)) =
               fVar9 * afStack_2c[iVar6] +
               *(float *)(*(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x18) * iVar5);
          iVar6 = iVar1;
        } while (iVar1 < *(int *)(this + 0xc4));
      }
      iVar6 = *(int *)(this + 200);
      iVar3 = *(int *)(this + 0xc4);
      if (*(int *)(iVar6 + 0x10) <= *(int *)(this + 0xc4)) {
        iVar3 = *(int *)(iVar6 + 0x10);
      }
      *(undefined4 *)(*(int *)(iVar6 + 0x18) * iVar3 + *(int *)(iVar6 + 0x24)) = 0x3f800000;
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: gs_shared:aiw_wave.cpp
   addr: 005412E0 */

void __thiscall aiwWAVE::ProcessFRAME(aiwWAVE *this)

{
  int iVar1;
  aiDOMAIN_SPAWN *this_00;
  int iVar2;
  aiwWAVE *paVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(this + 0x30) < 1) {
    if (((byte)this[0x98] & 2) == 0) {
      iVar2 = *(int *)(this + 0xc4);
      iVar4 = 0;
      if (0 < iVar2) {
        paVar3 = this + 0x9c;
        do {
          iVar1 = *(int *)(*(int *)paVar3 + 0x1cc);
          if ((iVar1 < 1) || (*(int *)(*(int *)paVar3 + 0x1d0) < iVar1)) break;
          iVar4 = iVar4 + 1;
          paVar3 = paVar3 + 4;
        } while (iVar4 < iVar2);
      }
      if (iVar4 == iVar2) {
        *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 2;
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
      }
    }
    iVar2 = *(int *)(this + 0xc4);
    iVar4 = 0;
    if (0 < iVar2) {
      paVar3 = this + 0x9c;
      do {
        iVar1 = *(int *)(*(int *)paVar3 + 0x1bc);
        if ((iVar1 < 1) || (*(int *)(*(int *)paVar3 + 0x1c0) < iVar1)) break;
        iVar4 = iVar4 + 1;
        paVar3 = paVar3 + 4;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 1;
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
    }
    else if (((byte)this[0x98] & 1) == 0) {
      iVar4 = 0;
      if (0 < iVar2) {
        paVar3 = this + 0x9c;
        do {
          iVar2 = aiDOMAIN_SPAWN::IsReadySpawn(*(aiDOMAIN_SPAWN **)paVar3);
          if (iVar2 != 0) break;
          iVar4 = iVar4 + 1;
          paVar3 = paVar3 + 4;
        } while (iVar4 < *(int *)(this + 0xc4));
      }
      if (iVar4 != *(int *)(this + 0xc4)) {
        iVar2 = 0;
        while( true ) {
          fVar5 = m3dRandom();
          iVar4 = m3dSPL::FindSeg(*(m3dSPL **)(this + 200),fVar5);
          if (iVar4 == -2) {
            iVar4 = 0;
          }
          else if (iVar4 == -1) {
            iVar4 = *(int *)(this + 0xc4) + -1;
          }
          this_00 = *(aiDOMAIN_SPAWN **)(this + iVar4 * 4 + 0x9c);
          iVar4 = aiDOMAIN_SPAWN::IsReadySpawn(this_00);
          if (iVar4 != 0) break;
          iVar2 = iVar2 + 1;
          if (9 < iVar2) {
            return;
          }
        }
        aiDOMAIN_SPAWN::Spawn(this_00);
        return;
      }
    }
  }
  return;
}




/* from: gs_shared:aiw_wave.cpp
   addr: 00541430 */

int __thiscall
aiwWAVE::ProcessMsg(aiwWAVE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  switch(param_1) {
  case 1000:
    ProcessFRAME(this);
    break;
  case 0x3f5:
    msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)this);
    return 1;
  case 0x3f6:
    Init(this);
    return 0;
  case 0x3f8:
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),&s_LOCK);
    if (iVar1 == 0) {
      apNAME::IsName((apNAME *)((int)param_2 + 8),s_UNLOCK);
      return 0;
    }
  }
  return 0;
}

