
/* from: gs:proj_shd.cpp
   addr: 00501AE0 */

pshSHADOW_SYSTEM * __thiscall pshSHADOW_SYSTEM::pshSHADOW_SYSTEM(pshSHADOW_SYSTEM *this)

{
  pshSHADOW_SYSTEM *ppVar1;
  int iVar2;
  
  iVar2 = 0x14;
  ppVar1 = this + 0x18;
  do {
    *(undefined4 *)(ppVar1 + -8) = 0;
    *(undefined4 *)(ppVar1 + -4) = 0;
    *(undefined4 *)ppVar1 = 0;
    *(undefined4 *)(ppVar1 + 4) = 0;
    ppVar1 = ppVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x57cc) = 0;
  *(undefined4 *)(this + 0x5814) = 1;
  *(undefined ***)(this + 0x5810) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x5854) = 0;
  *(undefined4 *)(this + 0x5858) = 0;
  *(undefined4 *)(this + 0x585c) = 0xffffffff;
  *(undefined4 *)(this + 0x5860) = 0;
  *(undefined4 *)(this + 0x5864) = 0xffffffff;
  *(undefined4 *)(this + 0x5868) = 0;
  *(undefined4 *)(this + 0x586c) = 0;
  *(undefined4 *)(this + 0x5870) = 0;
  *(undefined4 *)(this + 0x5874) = 0;
  *(undefined4 *)(this + 0x5878) = 0xffffffff;
  *(undefined4 *)(this + 0x587c) = 0;
  *(undefined4 *)(this + 0x5880) = 0xffffffff;
  *(undefined4 *)(this + 0x5884) = 0;
  *(undefined4 *)(this + 0x5888) = 0;
  *(undefined4 *)(this + 0x588c) = 0;
  *(undefined4 *)(this + 0x5890) = 0;
  *(undefined4 *)(this + 0x5894) = 0xffffffff;
  *(undefined4 *)(this + 0x5898) = 0;
  *(undefined4 *)(this + 0x589c) = 0xffffffff;
  *(undefined4 *)(this + 0x58a0) = 0;
  *(undefined4 *)(this + 0x58a4) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 0;
  ppVar1 = this + 0xc;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ppVar1 = 0;
    ppVar1 = ppVar1 + 4;
  }
  *(undefined4 *)(this + 0x19c) = 0;
  ppVar1 = this + 0x1a0;
  for (iVar2 = 500; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ppVar1 = 0;
    ppVar1 = ppVar1 + 4;
  }
  ppVar1 = this + 0x970;
  for (iVar2 = 0x1392; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ppVar1 = 0;
    ppVar1 = ppVar1 + 4;
  }
  *(undefined4 *)(this + 0x57c4) = 0;
  *(undefined4 *)(this + 0x57c8) = 0;
  *(undefined4 *)(this + 0x5804) = 0;
  *(undefined4 *)(this + 0x5848) = 0;
  *(undefined4 *)(this + 0x584c) = 0;
  *(undefined4 *)(this + 0x5850) = 0;
  return this;
}




/* from: gs:proj_shd.cpp
   addr: 00501C00
   addr: 00501C00 */

void * __thiscall
pshSHADOW_SYSTEM::_scalar_deleting_destructor_(pshSHADOW_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x588c));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x5870));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x5854));
  *(undefined ***)(this + 0x5810) = &m3dVOL::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:proj_shd.cpp
   addr: 00501C50 */

void __thiscall pshSHADOW_SYSTEM::~pshSHADOW_SYSTEM(pshSHADOW_SYSTEM *this)

{
  *(undefined ***)this = &_vftable_;
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x588c));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x5870));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x5854));
  *(undefined ***)(this + 0x5810) = &m3dVOL::_vftable_;
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00501C90 */

int __thiscall pshSHADOW_SYSTEM::Init(pshSHADOW_SYSTEM *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0x57c4) = 0;
  *(undefined4 *)(this + 0x57c8) = 0;
  *(undefined4 *)(this + 0x5804) = 0;
  *(undefined4 *)(this + 0x580c) = 0;
  *(void **)(this + 0x5848) = (void *)0x0;
  *(void **)(this + 0x584c) = (void *)0x0;
  *(void **)(this + 0x5850) = (void *)0x0;
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x5854),0xc,100,(void **)(this + 0x5848),0,0);
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x5870),2,100,(void **)(this + 0x584c),0,0);
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x588c),2,100,(void **)(this + 0x5850),0,0);
  *(undefined4 *)(this + 0x57b8) = 0;
  *(undefined4 *)(this + 0x57bc) = 0;
  *(undefined4 *)(this + 0x57c0) = 0;
  iVar1 = objOBJ::RegisterUsrData(0x50534844);
  *(int *)(this + 4) = iVar1;
  return (uint)(iVar1 != -1);
}




/* from: gs:proj_shd.cpp
   addr: 00501D30 */

void __thiscall pshSHADOW_SYSTEM::Term(pshSHADOW_SYSTEM *this)

{
  pshOBJ_GROUP *this_00;
  int iVar1;
  int iVar2;
  pshSHADOW_SYSTEM *ppVar3;
  
  *(undefined4 *)(this + 4) = 0xffffffff;
  objOBJ::UnregisterUsrData(0x50534844);
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(this + 8)) {
    ppVar3 = this + 0xc;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)ppVar3 = 0;
      *(undefined4 *)(ppVar3 + 4) = 0;
      *(undefined4 *)(ppVar3 + 8) = 0;
      *(undefined4 *)(ppVar3 + 0xc) = 0;
      *(undefined4 *)(ppVar3 + 0x10) = 0;
      ppVar3 = ppVar3 + 0x14;
    } while (iVar1 < *(int *)(this + 8));
  }
  if (0 < *(int *)(this + 0x19c)) {
    ppVar3 = this + 0x1a0;
    do {
      this_00 = *(pshOBJ_GROUP **)ppVar3;
      if (this_00 != (pshOBJ_GROUP *)0x0) {
        pshOBJ_GROUP::~pshOBJ_GROUP(this_00);
        operator_delete(this_00);
      }
      *(undefined4 *)ppVar3 = 0;
      iVar2 = iVar2 + 1;
      ppVar3 = ppVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x19c));
  }
  ppVar3 = this + 0x970;
  for (iVar1 = 0x1392; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ppVar3 = 0;
    ppVar3 = ppVar3 + 4;
  }
  apFree(*(void **)(this + 0x57c4));
  *(undefined4 *)(this + 0x57c4) = 0;
  apFree(*(void **)(this + 0x57c8));
  *(undefined4 *)(this + 0x57c8) = 0;
  apFree(*(void **)(this + 0x5804));
  *(undefined4 *)(this + 0x5804) = 0;
  apFree(*(void **)(this + 0x580c));
  *(undefined4 *)(this + 0x580c) = 0;
  dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)(this + 0x5854));
  dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)(this + 0x5870));
  dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)(this + 0x588c));
  *(undefined4 *)(this + 0x584c) = 0;
  *(undefined4 *)(this + 0x5850) = 0;
  *(undefined4 *)(this + 0x5848) = 0;
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00501E40 */

int __thiscall
pshSHADOW_SYSTEM::InitTemplate(pshSHADOW_SYSTEM *this,animTPL *param_1,objOBJ *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  pshOBJ_USR_DATA *this_00;
  objOBJ *poVar4;
  
  poVar1 = param_2;
  if ((((0 < *(int *)(param_2 + 0x10)) && (*(psSHEET **)(param_1 + 0xc4) != (psSHEET *)0x0)) &&
      (iVar3 = psSHEET::GetBool(*(psSHEET **)(param_1 + 0xc4),s_PROJ_SHD,s_isCast,(int *)&param_2),
      iVar3 != 0)) && (param_2 != (objOBJ *)0x0)) {
    this_00 = (pshOBJ_USR_DATA *)operator_new(0x14);
    if (this_00 == (pshOBJ_USR_DATA *)0x0) {
      return 0;
    }
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined ***)this_00 = &pshOBJ_USR_DATA::_vftable_;
    iVar3 = pshOBJ_USR_DATA::Init(this_00,poVar1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = objOBJ::AddUsrData(poVar1,*(int *)(this + 4),(objUSR_DATA *)this_00);
    if (iVar3 == 0) {
      return 0;
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(poVar1 + 0x38);
  for (poVar4 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    iVar3 = InitTemplate(this,param_1,poVar4);
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd.cpp
   addr: 00501F10 */

int __thiscall pshSHADOW_SYSTEM::InitInst(pshSHADOW_SYSTEM *this,animINST *param_1)

{
  pshOBJ_GROUP *ppVar1;
  int iVar2;
  int iVar3;
  pshSHADOW_SYSTEM *ppVar4;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = DAT_005dc888;
  local_14 = DAT_005dc888;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_2c = 0;
  local_20 = 0;
  local_30 = 0;
  local_28 = DAT_005dc888;
  local_1c = 0;
  local_18 = 0;
  animINST::GetBool(param_1,s_PROJ_SHD,s_isCast,&local_30);
  animINST::GetBool(param_1,s_PROJ_SHD,s_isSource,&local_20);
  animINST::GetBool(param_1,s_PROJ_SHD,s_isExclude,&local_2c);
  animINST::GetBool(param_1,s_PROJ_SHD,s_isIsectAlways,&local_1c);
  animINST::GetBool(param_1,s_PROJ_SHD,s_isUseSimpleCutPlane,&local_18);
  animINST::GetFloat(param_1,s_PROJ_SHD,s_maxDist,&local_24);
  animINST::GetFloat(param_1,s_PROJ_SHD,s_maxDistBelow,&local_28);
  animINST::GetFloat(param_1,s_PROJ_SHD,s_maxDistAbove,&local_14);
  if (local_20 == 0) {
    if ((local_30 != 0) || (local_2c != 0)) {
      ppVar1 = (pshOBJ_GROUP *)operator_new(0x188);
      if (ppVar1 != (pshOBJ_GROUP *)0x0) {
        ppVar1 = (pshOBJ_GROUP *)pshOBJ_GROUP::pshOBJ_GROUP(ppVar1);
        if (ppVar1 != (pshOBJ_GROUP *)0x0) {
          if (local_30 != 0) {
            *(uint *)ppVar1 = *(uint *)ppVar1 | 1;
          }
          if (local_2c != 0) {
            *(uint *)ppVar1 = *(uint *)ppVar1 | 2;
          }
          if (local_1c != 0) {
            *(uint *)ppVar1 = *(uint *)ppVar1 | 4;
          }
          if (local_18 != 0) {
            *(uint *)ppVar1 = *(uint *)ppVar1 | 0x10;
          }
          *(uint *)ppVar1 = *(uint *)ppVar1 | 0x10;
          *(float *)(ppVar1 + 0x14) = local_24;
          if (DAT_005dc888 * ___real_3f000000 <= local_28) {
            *(float *)(ppVar1 + 0x18) = local_24;
          }
          else {
            *(float *)(ppVar1 + 0x18) = local_28;
          }
          *(float *)(ppVar1 + 0x1c) = local_14;
          iVar2 = pshOBJ_GROUP::Add(ppVar1,param_1,*(int *)(this + 4));
          if (iVar2 == 0) {
            return 0;
          }
          if (((byte)*ppVar1 & 1) != 0) {
            iVar2 = AdjustLists(this,ppVar1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          *(pshOBJ_GROUP **)(this + *(int *)(this + 0x19c) * 4 + 0x1a0) = ppVar1;
          *(int *)(this + 0x19c) = *(int *)(this + 0x19c) + 1;
          (**(code **)(*(int *)this + 4))(ppVar1);
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0x437f0000;
    animINST::GetColor(param_1,s_PROJ_SHD,s_color,(m3dCOLOR *)&local_10);
    iVar2 = *(int *)(this + 8);
    iVar3 = 0;
    if (0 < iVar2) {
      ppVar4 = this + 0xc;
      do {
        if (*(animINST **)ppVar4 == param_1) break;
        iVar3 = iVar3 + 1;
        ppVar4 = ppVar4 + 0x14;
      } while (iVar3 < iVar2);
    }
    if ((iVar2 < 1) && (iVar3 == iVar2)) {
      *(animINST **)(this + iVar2 * 0x14 + 0xc) = param_1;
      iVar2 = *(int *)(this + 8) * 0x14;
      *(undefined4 *)(this + *(int *)(this + 8) * 0x14 + 0x10) = local_10;
      *(undefined4 *)(this + iVar2 + 0x14) = local_c;
      *(undefined4 *)(this + iVar2 + 0x18) = local_8;
      *(undefined4 *)(this + iVar2 + 0x1c) = local_4;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  return 1;
}




/* from: gs:proj_shd.cpp
   addr: 005021D0 */

void __thiscall pshSHADOW_SYSTEM::TermInst(pshSHADOW_SYSTEM *this,animINST *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  pshSHADOW_SYSTEM *ppVar4;
  pshSHADOW_SYSTEM *ppVar5;
  pshSHADOW_SYSTEM *ppVar6;
  pshSHADOW_SYSTEM *ppVar7;
  
  iVar3 = 0;
  iVar2 = *(int *)(this + 8);
  if (0 < iVar2) {
    ppVar6 = this + 0x20;
    ppVar4 = this + 0xc;
    do {
      if (*(animINST **)ppVar4 == param_1) {
        if (iVar3 < iVar2 + -1) {
          ppVar5 = ppVar6;
          ppVar7 = ppVar4;
          for (uVar1 = ((iVar2 - iVar3) + -1) * 5 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(int *)ppVar7 = *(int *)ppVar5;
            ppVar5 = ppVar5 + 4;
            ppVar7 = ppVar7 + 4;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppVar7 = *ppVar5;
            ppVar5 = ppVar5 + 1;
            ppVar7 = ppVar7 + 1;
          }
        }
        ppVar6 = ppVar6 + -0x14;
        iVar3 = iVar3 + -1;
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        ppVar4 = ppVar4 + -0x14;
      }
      iVar2 = *(int *)(this + 8);
      iVar3 = iVar3 + 1;
      ppVar6 = ppVar6 + 0x14;
      ppVar4 = ppVar4 + 0x14;
    } while (iVar3 < iVar2);
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x19c)) {
    ppVar6 = this + 0x1a0;
    do {
      pshOBJ_GROUP::Del(*(pshOBJ_GROUP **)ppVar6,param_1);
      if (*(int *)(*(pshOBJ_GROUP **)ppVar6 + 4) == 0) {
        DelGroup(this,*(pshOBJ_GROUP **)ppVar6);
      }
      iVar2 = iVar2 + 1;
      ppVar6 = ppVar6 + 4;
    } while (iVar2 < *(int *)(this + 0x19c));
  }
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00502280 */

int __thiscall
pshSHADOW_SYSTEM::AddExcludeList(pshSHADOW_SYSTEM *this,animINST *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  pshOBJ_GROUP *ppVar3;
  int *piVar4;
  pshSHADOW_SYSTEM *ppVar5;
  int iVar6;
  pshEXCLUDE_LIST *local_8;
  int local_4;
  
  local_8 = (pshEXCLUDE_LIST *)(this + 0x970);
  local_4 = 10;
  do {
    iVar6 = 0;
    if (0 < *(int *)(this + 0x19c)) {
      ppVar5 = this + 0x1a0;
      do {
        iVar2 = 0;
        iVar1 = *(int *)(*(int *)ppVar5 + 4);
        if (0 < iVar1) {
          piVar4 = *(int **)(*(int *)ppVar5 + 8);
          do {
            if ((animINST *)*piVar4 == param_1) {
              ppVar3 = *(pshOBJ_GROUP **)(this + iVar6 * 4 + 0x1a0);
              goto LAB_005022dd;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar2 < iVar1);
        }
        iVar6 = iVar6 + 1;
        ppVar5 = ppVar5 + 4;
      } while (iVar6 < *(int *)(this + 0x19c));
    }
    ppVar3 = (pshOBJ_GROUP *)0x0;
LAB_005022dd:
    pshEXCLUDE_LIST::Del(local_8,ppVar3);
    local_8 = local_8 + 0x7d4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (param_2 == -1) {
    param_2 = 0;
    ppVar5 = this + 0x970;
    do {
      if (*(int *)ppVar5 == 0) break;
      param_2 = param_2 + 1;
      ppVar5 = ppVar5 + 0x7d4;
    } while (param_2 < 10);
    if (param_2 == 10) {
      return -1;
    }
  }
  iVar6 = 0;
  if (0 < *(int *)(this + 0x19c)) {
    ppVar5 = this + 0x1a0;
    do {
      iVar2 = 0;
      iVar1 = *(int *)(*(int *)ppVar5 + 4);
      if (0 < iVar1) {
        piVar4 = *(int **)(*(int *)ppVar5 + 8);
        do {
          if ((animINST *)*piVar4 == param_1) {
            ppVar3 = *(pshOBJ_GROUP **)(this + iVar6 * 4 + 0x1a0);
            goto LAB_00502389;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 < iVar1);
      }
      iVar6 = iVar6 + 1;
      ppVar5 = ppVar5 + 4;
    } while (iVar6 < *(int *)(this + 0x19c));
  }
  ppVar3 = (pshOBJ_GROUP *)0x0;
LAB_00502389:
  pshEXCLUDE_LIST::Add((pshEXCLUDE_LIST *)(this + param_2 * 0x7d4 + 0x970),ppVar3);
  return param_2;
}




/* from: gs:proj_shd.cpp
   addr: 005023D0 */

void __thiscall
pshSHADOW_SYSTEM::MergeShadowSources(pshSHADOW_SYSTEM *this,animINST *param_1,animINST *param_2)

{
  int iVar1;
  pshOBJ_GROUP *this_00;
  pshOBJ_GROUP *ppVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  pshSHADOW_SYSTEM *ppVar8;
  undefined4 *puVar9;
  pshSHADOW_SYSTEM *ppVar10;
  undefined4 *puVar11;
  
  iVar4 = *(int *)(this + 0x19c);
  iVar7 = 0;
  if (iVar4 < 1) {
    return;
  }
  ppVar8 = this + 0x1a0;
  ppVar10 = ppVar8;
  do {
    iVar3 = 0;
    iVar1 = *(int *)(*(int *)ppVar10 + 4);
    if (0 < iVar1) {
      piVar6 = *(int **)(*(int *)ppVar10 + 8);
      do {
        if ((animINST *)*piVar6 == param_1) {
          this_00 = *(pshOBJ_GROUP **)(this + iVar7 * 4 + 0x1a0);
          if (this_00 == (pshOBJ_GROUP *)0x0) {
            return;
          }
          iVar7 = 0;
          do {
            iVar3 = 0;
            iVar1 = *(int *)(*(int *)ppVar8 + 4);
            if (0 < iVar1) {
              piVar6 = *(int **)(*(int *)ppVar8 + 8);
              do {
                if ((animINST *)*piVar6 == param_2) {
                  ppVar2 = *(pshOBJ_GROUP **)(this + iVar7 * 4 + 0x1a0);
                  if (ppVar2 == (pshOBJ_GROUP *)0x0) {
                    return;
                  }
                  iVar4 = pshOBJ_GROUP::Alloc(this_00,*(int *)(this_00 + 0xc) +
                                                      *(int *)(ppVar2 + 0xc),
                                              *(int *)(this_00 + 4) + *(int *)(ppVar2 + 4));
                  if (iVar4 == 0) {
                    return;
                  }
                  puVar9 = *(undefined4 **)(ppVar2 + 8);
                  puVar11 = (undefined4 *)(*(int *)(this_00 + 8) + *(int *)(this_00 + 4) * 4);
                  for (uVar5 = *(uint *)(ppVar2 + 4) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + *(int *)(ppVar2 + 4);
                  puVar9 = *(undefined4 **)(ppVar2 + 0x10);
                  puVar11 = (undefined4 *)
                            (*(int *)(this_00 + 0xc) * 0x40 + *(int *)(this_00 + 0x10));
                  for (uVar5 = (uint)(*(int *)(ppVar2 + 0xc) << 6) >> 2; uVar5 != 0;
                      uVar5 = uVar5 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  *(int *)(this_00 + 0xc) = *(int *)(this_00 + 0xc) + *(int *)(ppVar2 + 0xc);
                  DelGroup(this,ppVar2);
                  return;
                }
                iVar3 = iVar3 + 1;
                piVar6 = piVar6 + 1;
              } while (iVar3 < iVar1);
            }
            iVar7 = iVar7 + 1;
            ppVar8 = ppVar8 + 4;
            if (iVar4 <= iVar7) {
              return;
            }
          } while( true );
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar3 < iVar1);
    }
    iVar7 = iVar7 + 1;
    ppVar10 = ppVar10 + 4;
    if (iVar4 <= iVar7) {
      return;
    }
  } while( true );
}




/* from: gs:proj_shd.cpp
   addr: 00502530 */

void __thiscall pshSHADOW_SYSTEM::DelGroup(pshSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1)

{
  int iVar1;
  uint uVar2;
  pshSHADOW_SYSTEM *ppVar3;
  int iVar4;
  pshSHADOW_SYSTEM *ppVar5;
  
  ppVar3 = this + 0x970;
  iVar4 = 10;
  do {
    pshEXCLUDE_LIST::Del((pshEXCLUDE_LIST *)ppVar3,param_1);
    ppVar3 = (pshSHADOW_SYSTEM *)((pshEXCLUDE_LIST *)ppVar3 + 0x7d4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(this + 0x19c);
  iVar1 = 0;
  if (0 < iVar4) {
    ppVar3 = this + 0x1a0;
    do {
      if (*(pshOBJ_GROUP **)ppVar3 == param_1) {
        if (iVar1 < iVar4 + -1) {
          ppVar3 = this + iVar1 * 4 + 0x1a4;
          ppVar5 = this + iVar1 * 4 + 0x1a0;
          for (uVar2 = (iVar4 - iVar1) * 4 - 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)ppVar5 = *(undefined4 *)ppVar3;
            ppVar3 = ppVar3 + 4;
            ppVar5 = ppVar5 + 4;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *ppVar5 = *ppVar3;
            ppVar3 = ppVar3 + 1;
            ppVar5 = ppVar5 + 1;
          }
        }
        iVar4 = *(int *)(this + 0x19c);
        *(int *)(this + 0x19c) = iVar4 + -1;
        *(undefined4 *)(this + (iVar4 + -1) * 4 + 0x1a0) = 0;
        break;
      }
      iVar1 = iVar1 + 1;
      ppVar3 = ppVar3 + 4;
    } while (iVar1 < iVar4);
  }
  if (param_1 != (pshOBJ_GROUP *)0x0) {
    pshOBJ_GROUP::~pshOBJ_GROUP(param_1);
    operator_delete(param_1);
  }
  return;
}




/* from: gs:proj_shd.cpp
   addr: 005025E0 */

int __thiscall pshSHADOW_SYSTEM::AdjustLists(pshSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar6 = 0;
  iVar5 = 0;
  bVar1 = false;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar4 = *(int *)(*(int *)(iVar3 + 4 + *(int *)(param_1 + 0x10)) + 0x10);
      if (*(int *)(this + 0x57bc) < iVar4) {
        *(int *)(this + 0x57bc) = iVar4;
        bVar1 = true;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 4 + *(int *)(param_1 + 0x10)) + 0x14);
      if (*(int *)(this + 0x57c0) < iVar4) {
        *(int *)(this + 0x57c0) = iVar4;
        bVar1 = true;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 4 + *(int *)(param_1 + 0x10)) + 0xe8);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + *(int *)(this + 4) * 4);
      }
      iVar6 = iVar6 + *(int *)(iVar4 + 8);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  if (*(int *)(this + 0x57b8) < iVar6) {
    *(int *)(this + 0x57b8) = iVar6;
  }
  else if (!bVar1) {
    return 1;
  }
  pvVar2 = apRealloc(*(void **)(this + 0x57c4),*(uint *)(this + 0x57bc));
  *(void **)(this + 0x57c4) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar2 = apRealloc(*(void **)(this + 0x57c8),*(int *)(this + 0x57c0) * 0x34);
  *(void **)(this + 0x57c8) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar2 = apRealloc(*(void **)(this + 0x5804),*(int *)(this + 0x57c0) << 2);
  *(void **)(this + 0x5804) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = apRealloc(*(void **)(this + 0x580c),*(int *)(this + 0x57bc) << 4);
    *(void **)(this + 0x580c) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: gs:proj_shd.cpp
   addr: 00502740 */

void __thiscall pshSHADOW_SYSTEM::UpdateClear(pshSHADOW_SYSTEM *this,vidCLEAR *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  
  if ((*(byte *)(*(int *)(vidDriver + 0x210) + 0x14) & 8) != 0) {
    uVar1 = *(uint *)(vidDriver + 4) & 0x800;
    if ((uVar1 != 0) || ((*(uint *)(vidDriver + 4) & 0x1000) != 0)) {
      *(undefined4 *)(this + 0x58a8) = 1;
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x58c0) = 7;
      }
      else {
        *(undefined4 *)(this + 0x58c0) = 3;
      }
      bVar3 = (byte)*(undefined4 *)(this + 0x58c0);
      iVar2 = 1 << (bVar3 & 0x1f);
      *(undefined4 *)(this + 0x58bc) = 0x7f;
      *(int *)(this + 0x58ac) = iVar2;
      *(int *)(this + 0x58b4) = (1 << (bVar3 + 1 & 0x1f)) - iVar2;
      *(int *)(this + 0x58b8) = iVar2 / 2;
      iVar2 = (0xff >> (bVar3 & 0x1f)) << (bVar3 & 0x1f);
      *(int *)(this + 0x58b0) = iVar2;
      *(int *)(rendDrv + 0x80) = iVar2;
      iVar2 = *(int *)(this + 0x58ac);
      if (*(int *)(this + 0x58b4) <= *(int *)(this + 0x58ac)) {
        iVar2 = *(int *)(this + 0x58b4);
      }
      puVar4 = (uint *)0xffff;
      *(int *)(rendDrv + 0x7c) = iVar2;
      (**(code **)(*(int *)vidDriver + 0x50))(0,0xffffffff,0xffff,0xffff);
      *puVar4 = *puVar4 | 4;
      puVar4[5] = *(uint *)(this + 0x58b8);
    }
  }
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00502840 */

void __thiscall pshSHADOW_SYSTEM::FinishRender(pshSHADOW_SYSTEM *this,camCAMERA *param_1)

{
  animINST *paVar1;
  pshOBJ_GROUP *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  pshSHADOW_SYSTEM *ppVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_234;
  pshSHADOW_SYSTEM *local_22c;
  byte *local_228;
  int local_224;
  int local_220;
  int local_21c;
  uint local_218;
  m3dV local_214 [12];
  m3dV local_208 [12];
  undefined **local_1fc [23];
  rendCFG arStack_1a0 [12];
  m3dV local_194 [12];
  rendCFG local_188 [184];
  undefined4 local_d0;
  undefined4 local_cc;
  rendCFG local_c4 [176];
  camCAMERA *pcStack_14;
  undefined4 local_c;
  uint local_8;
  
  cdtCOLL::cdtCOLL((cdtCOLL *)local_1fc);
  local_1fc[0] = &cdtCOLL_OBJ::_vftable_;
  if ((((((*(byte *)(*(int *)(vidDriver + 0x210) + 0x14) & 8) != 0) &&
        ((*(uint *)(vidDriver + 4) & 0x1800) != 0)) &&
       (iVar2 = _apCfgReadBool((void **)&DAT_0094dcd4,s_Video,s_VIDEO_ProjShd,&local_21c),
       iVar2 != 0)) &&
      ((local_21c != 0 &&
       (iVar2 = _apCfgReadInt((void **)&DAT_0094dcd8,s_Video,s_VIDEO_ProjShdQual,&local_220),
       iVar2 != 0)))) && (local_220 != 1)) {
    camCAMERA::GetOrigin(param_1,local_208);
    camCAMERA::GetLookAt(param_1,local_194);
    iVar2 = 0;
    if (0 < *(int *)(this + 0x19c)) {
      ppVar6 = this + 0x1a0;
      do {
        pshOBJ_GROUP::PrepareInst(*(pshOBJ_GROUP **)ppVar6,local_208,local_220);
        iVar5 = *(int *)ppVar6;
        iVar2 = iVar2 + 1;
        ppVar6 = ppVar6 + 4;
        *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(this + 0x58ac);
      } while (iVar2 < *(int *)(this + 0x19c));
    }
    local_d0 = 0x10422;
    local_cc = 0;
    rendCFG::InitMtl1(local_188,(txmTEXTURE *)0x0);
    local_8 = 0;
    rendCFG::InitMtl1(local_c4,(txmTEXTURE *)0x0);
    local_c = 0x2180ab;
    uVar7 = *(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x1000;
    local_218 = uVar7;
    vidDRIVER::ToggleModeParam(vidDriver,0x100000,1);
    vidDRIVER::ToggleModeParam(vidDriver,0x41000,0);
    local_224 = 0;
    if (0 < *(int *)(this + 8)) {
      ppVar6 = this + 0x14;
      do {
        paVar1 = *(animINST **)(ppVar6 + -8);
        if (((byte)paVar1[4] & 1) == 0) {
          uVar7 = ftol();
          iVar2 = ftol();
          uVar3 = ftol();
          uVar4 = ftol();
          local_8 = ((uVar7 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
          animINST::GetPos(paVar1,local_214);
          vidDRIVER::ToggleModeParam(vidDriver,0x800,1);
          local_234 = 0;
          if (0 < *(int *)(this + 0x19c)) {
            local_22c = this + 0x1a0;
            do {
              this_00 = *(pshOBJ_GROUP **)local_22c;
              if (((*(uint *)this_00 & 0x20000) == 0) &&
                 (pshOBJ_GROUP::Update(this_00,(m3dBOX *)0x0,local_214,param_1),
                 (*(uint *)this_00 & 0x40000) != 0)) {
                iVar2 = 0;
                if (0 < *(int *)(this_00 + 4)) {
                  do {
                    paVar1 = *(animINST **)(*(int *)(this_00 + 8) + iVar2 * 4);
                    if (((byte)paVar1[4] & 3) == 0) {
                      animINST::Validate(paVar1,0xa00);
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < *(int *)(this_00 + 4));
                }
                BuildShdObjStart(this,this_00);
                iVar2 = 0;
                if (0 < *(int *)(this_00 + 0xc)) {
                  iVar5 = 0;
                  do {
                    local_228 = (byte *)(*(int *)(this_00 + 0x10) + iVar5);
                    if (((*local_228 & 1) == 0) &&
                       (BuildShdObj(this,param_1,this_00,iVar2,local_214,(m3dV *)(this_00 + 0xa8)),
                       (*local_228 & 2) != 0)) {
                      BuildShdObjUpdate(this,this_00,iVar2);
                    }
                    iVar2 = iVar2 + 1;
                    iVar5 = iVar5 + 0x40;
                  } while (iVar2 < *(int *)(this_00 + 0xc));
                }
                if (((*(uint *)(vidDriver + 4) & 0x2000) != 0) &&
                   ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x400000) != 0)) {
                  (**(code **)(*(int *)rendDrv + 0x4c))
                            (*(undefined4 *)(this + 0x5848),*(undefined4 *)(this + 0x5830),0,0,0);
                }
                (**(code **)(*(int *)rendDrv + 0x50))(local_188,0);
                if ((*(uint *)this_00 & 0x80000) == 0) {
                  uVar8 = 0x920;
                }
                else {
                  uVar8 = 0x20a0;
                }
                (**(code **)(*(int *)vidDriver + 0x50))
                          (uVar8,*(undefined4 *)(this_00 + 0xa4),*(undefined4 *)(this + 0x58b0),
                           *(undefined4 *)(this + 0x58bc));
                if (((*(uint *)(vidDriver + 4) & 0x2000) == 0) ||
                   ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x400000) == 0)) {
                  RenderShdObj(this,pcStack_14,*(ushort **)(this + 0x584c),*(int *)(this + 0x5834),
                               *(int *)(unaff_EBX + 0x2c),arStack_1a0);
                }
                else if (0 < *(int *)(this + 0x5834)) {
                  (**(code **)(*(int *)rendDrv + 0x4c))
                            (0,0,*(undefined4 *)(this + 0x584c),*(int *)(this + 0x5834),0);
                }
                if ((*(uint *)this_00 & 0x80000) == 0) {
                  uVar8 = 0xa20;
                }
                else {
                  uVar8 = 0x10a0;
                }
                (**(code **)(*(int *)vidDriver + 0x50))
                          (uVar8,*(undefined4 *)(this_00 + 0xa4),*(undefined4 *)(this + 0x58b0),
                           *(undefined4 *)(this + 0x58bc));
                if (((*(uint *)(vidDriver + 4) & 0x2000) == 0) ||
                   ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x400000) == 0)) {
                  RenderShdObj(this,param_1,*(ushort **)(this + 0x5850),*(int *)(this + 0x5838),
                               *(int *)(local_228 + 0x2c),local_188);
                }
                else if (0 < *(int *)(this + 0x5838)) {
                  (**(code **)(*(int *)rendDrv + 0x4c))
                            (0,0,*(undefined4 *)(this + 0x5850),*(int *)(this + 0x5838),0);
                }
              }
              local_234 = local_234 + 1;
              local_22c = local_22c + 4;
            } while (local_234 < *(int *)(this + 0x19c));
          }
          vidDRIVER::ToggleModeParam(vidDriver,0x100000,1);
          vidDRIVER::ToggleModeParam(vidDriver,0x800,0);
          (**(code **)(*(int *)vidDriver + 0x50))
                    (0x888,*(int *)(this + 0x58b8) + 1,*(undefined4 *)(this + 0x58bc),0xffffffff);
          RenderShdPoly(this,param_1,local_c4);
          if (local_224 < *(int *)(this + 8) + -1) {
            (**(code **)(*(int *)vidDriver + 0x50))
                      (0x844,*(undefined4 *)(this + 0x58b8),0xffff,*(undefined4 *)(this + 0x58bc));
            rendDRIVER::RenderQuad
                      (rendDrv,param_1,0.0,0.0,0.0,0.0,*(float *)(param_1 + 0x144),
                       *(float *)(param_1 + 0x148),0.0,0.0,*(float *)(param_1 + 0x80),local_188);
          }
        }
        local_224 = local_224 + 1;
        ppVar6 = ppVar6 + 0x14;
        uVar7 = local_218;
      } while (local_224 < *(int *)(this + 8));
    }
    vidDRIVER::ToggleModeParam(vidDriver,0x100000,0);
    vidDRIVER::ToggleModeParam(vidDriver,0x40800,1);
    vidDRIVER::ToggleModeParam(vidDriver,0x1000,uVar7);
    iVar2 = 0;
    if (0 < *(int *)(this + 0x19c)) {
      ppVar6 = this + 0x1a0;
      do {
        pshOBJ_GROUP::UnprepareInst(*(pshOBJ_GROUP **)ppVar6);
        iVar2 = iVar2 + 1;
        ppVar6 = ppVar6 + 4;
      } while (iVar2 < *(int *)(this + 0x19c));
    }
    local_1fc[0] = &cdtCOLL_OBJ::_vftable_;
    cdtCOLL::~cdtCOLL((cdtCOLL *)local_1fc);
    return;
  }
  local_1fc[0] = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)local_1fc);
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00502E60 */

void __thiscall
pshSHADOW_SYSTEM::RenderShdObj
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,ushort *param_2,int param_3,int param_4,
          rendCFG *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  rendVERTEX local_180 [384];
  
  if (0 < param_3) {
    local_27c = (param_3 - 1U >> 1) + 1;
    puVar4 = param_2 + 3;
    do {
      iVar2 = *(int *)(this + 0x5848);
      local_274 = 4;
      iVar3 = iVar2 + (uint)puVar4[-3] * 0xc;
      local_270 = *(undefined4 *)(iVar2 + (uint)puVar4[-3] * 0xc);
      local_26c = *(undefined4 *)(iVar3 + 4);
      local_268 = *(undefined4 *)(iVar3 + 8);
      iVar3 = iVar2 + (uint)puVar4[-2] * 0xc;
      local_264 = *(undefined4 *)(iVar2 + (uint)puVar4[-2] * 0xc);
      local_260 = *(undefined4 *)(iVar3 + 4);
      local_25c = *(undefined4 *)(iVar3 + 8);
      iVar3 = iVar2 + (uint)*puVar4 * 0xc;
      local_258 = *(undefined4 *)(iVar2 + (uint)*puVar4 * 0xc);
      local_254 = *(undefined4 *)(iVar3 + 4);
      local_250 = *(undefined4 *)(iVar3 + 8);
      puVar1 = (undefined4 *)(iVar2 + (uint)puVar4[-1] * 0xc);
      local_24c = *puVar1;
      local_248 = puVar1[1];
      local_244 = puVar1[2];
      iVar3 = _pshProjPoly(param_1,(m3dPOLY *)&local_274,param_4,local_180,&local_278);
      if (iVar3 != 0) {
        (**(code **)(*(int *)rendDrv + 0x40))(local_278,local_180,param_5);
      }
      puVar4 = puVar4 + 6;
      local_27c = local_27c + -1;
    } while (local_27c != 0);
  }
  return;
}




/* from: gs:proj_shd.cpp
   addr: 00502F90 */

void __thiscall
pshSHADOW_SYSTEM::RenderShdPoly(pshSHADOW_SYSTEM *this,camCAMERA *param_1,rendCFG *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  pshSHADOW_SYSTEM *ppVar4;
  int iVar5;
  rendVERTEX *prVar6;
  int *piVar7;
  int iVar8;
  pshSHADOW_SYSTEM *ppVar9;
  int local_2ac;
  int local_2a0;
  int iStack_29c;
  int *local_298;
  undefined **local_294;
  undefined4 local_290;
  float fStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  m3dPOLY local_274 [244];
  rendVERTEX arStack_180 [384];
  
  local_290 = 1;
  local_294 = &m3dBOX::_vftable_;
  local_2ac = 0;
  if (0 < *(int *)(this + 0x19c)) {
    ppVar4 = this + 0x1a0;
    do {
      **(uint **)ppVar4 = **(uint **)ppVar4 & 0xffefffff;
      puVar3 = *(uint **)ppVar4;
      uVar1 = *puVar3;
      if ((((uVar1 & 0x20000) == 0) && ((uVar1 & 0x40000) != 0)) && (puVar3[0x52] != 0)) {
        if ((uVar1 & 0x800) == 0) {
          puVar3[0x39] = puVar3[0x31];
          puVar3[0x3a] = puVar3[0x32];
          puVar3[0x3b] = puVar3[0x33];
          puVar3[0x3c] = puVar3[0x34];
          puVar3[0x3d] = puVar3[0x35];
          puVar3[0x3e] = puVar3[0x36];
          puVar3[0x3f] = puVar3[0x37];
        }
        else {
          m3dBOX::CalcStart((m3dBOX *)(puVar3 + 0x38));
          iVar8 = *(int *)ppVar4;
          iVar5 = 0;
          if (0 < *(int *)(iVar8 + 0x148)) {
            do {
              m3dBOX::CalcUpdate((m3dBOX *)(iVar8 + 0xe0),
                                 (m3dBOX *)(*(int *)(*(int *)(iVar8 + 0x14c) + iVar5 * 4) + 0xc));
              iVar8 = *(int *)ppVar4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(iVar8 + 0x148));
          }
        }
        iVar8 = *(int *)ppVar4;
        bVar2 = false;
        piVar7 = (int *)(iVar8 + 0xe0);
        local_298 = piVar7;
        m3dBOX::CalcStart((m3dBOX *)(iVar8 + 0x100));
        local_2a0 = 0;
        do {
          (**(code **)(*piVar7 + 0x28))(local_2a0,local_274,0);
          iVar5 = _pshProjPoly(param_1,local_274,0,arStack_180,&iStack_29c);
          if ((iVar5 != 0) && (iVar5 = 0, 0 < iStack_29c)) {
            bVar2 = true;
            prVar6 = arStack_180;
            do {
              m3dBOX::CalcUpdate((m3dBOX *)(iVar8 + 0x100),(m3dV *)prVar6);
              iVar5 = iVar5 + 1;
              prVar6 = (rendVERTEX *)((m3dV *)prVar6 + 0x30);
              piVar7 = local_298;
            } while (iVar5 < iStack_29c);
          }
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < 6);
        *(undefined4 *)(iVar8 + 0x110) = 0;
        *(undefined4 *)(iVar8 + 0x11c) = 0x3f800000;
        if (!bVar2) {
          puVar3 = *(uint **)ppVar4;
          goto LAB_00503142;
        }
      }
      else {
LAB_00503142:
        *puVar3 = *puVar3 | 0x100000;
      }
      local_2ac = local_2ac + 1;
      ppVar4 = ppVar4 + 4;
    } while (local_2ac < *(int *)(this + 0x19c));
  }
  local_2ac = 0;
  if (0 < *(int *)(this + 0x19c)) {
    ppVar4 = this + 0x1a0;
    do {
      uVar1 = **(uint **)ppVar4;
      if ((uVar1 & 0x100000) == 0) {
        **(uint **)ppVar4 = uVar1 | 0x100000;
        iVar8 = *(int *)ppVar4;
        local_290 = *(undefined4 *)(iVar8 + 0x104);
        fStack_28c = *(float *)(iVar8 + 0x108);
        fStack_288 = *(float *)(iVar8 + 0x10c);
        uStack_284 = *(undefined4 *)(iVar8 + 0x110);
        fStack_280 = *(float *)(iVar8 + 0x114);
        fStack_27c = *(float *)(iVar8 + 0x118);
        uStack_278 = *(undefined4 *)(iVar8 + 0x11c);
        do {
          iVar8 = 0;
          ppVar9 = this + 0x1a0;
          while( true ) {
            if (*(int *)(this + 0x19c) <= iVar8) {
              rendDRIVER::RenderQuad
                        (rendDrv,param_1,fStack_280,fStack_27c,0.0,0.0,fStack_28c,fStack_288,0.0,0.0
                         ,10.0,param_2);
              goto LAB_0050326f;
            }
            if (((**(uint **)ppVar9 & 0x100000) == 0) &&
               (iVar5 = m3dBOX::IsIsectBox((m3dBOX *)&local_294,(m3dBOX *)(*(uint **)ppVar9 + 0x40))
               , iVar5 == 0)) break;
            iVar8 = iVar8 + 1;
            ppVar9 = ppVar9 + 4;
          }
          **(uint **)(this + iVar8 * 4 + 0x1a0) = **(uint **)(this + iVar8 * 4 + 0x1a0) | 0x100000;
          m3dBOX::CalcUpdate((m3dBOX *)&local_294,
                             (m3dBOX *)(*(int *)(this + iVar8 * 4 + 0x1a0) + 0x100));
        } while( true );
      }
LAB_0050326f:
      local_2ac = local_2ac + 1;
      ppVar4 = ppVar4 + 4;
    } while (local_2ac < *(int *)(this + 0x19c));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd.cpp
   addr: 005032A0 */

int __fastcall
_pshProjPoly(camCAMERA *param_1,m3dPOLY *param_2,int param_3,rendVERTEX *param_4,int *param_5)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  camCAMERA *pcVar7;
  m3dPOLY *pmVar8;
  rendVERTEX *prVar9;
  m3dPOLY *pmVar10;
  float local_11c;
  m3dV *local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  m3dPOLY local_f4 [244];
  
  if (param_3 == 0) {
    local_114 = (m3dV *)0x0;
    pcVar7 = param_1 + 0x1bc;
    do {
      iVar6 = *(int *)param_2;
      if (6 < iVar6) {
        iVar6 = 7;
      }
      *(int *)param_2 = iVar6;
      local_100 = -*(float *)(pcVar7 + -8);
      local_fc = -*(float *)(pcVar7 + -4);
      local_f8 = -*(float *)pcVar7;
      iVar6 = m3dClipPolyPlane(param_2,(m3dV *)(param_1 + 0x1f0),(m3dV *)&local_100,local_f4);
      if (iVar6 == 1) {
        return 0;
      }
      local_114 = (m3dV *)((int)local_114 + 1);
      pcVar7 = pcVar7 + 0xc;
      pmVar8 = local_f4;
      pmVar10 = param_2;
      for (iVar6 = 0x3d; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pmVar10 = *(undefined4 *)pmVar8;
        pmVar8 = pmVar8 + 4;
        pmVar10 = pmVar10 + 4;
      }
    } while ((int)local_114 < 4);
  }
  iVar6 = 0;
  if (0 < *(int *)param_2) {
    local_114 = (m3dV *)(param_2 + 4);
    prVar9 = param_4 + 8;
    do {
      camCAMERA::TransformPoint(param_1,local_114,(m3dV *)&local_10c);
      fVar4 = *(float *)(param_1 + 0x80) / (local_104 + ___real_3a83126f);
      fVar5 = (local_10c * fVar4 - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
              *(float *)(param_1 + 0x13c);
      local_11c = *(float *)(param_1 + 0x144);
      fVar1 = *(float *)(param_1 + 0x13c);
      fVar3 = fVar1;
      if (local_11c < fVar1) {
        fVar3 = local_11c;
        local_11c = fVar1;
      }
      if ((fVar3 <= fVar5) && (fVar3 = fVar5, local_11c < fVar5)) {
        fVar3 = local_11c;
      }
      *(float *)(prVar9 + -8) = fVar3;
      fVar5 = ((*(float *)(param_1 + 0x138) - local_108 * fVar4) + *(float *)(param_1 + 0x130)) *
              *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140);
      local_11c = *(float *)(param_1 + 0x148);
      fVar1 = *(float *)(param_1 + 0x140);
      fVar3 = fVar1;
      if (local_11c < fVar1) {
        fVar3 = local_11c;
        local_11c = fVar1;
      }
      if ((fVar3 <= fVar5) && (fVar3 = fVar5, local_11c < fVar5)) {
        fVar3 = local_11c;
      }
      *(float *)(prVar9 + -4) = fVar3;
      bVar2 = ___real_00000000 <= fVar4;
      *(float *)prVar9 = local_104;
      fVar1 = ___real_00000000;
      if ((bVar2) && (fVar1 = fVar4, ___real_3f800000 < fVar4)) {
        fVar1 = ___real_3f800000;
      }
      *(float *)(prVar9 + 4) = fVar1;
      *(undefined4 *)(prVar9 + 8) = 0xffffffff;
      *(undefined4 *)(prVar9 + 0xc) = 0;
      iVar6 = iVar6 + 1;
      local_114 = local_114 + 0xc;
      prVar9 = prVar9 + 0x30;
    } while (iVar6 < *(int *)param_2);
  }
  *param_5 = *(int *)param_2;
  return 1;
}




/* from: gs:proj_shd.cpp
   addr: 00503510
   addr: 00503510 */

void * __thiscall pshOBJ_USR_DATA::_scalar_deleting_destructor_(pshOBJ_USR_DATA *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  Term(this);
  *(undefined ***)this = &objUSR_DATA::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

