
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdt_sys.cpp
   addr: 004F11E0 */

void __thiscall cdtCOLL::cdtCOLL(cdtCOLL *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = _m3dVIntZero;
  *(undefined4 *)(this + 0xc) = DAT_00963768;
  *(undefined4 *)(this + 0x10) = DAT_0096376c;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined ***)(this + 0x14) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x34) = _m3dVZero;
  *(undefined4 *)(this + 0x38) = DAT_00963740;
  *(undefined4 *)(this + 0x3c) = DAT_00963744;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return;
}




/* from: engine:cdt_sys.cpp
   addr: 004F1260
   addr: 004F1260 */

void * __thiscall cdtCOLL::_vector_deleting_destructor_(cdtCOLL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x40));
  apFree(*(void **)(this + 0x44));
  apFree(*(void **)(this + 0x48));
  apFree(*(void **)(this + 0x50));
  apFree(*(void **)(this + 0x54));
  apFree(*(void **)(this + 0x58));
  apFree(*(void **)(this + 0x5c));
  *(undefined ***)(this + 0x14) = &m3dVOL::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:cdt_sys.cpp
   addr: 004F12D0 */

void __thiscall cdtCOLL::~cdtCOLL(cdtCOLL *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x40));
  apFree(*(void **)(this + 0x44));
  apFree(*(void **)(this + 0x48));
  apFree(*(void **)(this + 0x50));
  apFree(*(void **)(this + 0x54));
  apFree(*(void **)(this + 0x58));
  apFree(*(void **)(this + 0x5c));
  *(undefined ***)(this + 0x14) = &m3dVOL::_vftable_;
  return;
}




/* from: engine:cdt_sys.cpp
   addr: 004F1330 */

int __thiscall
cdtCOLL::AllocLists(cdtCOLL *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  
  *(int *)(this + 0x4c) = param_2;
  pvVar1 = apRealloc(*(void **)(this + 0x40),param_1 * 4 + 4);
  *(void **)(this + 0x40) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  pvVar1 = apRealloc(*(void **)(this + 0x48),*(uint *)(this + 0x4c));
  *(void **)(this + 0x48) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  pvVar1 = apRealloc(*(void **)(this + 0x44),param_3 * 2);
  *(void **)(this + 0x44) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  if (((byte)this[4] & 1) != 0) {
    *(int *)(this + 0x60) = param_4;
    pvVar1 = apRealloc(*(void **)(this + 0x50),param_3 * 4 + 4);
    *(void **)(this + 0x50) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    pvVar1 = apRealloc(*(void **)(this + 0x54),param_5 * 2);
    *(void **)(this + 0x54) = pvVar1;
    if ((pvVar1 == (void *)0x0) && (0 < param_5)) {
      return 0;
    }
    pvVar1 = apRealloc(*(void **)(this + 0x58),param_2 * 4 + 4);
    *(void **)(this + 0x58) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    pvVar1 = apRealloc(*(void **)(this + 0x5c),*(uint *)(this + 0x60));
    *(void **)(this + 0x5c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:cdt_sys.cpp
   addr: 004F1440 */

int __thiscall cdtCOLL::CalcTotalMemory(cdtCOLL *this)

{
  voxGRID *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  this_00 = (voxGRID *)(this + 8);
  iVar3 = voxGRID::GetNVoxels(this_00);
  iVar8 = 0;
  if ((*(int *)(this + 0x4c) != 0) && (iVar4 = voxGRID::GetNVoxels(this_00), 0 < iVar4)) {
    piVar6 = *(int **)(this + 0x40);
    do {
      piVar1 = piVar6 + 1;
      iVar5 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + (*piVar1 - iVar5);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = *(int *)(this + 0x4c) + (iVar8 + 0x34 + iVar3 * 2) * 2;
  if (*(int *)(this + 0x54) != 0) {
    if (*(int *)(this + 0x60) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if (*(int *)(this + 0x4c) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        iVar5 = voxGRID::GetNVoxels(this_00);
        if (0 < iVar5) {
          piVar6 = *(int **)(this + 0x40);
          do {
            piVar1 = piVar6 + 1;
            iVar2 = *piVar6;
            piVar6 = piVar6 + 1;
            iVar7 = iVar7 + (*piVar1 - iVar2);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (0 < iVar7) {
        piVar6 = *(int **)(this + 0x50);
        do {
          piVar1 = piVar6 + 1;
          iVar5 = *piVar6;
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + (*piVar1 - iVar5);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    iVar3 = iVar3 + *(int *)(this + 0x60) + (iVar4 + (*(int *)(this + 0x4c) + iVar8) * 2) * 2;
  }
  return iVar3;
}




/* from: engine:cdt_sys.cpp
   addr: 004F1510 */

cdtOFL * __thiscall cdtOFL::cdtOFL(cdtOFL *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  cdtOFL *pcVar3;
  
  pcVar3 = this;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + 4;
  }
  pvVar1 = apCalloc(2,param_1);
  *(void **)(this + 4) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return this;
  }
  if (param_2 != 0) {
    pvVar1 = apCalloc(2,param_1);
    *(void **)(this + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return this;
    }
    pvVar1 = apCalloc(4,param_1);
    *(void **)(this + 0xc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return this;
    }
    pvVar1 = apCalloc(2,param_2);
    *(void **)(this + 0x14) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return this;
    }
  }
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  return this;
}




/* from: engine:cdt_sys.cpp
   addr: 004F1590 */

void __thiscall cdtOFL::~cdtOFL(cdtOFL *this)

{
  if (*(void **)(this + 4) != (void *)0x0) {
    apFree(*(void **)(this + 4));
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    apFree(*(void **)(this + 8));
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    apFree(*(void **)(this + 0xc));
  }
  if (*(void **)(this + 0x14) != (void *)0x0) {
    apFree(*(void **)(this + 0x14));
  }
  return;
}

