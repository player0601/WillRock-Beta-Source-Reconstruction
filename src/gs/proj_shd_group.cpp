
/* from: gs:proj_shd_group.cpp
   addr: 0052A210 */

int __thiscall pshOBJ_USR_DATA::Init(pshOBJ_USR_DATA *this,objOBJ *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_54;
  int local_48;
  undefined **local_3c [3];
  int local_30;
  int local_2c;
  
  cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)local_3c);
  local_3c[0] = &cgmWED::_vftable_;
  iVar5 = cgmWED::Init((cgmWED *)local_3c,param_1);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = 0;
  *(undefined4 *)(this + 8) = 0;
  if (0 < local_30) {
    piVar7 = (int *)(local_2c + 0x1c);
    iVar8 = local_30;
    do {
      if (*piVar7 == 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + *piVar7 + 2;
      }
      piVar7 = piVar7 + 9;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  pvVar6 = apMalloc(*(int *)(this + 8) << 2);
  *(void **)(this + 0xc) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0;
  }
  pvVar6 = apMalloc(*(int *)(this + 8) << 2);
  *(void **)(this + 0x10) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0;
  }
  iVar8 = 0;
  local_48 = 0;
  if (0 < local_30) {
    do {
      iVar10 = *(int *)(iVar5 + 0x1c + local_2c);
      if (iVar10 == 0) {
        *(undefined2 *)(*(int *)(this + 0xc) + iVar8 * 4) =
             *(undefined2 *)(*(int *)(iVar5 + 0x10 + local_2c) + 4);
        *(undefined2 *)(*(int *)(this + 0xc) + 2 + iVar8 * 4) = 0xffff;
        iVar10 = *(int *)(iVar5 + 0x14 + local_2c);
        if (iVar10 != 0) {
          *(undefined2 *)(*(int *)(this + 0xc) + 2 + iVar8 * 4) = *(undefined2 *)(iVar10 + 4);
        }
        iVar8 = iVar8 + 1;
        *(undefined2 *)(*(int *)(this + 0x10) + -4 + iVar8 * 4) =
             *(undefined2 *)(*(int *)(iVar5 + 8 + local_2c) + 4);
        *(undefined2 *)(*(int *)(this + 0x10) + -2 + iVar8 * 4) =
             *(undefined2 *)(*(int *)(iVar5 + 0xc + local_2c) + 4);
      }
      else {
        local_54 = 0;
        if (iVar10 != -2 && -1 < iVar10 + 2) {
          do {
            if (local_54 == 0) {
              iVar10 = *(int *)(iVar5 + 0x10 + local_2c);
            }
            else if (local_54 == 1) {
              iVar10 = *(int *)(iVar5 + 0x14 + local_2c);
            }
            else {
              iVar10 = *(int *)(*(int *)(iVar5 + 0x20 + local_2c) + -8 + local_54 * 4);
            }
            iVar11 = 0;
            *(undefined2 *)(*(int *)(this + 0xc) + iVar8 * 4) = *(undefined2 *)(iVar10 + 4);
            *(undefined2 *)(*(int *)(this + 0xc) + 2 + iVar8 * 4) = 0xffff;
            iVar3 = **(int **)(param_1 + 0x28);
            iVar10 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * *(int *)(iVar10 + 4);
            uVar4 = *(uint *)(*(int *)(iVar5 + 8 + local_2c) + 4);
            do {
              iVar9 = iVar11 % 3;
              iVar11 = iVar11 + 1;
              uVar1 = *(ushort *)(iVar3 + 2 + iVar9 * 2 + iVar10);
              uVar2 = *(ushort *)(iVar3 + 2 + (iVar11 % 3) * 2 + iVar10);
              if (((uVar1 == uVar4) ||
                  ((uint)uVar1 == *(uint *)(*(int *)(iVar5 + 0xc + local_2c) + 4))) &&
                 ((uVar2 == uVar4 ||
                  ((uint)uVar2 == *(uint *)(*(int *)(iVar5 + 0xc + local_2c) + 4))))) break;
            } while (iVar11 < 3);
            iVar8 = iVar8 + 1;
            *(ushort *)(*(int *)(this + 0x10) + -4 + iVar8 * 4) = uVar1;
            *(ushort *)(*(int *)(this + 0x10) + -2 + iVar8 * 4) = uVar2;
            local_54 = local_54 + 1;
          } while (local_54 < *(int *)(iVar5 + 0x1c + local_2c) + 2);
        }
      }
      local_48 = local_48 + 1;
      iVar5 = iVar5 + 0x24;
    } while (local_48 < local_30);
  }
  cgmWED_SYS::Term((cgmWED_SYS *)local_3c);
  return 1;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A480 */

void __thiscall pshOBJ_USR_DATA::Term(pshOBJ_USR_DATA *this)

{
  if (((byte)this[4] & 1) == 0) {
    apFree(*(void **)(this + 0xc));
    apFree(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A4B0 */

objUSR_DATA * __thiscall pshOBJ_USR_DATA::Duplicate(pshOBJ_USR_DATA *this,int param_1)

{
  objUSR_DATA *poVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  poVar1 = (objUSR_DATA *)operator_new(0x14);
  if (poVar1 != (objUSR_DATA *)0x0) {
    *(undefined4 *)(poVar1 + 4) = 0;
    *(undefined4 *)(poVar1 + 8) = 0;
    *(undefined4 *)(poVar1 + 0xc) = 0;
    *(undefined4 *)(poVar1 + 0x10) = 0;
    *(undefined ***)poVar1 = &_vftable_;
    *(undefined4 *)(poVar1 + 8) = *(undefined4 *)(this + 8);
    if (param_1 != 0) {
      *(undefined4 *)(poVar1 + 0xc) = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(poVar1 + 0x10) = *(undefined4 *)(this + 0x10);
      *(uint *)(poVar1 + 4) = *(uint *)(poVar1 + 4) | 1;
      return poVar1;
    }
    pvVar2 = apMalloc(*(int *)(this + 8) << 2);
    *(void **)(poVar1 + 0xc) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return (objUSR_DATA *)0x0;
    }
    pvVar2 = apMalloc(*(int *)(this + 8) << 2);
    *(void **)(poVar1 + 0x10) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar5 = *(undefined4 **)(this + 0xc);
      puVar6 = *(undefined4 **)(poVar1 + 0xc);
      for (uVar3 = *(uint *)(this + 8) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = *(undefined4 **)(this + 0x10);
      puVar6 = *(undefined4 **)(poVar1 + 0x10);
      for (uVar3 = *(uint *)(this + 8) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      return poVar1;
    }
  }
  return (objUSR_DATA *)0x0;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A580 */

pshOBJ_GROUP * __thiscall pshOBJ_GROUP::pshOBJ_GROUP(pshOBJ_GROUP *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)(this + 0x3c) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0xc4) = 1;
  *(undefined ***)(this + 0xc0) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0xe4) = 1;
  *(undefined ***)(this + 0xe0) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x104) = 1;
  *(undefined ***)(this + 0x100) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 300) = 1;
  *(undefined ***)(this + 0x128) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0xffffffff;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0xffffffff;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(void **)(this + 0x10) = (void *)0x0;
  *(undefined4 *)(this + 0x14) = DAT_005dd0ec;
  *(undefined4 *)(this + 0x1c) = DAT_005dd0ec;
  *(undefined4 *)(this + 0x20) = 0x41200000;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0;
  *(void **)(this + 0x14c) = (void *)0x0;
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x150),0x40,0x23,(void **)(this + 0x10),0,0);
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x16c),4,0x23,(void **)(this + 0x14c),0,0);
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x34) = 0x3e4ccccd;
  uVar1 = DAT_005dd0ec;
  *(undefined4 *)(this + 0x24) = 0x41c80000;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x28) = 3;
  return this;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A690 */

void __thiscall pshOBJ_GROUP::~pshOBJ_GROUP(pshOBJ_GROUP *this)

{
  apFree(*(void **)(this + 8));
  apFree(*(void **)(this + 0x10));
  apFree(*(void **)(this + 0x14c));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x16c));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x150));
  *(undefined ***)(this + 0x128) = &m3dVOL::_vftable_;
  *(undefined ***)(this + 0x100) = &m3dVOL::_vftable_;
  *(undefined ***)(this + 0xe0) = &m3dVOL::_vftable_;
  *(undefined ***)(this + 0xc0) = &m3dVOL::_vftable_;
  *(undefined ***)(this + 0x3c) = &m3dVOL::_vftable_;
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A6F0 */

int __thiscall pshOBJ_GROUP::Alloc(pshOBJ_GROUP *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = apRealloc(*(void **)(this + 8),param_2 * 4);
  *(void **)(this + 8) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar2 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x150),param_1 - *(int *)(this + 0xc));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x16c),param_1 - *(int *)(this + 0xc));
  return (uint)(iVar2 != 0);
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A760 */

int __thiscall pshOBJ_GROUP::Add(pshOBJ_GROUP *this,animINST *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc);
  pvVar1 = apRealloc(*(void **)(this + 8),(*(int *)(this + 4) + 1) * 4);
  *(void **)(this + 8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x150),iVar3 - *(int *)(this + 0xc));
    if (iVar2 != 0) {
      iVar3 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x16c),iVar3 - *(int *)(this + 0xc));
      if (iVar3 != 0) {
        *(animINST **)(*(int *)(this + 8) + *(int *)(this + 4) * 4) = param_1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        iVar3 = Add(this,*(objOBJ **)(param_1 + 0x10),param_2);
        return iVar3;
      }
    }
  }
  return 0;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052A7E0 */

int __thiscall pshOBJ_GROUP::Add(pshOBJ_GROUP *this,objOBJ *param_1,int param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  objOBJ *poVar6;
  pshOBJ_USR_DATA *ppVar7;
  uint *puVar8;
  
  poVar1 = param_1;
  iVar3 = 0;
  if (param_1 != (objOBJ *)0x0) {
    poVar6 = param_1 + 0xf0;
    param_1 = (objOBJ *)(uint)(0 < *(int *)(param_1 + 0x10));
    if (*(psSHEET **)poVar6 != (psSHEET *)0x0) {
      psSHEET::GetBool(*(psSHEET **)poVar6,s_PROJ_SHD,s_isCast,(int *)&param_1);
    }
    if (param_1 != (objOBJ *)0x0) {
      iVar3 = *(int *)(this + 0xc);
      pvVar4 = apRealloc(*(void **)(this + 8),*(int *)(this + 4) << 2);
      *(void **)(this + 8) = pvVar4;
      if (((pvVar4 == (void *)0x0) ||
          (iVar5 = dsDYN_ARRAY::AddEntry
                             ((dsDYN_ARRAY *)(this + 0x150),(iVar3 + 1) - *(int *)(this + 0xc)),
          iVar5 == 0)) ||
         (iVar3 = dsDYN_ARRAY::AddEntry
                            ((dsDYN_ARRAY *)(this + 0x16c),(iVar3 + 1) - *(int *)(this + 0xc)),
         iVar3 == 0)) {
        return 0;
      }
      puVar8 = (uint *)(*(int *)(this + 0xc) * 0x40 + *(int *)(this + 0x10));
      puVar8[1] = (uint)poVar1;
      puVar8[2] = (uint)DAT_005dd0ec;
      if (*(psSHEET **)(poVar1 + 0xf0) != (psSHEET *)0x0) {
        psSHEET::GetFloat(*(psSHEET **)(poVar1 + 0xf0),s_PROJ_SHD,s_maxDist,(float *)(puVar8 + 2));
      }
      if (((byte)*this & 1) != 0) {
        if ((*(int *)(poVar1 + 0xe8) == 0) || (*(int *)(*(int *)(poVar1 + 0xe8) + param_2 * 4) == 0)
           ) {
          poVar6 = objGetTplObj(poVar1);
          if (poVar6 == (objOBJ *)0x0) {
            ppVar7 = (pshOBJ_USR_DATA *)operator_new(0x14);
            if (ppVar7 == (pshOBJ_USR_DATA *)0x0) {
              return 0;
            }
            *(undefined4 *)(ppVar7 + 4) = 0;
            *(undefined4 *)(ppVar7 + 8) = 0;
            *(undefined4 *)(ppVar7 + 0xc) = 0;
            *(undefined4 *)(ppVar7 + 0x10) = 0;
            *(undefined ***)ppVar7 = &pshOBJ_USR_DATA::_vftable_;
            iVar3 = pshOBJ_USR_DATA::Init(ppVar7,poVar1);
            if (iVar3 == 0) {
              return 0;
            }
          }
          else {
            if ((*(int *)(poVar6 + 0xe8) == 0) ||
               (ppVar7 = *(pshOBJ_USR_DATA **)(*(int *)(poVar6 + 0xe8) + param_2 * 4),
               ppVar7 == (pshOBJ_USR_DATA *)0x0)) {
              ppVar7 = (pshOBJ_USR_DATA *)operator_new(0x14);
              if (ppVar7 == (pshOBJ_USR_DATA *)0x0) {
                return 0;
              }
              *(undefined4 *)(ppVar7 + 4) = 0;
              *(undefined4 *)(ppVar7 + 8) = 0;
              *(undefined4 *)(ppVar7 + 0xc) = 0;
              *(undefined4 *)(ppVar7 + 0x10) = 0;
              *(undefined ***)ppVar7 = &pshOBJ_USR_DATA::_vftable_;
              iVar3 = pshOBJ_USR_DATA::Init(ppVar7,poVar1);
              if (iVar3 == 0) {
                return 0;
              }
              iVar3 = objOBJ::AddUsrData(poVar6,param_2,(objUSR_DATA *)ppVar7);
              if (iVar3 == 0) {
                return 0;
              }
            }
            ppVar7 = (pshOBJ_USR_DATA *)(**(code **)(*(int *)ppVar7 + 8))(1);
            if (ppVar7 == (pshOBJ_USR_DATA *)0x0) {
              return 0;
            }
          }
          iVar3 = objOBJ::AddUsrData(poVar1,param_2,(objUSR_DATA *)ppVar7);
          if (iVar3 == 0) {
            return 0;
          }
        }
        *puVar8 = *puVar8 | 4;
      }
      *(uint *)poVar1 = *(uint *)poVar1 | 0x4000;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    }
    bVar2 = false;
    poVar1 = *(objOBJ **)(poVar1 + 0x38);
    for (poVar6 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar6 != poVar1))));
        poVar6 = *(objOBJ **)(poVar6 + 0x30)) {
      Add(this,poVar6,param_2);
      bVar2 = true;
    }
    iVar3 = 1;
  }
  return iVar3;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052AA20 */

void __thiscall pshOBJ_GROUP::Del(pshOBJ_GROUP *this,objOBJ *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  objOBJ *poVar5;
  int iVar6;
  undefined4 *puVar7;
  objOBJ *local_8;
  int local_4;
  
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
  }
  iVar3 = *(int *)(this + 0xc);
  iVar6 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)(*(int *)(this + 0x10) + 4);
    do {
      if ((objOBJ *)*piVar1 == param_1) break;
      iVar6 = iVar6 + 1;
      piVar1 = piVar1 + 0x10;
    } while (iVar6 < iVar3);
  }
  if (iVar6 < iVar3) {
    *(uint *)param_1 = *(uint *)param_1 & 0xffffbfff;
    if (iVar6 < *(int *)(this + 0xc) + -1) {
      puVar4 = (undefined4 *)((iVar6 + 1) * 0x40 + *(int *)(this + 0x10));
      puVar7 = (undefined4 *)(iVar6 * 0x40 + *(int *)(this + 0x10));
      for (uVar2 = (uint)(((*(int *)(this + 0xc) - iVar6) + -1) * 0x40) >> 2; uVar2 != 0;
          uVar2 = uVar2 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    iVar3 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar3 + -1;
    *(undefined4 *)((iVar3 + -1) * 0x40 + 4 + *(int *)(this + 0x10)) = 0;
  }
  poVar5 = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
    poVar5 = local_8;
  }
  while ((poVar5 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar5))))) {
    Del(this,local_8);
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052AB10 */

void __thiscall pshOBJ_GROUP::Del(pshOBJ_GROUP *this,animINST *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  iVar3 = *(int *)(this + 4);
  if (0 < iVar3) {
    piVar1 = *(int **)(this + 8);
    do {
      if ((animINST *)*piVar1 == param_1) break;
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar5 < iVar3);
  }
  if (iVar5 != iVar3) {
    if (1 < iVar3) {
      Del(this,*(objOBJ **)(param_1 + 0x10));
      if (iVar5 < *(int *)(this + 4) + -1) {
        puVar4 = (undefined4 *)(*(int *)(this + 8) + 4 + iVar5 * 4);
        puVar6 = (undefined4 *)(*(int *)(this + 8) + iVar5 * 4);
        for (uVar2 = (*(int *)(this + 4) - iVar5) * 4 - 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      iVar3 = *(int *)(this + 4);
      *(int *)(this + 4) = iVar3 + -1;
      *(undefined4 *)(*(int *)(this + 8) + (iVar3 + -1) * 4) = 0;
      return;
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(*(int *)(this + 8) + *(int *)(this + 4) * 4) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_group.cpp
   addr: 0052ABB0 */

void __thiscall pshOBJ_GROUP::PrepareInst(pshOBJ_GROUP *this,m3dV *param_1,int param_2)

{
  m3dBOX *this_00;
  uint uVar1;
  animINST *paVar2;
  char *pcVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  float unaff_EBP;
  float unaff_ESI;
  ulonglong uVar8;
  undefined8 extraout_MM1;
  undefined8 uVar9;
  undefined8 uVar10;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fStack_34;
  float fStack_30;
  float local_2c [3];
  undefined **local_20;
  undefined4 local_1c;
  float fStack_14;
  float *pfStack_4;
  
  local_1c = 1;
  uVar1 = *(uint *)this;
  local_20 = &m3dBOX::_vftable_;
  *(uint *)this = uVar1 | 0x20000;
  if ((uVar1 & 1) == 0) {
    return;
  }
  this_00 = (m3dBOX *)(this + 0x3c);
  m3dBOX::CalcStart(this_00);
  iVar7 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      paVar2 = *(animINST **)(*(int *)(this + 8) + iVar7 * 4);
      uVar1 = *(uint *)(paVar2 + 4);
      if (((uVar1 & 3) == 0) && ((uVar1 & 0x2000000) == 0)) {
        animINST::GetBBox(paVar2,(m3dBOX *)&local_20);
        m3dBOX::CalcUpdate(this_00,(m3dBOX *)&local_20);
        *(uint *)this = *(uint *)this & 0xfffdffff;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 4));
  }
  if ((*(uint *)this & 0x20000) != 0) {
    return;
  }
  *(uint *)this = *(uint *)this | 0x20000;
  (**(code **)(*(int *)this_00 + 0x24))(local_2c);
  fVar12 = (*(float *)(this + 0x44) - *(float *)(this + 0x50)) *
           (*(float *)(this + 0x44) - *(float *)(this + 0x50)) +
           (*(float *)(this + 0x48) - *(float *)(this + 0x54)) *
           (*(float *)(this + 0x48) - *(float *)(this + 0x54)) +
           (*(float *)(this + 0x4c) - *(float *)(this + 0x58)) *
           (*(float *)(this + 0x4c) - *(float *)(this + 0x58));
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    fVar12 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
             (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) * fVar12;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (ulonglong)(uint)fVar12;
    uVar9 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar8);
    uVar10 = PackedFloatingMUL(uVar9,uVar9);
    uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
    uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
    uVar9 = PackedFloatingMUL(uVar9,uVar8);
    fVar12 = (float)uVar9;
    FastExitMediaState();
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  if ((fVar12 < ___real_00000000) || (___real_3ecccccd <= fVar12)) {
    if ((fVar12 < ___real_3f000000) || (___real_3f800000 <= fVar12)) {
      if ((fVar12 < ___real_3f800000) || (___real_40000000 <= fVar12)) {
        if ((fVar12 < ___real_40000000) || (___real_40c00000 <= fVar12)) {
          if (fVar12 < ___real_40c00000) goto LAB_0052ae59;
          fVar13 = ___real_42c80000;
          if (fVar12 <= ___real_41a00000) {
            fVar13 = (fVar12 - ___real_40c00000) * ___real_40824925 + ___real_422c0000;
          }
        }
        else {
          fVar13 = (fVar12 - ___real_40000000) * ___real_40500000 + ___real_41f00000;
        }
      }
      else {
        fVar13 = (fVar12 - ___real_3f800000) * ___real_40a00000 + ___real_41c80000;
      }
    }
    else {
      fVar13 = (fVar12 - ___real_3f000000) * ___real_41900000 + ___real_41800000;
    }
  }
  else {
    fVar13 = ___real_41800000;
    if (fVar12 <= ___real_3f000000) {
      fVar13 = fVar12 * ___real_41b00000 + ___real_40a00000;
    }
  }
  *(float *)(this + 0x14) = fVar13;
LAB_0052ae59:
  if (param_1 == (m3dV *)&DAT_00000002) {
    *(float *)(this + 0x14) = *(float *)(this + 0x14) * ___real_3f19999a;
  }
  fVar12 = *(float *)(this + 0x14) * ___real_40400000;
  *(undefined4 *)(this + 0x1c) = 0x40000000;
  *(float *)(this + 0x18) = fVar12;
  (**(code **)(*(int *)gsSysProjShd + 8))(this);
  pfVar4 = pfStack_4;
  if (*(float *)(this + 0x48) - *(float *)(this + 0x1c) <= pfStack_4[1]) {
    fVar12 = *pfStack_4;
    fVar13 = pfStack_4[1];
    fVar15 = pfStack_4[2];
    m3dNormalize((m3dV *)&stack0xffffffc0);
    pfStack_4 = *(float **)(this + 0x14);
    fVar13 = (fVar12 - fStack_34) * _m3dVUnitY +
             (fVar13 - fStack_30) * DAT_005f9994 + (fVar15 - local_2c[0]) * DAT_005f9998;
    fVar15 = (float)pfStack_4;
    if ((___real_00000000 <= fVar13) &&
       (fVar15 = *(float *)(this + 0x18), fVar13 <= ___real_3f800000)) {
      fVar15 = (*(float *)(this + 0x18) - (float)pfStack_4) * fVar13 + (float)pfStack_4;
    }
    iVar7 = (**(code **)(*(int *)this_00 + 0x10))(pfVar4,fVar15,0,0,0);
    if (iVar7 != 0) {
      iVar7 = 0;
      Var11 = extraout_ST1;
      if (0 < *(int *)(this + 4)) {
        do {
          paVar2 = *(animINST **)(*(int *)(this + 8) + iVar7 * 4);
          uVar1 = *(uint *)(paVar2 + 4);
          if (((uVar1 & 3) == 0) && ((uVar1 & 0x2000000) == 0)) {
            if (param_1 == (m3dV *)&DAT_00000002) {
              iVar5 = *(int *)(this + 0x28) + -1;
            }
            else {
              iVar5 = *(int *)(this + 0x28);
            }
            animINST::LODSetTemp(paVar2,iVar5,0);
            Var11 = extraout_ST1_00;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this + 4));
      }
      iVar7 = 0;
      if (0 < *(int *)(this + 0xc)) {
        iVar5 = 0;
        do {
          *(uint *)(*(int *)(this + 0x10) + iVar5) = *(uint *)(*(int *)(this + 0x10) + iVar5) | 1;
          if (((((*(byte *)(*(int *)(this + 0x10) + iVar5) & 4) != 0) &&
               (pcVar3 = *(char **)((byte *)(*(int *)(this + 0x10) + iVar5) + 4),
               (pcVar3[8] & 0x3fU) == 0)) &&
              ((*(int *)(pcVar3 + 0xbc) == 0 || ((*(byte *)(*(int *)(pcVar3 + 0xbc) + 4) & 3) == 0))
              )) && (-1 < *pcVar3)) {
            fVar13 = pfVar4[2] - (fVar12 - fStack_34);
            fStack_14 = (*pfVar4 - unaff_ESI) * (*pfVar4 - unaff_ESI) +
                        (pfVar4[1] - unaff_EBP) * (pfVar4[1] - unaff_EBP) + fVar13 * fVar13;
            if (m3dSimdType == 0) {
              fStack_14 = fStack_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar14 = rsqrtss(ZEXT416((uint)fStack_14),ZEXT416((uint)fStack_14));
              fVar13 = auVar14._0_4_;
              fStack_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_14 * fVar13 * fVar13
                          ) * fStack_14;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar8 = (ulonglong)(uint)fStack_14;
              uVar9 = PackedFloatingReciprocalSQRAprox((longlong)Var11,uVar8);
              uVar10 = PackedFloatingMUL(uVar9,uVar9);
              uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
              uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
              uVar9 = PackedFloatingMUL(uVar9,uVar8);
              Var11 = CONCAT28((short)((unkuint10)Var11 >> 0x40),uVar9);
              fStack_14 = (float)uVar9;
              FastExitMediaState();
            }
            else {
              fStack_14 = SQRT(fStack_14);
            }
            puVar6 = (uint *)(*(int *)(this + 0x10) + iVar5);
            if (fStack_14 <= (float)puVar6[2]) {
              *puVar6 = *puVar6 & 0xfffffffe;
              *(uint *)this = *(uint *)this & 0xfffdffff;
            }
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar7 < *(int *)(this + 0xc));
      }
    }
  }
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052B0F0 */

void __thiscall pshOBJ_GROUP::UnprepareInst(pshOBJ_GROUP *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      animINST::LODRestore(*(animINST **)(*(int *)(this + 8) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_group.cpp
   addr: 0052B120 */

int __thiscall pshOBJ_GROUP::FindFloor(pshOBJ_GROUP *this,m3dV *param_1)

{
  m3dBOX *this_00;
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *unaff_retaddr;
  float fVar6;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  cdtREFINE acStack_3c [4];
  undefined **local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  cdtINFO acStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_00963744;
  local_c = DAT_00963740;
  local_10 = _m3dVZero;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0.0;
  local_4 = 0;
  local_30 = 0.0;
  local_38 = &cdtREFINE::_vftable_;
  local_34 = 6;
  (**(code **)(*(int *)(this + 0x3c) + 0x24))(&local_2c);
  iVar4 = 0;
  iVar5 = 0;
  bVar2 = false;
  if (*(int *)(this + 4) < 1) {
LAB_0052b1be:
    iVar4 = scnSCENE::FloorPlace
                      (gsScenePtr,(m3dV *)&local_30,*(float *)(this + 0x20),(m3dV *)0x0,2.0,0.0,0,
                       acStack_3c,acStack_24);
    if (iVar4 == 0) goto LAB_0052b202;
  }
  else {
    do {
      iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(this + 8) + iVar5 * 4) + 0x13c) + 0x40))
                        (acStack_24);
      if ((iVar3 != 0) && (((byte)acStack_24[0] & 2) != 0)) {
        iVar4 = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 4));
    if (iVar4 == 0) goto LAB_0052b1be;
  }
  fStack_54 = local_14;
  fStack_50 = local_10;
  fStack_4c = local_c;
LAB_0052b202:
  if (((byte)*this & 0x40) != 0) {
    fVar6 = gsElapsedTime + *(float *)(this + 0x38);
    *(float *)(this + 0x38) = fVar6;
    if (fVar6 <= *(float *)(this + 0x34)) {
      if (iVar4 == 0) {
        return 0;
      }
      if ((float)(ABS(*(float *)(this + 0x34)) < _DAT_005dd0e8) == ___real_00000000) {
        fStack_5c = fStack_50 + *(float *)(this + 0x30);
        fStack_60 = fStack_54;
        fStack_58 = fStack_4c;
        bVar2 = true;
      }
    }
    else {
      *(undefined4 *)(this + 0x30) = 0;
      fVar6 = (*(float *)(this + 0x54) - *(float *)(this + 0x48)) * *(float *)(this + 0x2c) *
              ___real_3f000000;
      fStack_6c = _m3dVUnitY * fVar6 + local_30;
      fStack_68 = DAT_005f9994 * fVar6 + local_2c;
      fStack_64 = DAT_005f9998 * fVar6 + fStack_28;
      fStack_48 = fStack_6c - *unaff_retaddr;
      fStack_44 = fStack_68 - unaff_retaddr[1];
      fStack_40 = fStack_64 - unaff_retaddr[2];
      m3dNormalize((m3dV *)&fStack_48);
      fVar6 = DAT_005dd0ec;
      if (iVar4 != 0) {
        fVar6 = ((*(float *)(this + 0x54) - fStack_50) + *(float *)(this + 0x20)) * ___real_3fc00000
        ;
      }
      iVar5 = scnSCENE::ShootRay(gsScenePtr,(m3dV *)&fStack_6c,(m3dV *)&fStack_48,fVar6,0,acStack_3c
                                 ,acStack_24);
      if (iVar5 != 0) {
        fStack_5c = local_10;
        fStack_60 = local_14;
        fStack_58 = local_c;
        bVar2 = true;
        if ((char)*this < '\0') {
          fStack_6c = local_14 - fStack_48 * ___real_3e4ccccd;
          fStack_68 = local_10 - fStack_44 * ___real_3e4ccccd;
          fStack_64 = local_c - fStack_40 * ___real_3e4ccccd;
          iVar5 = scnSCENE::FloorPlace
                            (gsScenePtr,(m3dV *)&fStack_6c,fVar6,(m3dV *)0x0,0.0,0.0,0,acStack_3c,
                             acStack_24);
          if ((iVar5 != 0) && (local_10 <= fStack_5c)) {
            fStack_5c = local_10;
          }
        }
        if (iVar4 != 0) {
          *(float *)(this + 0x30) = fStack_5c - fStack_50;
        }
      }
      *(undefined4 *)(this + 0x38) = 0;
    }
  }
  if ((iVar4 == 0) && (!bVar2)) {
    return 0;
  }
  this_00 = (m3dBOX *)(this + 0x128);
  m3dBOX::CalcStart(this_00);
  if (iVar4 != 0) {
    m3dBOX::CalcUpdate(this_00,(m3dV *)&fStack_54);
  }
  if (bVar2) {
    m3dBOX::CalcUpdate(this_00,(m3dV *)&fStack_60);
  }
  if ((*(uint *)this & 0x400) != 0) {
    animINST::GetPos((animINST *)**(undefined4 **)(this + 8),(m3dV *)&fStack_6c);
    m3dBOX::CalcUpdate(this_00,(m3dV *)&fStack_6c);
  }
  if (*(float *)(this + 0x48) <= *(float *)(this + 0x134)) {
    fVar6 = *(float *)(this + 0x48);
  }
  else {
    fVar6 = *(float *)(this + 0x134);
  }
  uVar1 = *(uint *)this;
  *(float *)(this + 0x134) = fVar6 - ___real_3e4ccccd;
  *(float *)(this + 0x140) = *(float *)(this + 0x140) + ___real_3dcccccd;
  if (((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) && ((uVar1 & 0x100) != 0)) &&
     ((uVar1 & 0x200) == 0)) {
    if ((!bVar2) || ((float)___real_3fe0000000000000 < fStack_50 - fStack_5c)) {
      *(uint *)this = uVar1 & 0xfffffffe | 2;
    }
    *(uint *)this = *(uint *)this & 0xffffffbf | 0x200;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_group.cpp
   addr: 0052B530 */

int __thiscall pshOBJ_GROUP::FindCutPlaneTop(pshOBJ_GROUP *this,m3dV *param_1,camCAMERA *param_2)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  m3dV *pmVar4;
  pshOBJ_GROUP *ppVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float unaff_EBX;
  float unaff_EBP;
  ulonglong uVar11;
  undefined8 extraout_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 Var14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  pshOBJ_GROUP *local_10c;
  uint uStack_108;
  m3dV *pmStack_104;
  float local_100;
  m3dV amStack_fc [4];
  camCAMERA *local_f8;
  float local_f4 [59];
  float *pfStack_8;
  
  local_f8 = param_2 + 0x1f0;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)local_f8;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_2 + 0x1f8);
  local_100 = DAT_005dd0ec;
  local_10c = this;
  (**(code **)(*(int *)(this + 0xc0) + 0x28))(5,local_f4,0);
  uStack_108 = 2;
  do {
    uVar6 = uStack_108 - 2 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    pmVar1 = amStack_fc + uVar6 * 0xc;
    uVar7 = uStack_108 - 1 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    uVar8 = uStack_108 & 0x80000003;
    pmVar2 = amStack_fc + uVar7 * 0xc;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    pmVar3 = amStack_fc + uVar8 * 0xc;
    uStack_108 = uStack_108 + 1;
    uVar9 = uStack_108 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    pmVar4 = amStack_fc + uVar9 * 0xc;
    m3dGetPlaneNormal(pmVar1,pmVar2,pmStack_104,(m3dV *)&stack0xfffffeac);
    fVar16 = m3dAngleVector((m3dV *)&stack0xfffffeac,&m3dVUnitY);
    if (___real_42b40000 < fVar16) {
      unaff_EBP = -unaff_EBP;
      unaff_EBX = -unaff_EBX;
      fStack_14c = -fStack_14c;
    }
    (**(code **)(*(int *)(iStack_118 + 0xc0) + 0x24))(&fStack_124);
    fStack_120 = *(float *)(iStack_118 + 0xd8);
    Var14 = in_ST4;
    if ((fStack_124 - *(float *)(iStack_118 + 0x74)) * unaff_EBP +
        (fStack_120 - *(float *)(iStack_118 + 0x78)) * unaff_EBX +
        fStack_14c * (fStack_11c - *(float *)(iStack_118 + 0x7c)) <= _DAT_005dd0e8) {
      fStack_13c = *pfStack_8 - *(float *)pmVar3;
      fStack_138 = pfStack_8[1] - local_f4[uVar8 * 3 + -1];
      fStack_134 = pfStack_8[2] - local_f4[uVar8 * 3];
      m3dNormalize((m3dV *)&fStack_13c);
      iVar10 = _m3dIsectRayVNPlane(pmVar3,(m3dV *)&fStack_13c,(m3dV *)(iStack_118 + 0x74),
                                   (m3dV *)&stack0xfffffeac,(m3dV *)&fStack_148,(float *)0x0);
      if (iVar10 != 0) {
        fStack_13c = *pfStack_8 - *(float *)pmVar4;
        fStack_138 = pfStack_8[1] - local_f4[uVar9 * 3 + -1];
        fStack_134 = pfStack_8[2] - local_f4[uVar9 * 3];
        m3dNormalize((m3dV *)&fStack_13c);
        iVar10 = _m3dIsectRayVNPlane(pmVar4,(m3dV *)&fStack_13c,(m3dV *)(iStack_118 + 0x74),
                                     (m3dV *)&stack0xfffffeac,(m3dV *)&fStack_130,(float *)0x0);
        uVar12 = (undefined8)in_ST3;
        if (iVar10 != 0) {
          fVar16 = (*(float *)pmVar2 - *(float *)pmVar3) * (*(float *)pmVar2 - *(float *)pmVar3) +
                   (local_f4[uVar7 * 3 + -1] - local_f4[uVar8 * 3 + -1]) *
                   (local_f4[uVar7 * 3 + -1] - local_f4[uVar8 * 3 + -1]) +
                   (local_f4[uVar7 * 3] - local_f4[uVar8 * 3]) *
                   (local_f4[uVar7 * 3] - local_f4[uVar8 * 3]);
          if (m3dSimdType == 0) {
            fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar15._0_4_;
            fVar16 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar17 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar17 * fVar17) *
                     fVar16;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fVar16;
            uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar11);
            uVar13 = PackedFloatingMUL(uVar12,uVar12);
            uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
            uVar13 = PackedFloatingReciprocalIter2(uVar13,uVar12);
            uVar13 = PackedFloatingMUL(uVar13,uVar11);
            fVar16 = (float)uVar13;
            FastExitMediaState();
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          fStack_114 = m3dDistPointLine((m3dV *)&fStack_148,pmVar2,pmVar3);
          fStack_114 = fStack_114 * fVar16;
          fStack_110 = (*(float *)pmVar1 - *(float *)pmVar2) * (*(float *)pmVar1 - *(float *)pmVar2)
                       + (local_f4[uVar6 * 3 + -1] - local_f4[uVar7 * 3 + -1]) *
                         (local_f4[uVar6 * 3 + -1] - local_f4[uVar7 * 3 + -1]) +
                         (local_f4[uVar6 * 3] - local_f4[uVar7 * 3]) *
                         (local_f4[uVar6 * 3] - local_f4[uVar7 * 3]);
          if (m3dSimdType == 0) {
            fStack_110 = fStack_110 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fStack_110),ZEXT416((uint)fStack_110));
            fVar16 = auVar15._0_4_;
            fStack_110 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_110 * fVar16 * fVar16
                         ) * fStack_110;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fStack_110;
            uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar11);
            in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar12);
            uVar13 = PackedFloatingMUL(uVar12,uVar12);
            uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
            uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
            uVar12 = PackedFloatingMUL(uVar12,uVar11);
            fStack_110 = (float)uVar12;
            FastExitMediaState();
          }
          else {
            fStack_110 = SQRT(fStack_110);
          }
          uVar13 = (undefined8)in_ST3;
          fVar16 = (fStack_148 - fStack_130) * (fStack_148 - fStack_130) +
                   (fStack_144 - fStack_12c) * (fStack_144 - fStack_12c) +
                   (fStack_140 - fStack_128) * (fStack_140 - fStack_128);
          if (m3dSimdType == 0) {
            fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar15._0_4_;
            fVar16 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar17 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar17 * fVar17) *
                     fVar16;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fVar16;
            uVar13 = PackedFloatingReciprocalSQRAprox(uVar12,uVar11);
            uVar12 = PackedFloatingMUL(uVar13,uVar13);
            uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar11);
            uVar12 = PackedFloatingReciprocalIter2(uVar12,uVar13);
            uVar12 = PackedFloatingMUL(uVar12,uVar11);
            fVar16 = (float)uVar12;
            FastExitMediaState();
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          fVar17 = m3dDistPointLine((m3dV *)&fStack_148,pmVar1,pmVar2);
          fStack_114 = (fVar16 + fStack_110) * fVar17 + fStack_114;
          fStack_110 = (*(float *)pmVar3 - *(float *)pmVar4) * (*(float *)pmVar3 - *(float *)pmVar4)
                       + (local_f4[uVar8 * 3 + -1] - local_f4[uVar9 * 3 + -1]) *
                         (local_f4[uVar8 * 3 + -1] - local_f4[uVar9 * 3 + -1]) +
                         (local_f4[uVar8 * 3] - local_f4[uVar9 * 3]) *
                         (local_f4[uVar8 * 3] - local_f4[uVar9 * 3]);
          if (m3dSimdType == 0) {
            fStack_110 = fStack_110 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fStack_110),ZEXT416((uint)fStack_110));
            fVar16 = auVar15._0_4_;
            fStack_110 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_110 * fVar16 * fVar16
                         ) * fStack_110;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fStack_110;
            uVar12 = PackedFloatingReciprocalSQRAprox(uVar13,uVar11);
            in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar12);
            uVar13 = PackedFloatingMUL(uVar12,uVar12);
            uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
            uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
            uVar13 = PackedFloatingMUL(uVar12,uVar11);
            fStack_110 = (float)uVar13;
            FastExitMediaState();
          }
          else {
            fStack_110 = SQRT(fStack_110);
          }
          uVar12 = (undefined8)in_ST3;
          fVar16 = (fStack_148 - fStack_130) * (fStack_148 - fStack_130) +
                   (fStack_144 - fStack_12c) * (fStack_144 - fStack_12c) +
                   (fStack_140 - fStack_128) * (fStack_140 - fStack_128);
          if (m3dSimdType == 0) {
            fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar15._0_4_;
            fVar16 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar17 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar17 * fVar17) *
                     fVar16;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fVar16;
            uVar12 = PackedFloatingReciprocalSQRAprox(uVar13,uVar11);
            uVar13 = PackedFloatingMUL(uVar12,uVar12);
            uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
            uVar13 = PackedFloatingReciprocalIter2(uVar13,uVar12);
            uVar13 = PackedFloatingMUL(uVar13,uVar11);
            fVar16 = (float)uVar13;
            FastExitMediaState();
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          fVar17 = m3dDistPointLine((m3dV *)&fStack_148,pmVar3,pmVar4);
          fStack_114 = (fVar16 + fStack_110) * fVar17 + fStack_114;
          fVar16 = (*(float *)pmVar4 - *(float *)pmVar1) * (*(float *)pmVar4 - *(float *)pmVar1) +
                   (local_f4[uVar9 * 3 + -1] - local_f4[uVar6 * 3 + -1]) *
                   (local_f4[uVar9 * 3 + -1] - local_f4[uVar6 * 3 + -1]) +
                   (local_f4[uVar9 * 3] - local_f4[uVar6 * 3]) *
                   (local_f4[uVar9 * 3] - local_f4[uVar6 * 3]);
          if (m3dSimdType == 0) {
            fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar15._0_4_;
            fVar16 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar17 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar17 * fVar17) *
                     fVar16;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (ulonglong)(uint)fVar16;
            uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar11);
            uVar13 = PackedFloatingMUL(uVar12,uVar12);
            uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
            uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
            uVar12 = PackedFloatingMUL(uVar12,uVar11);
            fVar16 = (float)uVar12;
            FastExitMediaState();
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          in_ST4 = in_ST3;
          Var14 = in_ST3;
          fVar17 = m3dDistPointLine((m3dV *)&fStack_130,pmVar4,pmVar1);
          ppVar5 = (pshOBJ_GROUP *)(fVar17 * fVar16 + fStack_114);
          if ((float)ppVar5 < (float)local_10c) {
            *(float *)(iStack_118 + 0x80) = unaff_EBP;
            *(float *)(iStack_118 + 0x84) = unaff_EBX;
            *(float *)(iStack_118 + 0x88) = fStack_14c;
            local_10c = ppVar5;
          }
        }
      }
    }
    in_ST3 = in_ST4;
    in_ST4 = Var14;
  } while ((int)(uStack_108 - 2) < 4);
  if (DAT_005dd0ec * ___real_3f000000 <= (float)local_10c) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_group.cpp
   addr: 0052BC70 */

void __thiscall
pshOBJ_GROUP::Update(pshOBJ_GROUP *this,m3dBOX *param_1,m3dV *param_2,camCAMERA *param_3)

{
  m3dV *pmVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  m3dV *pmVar7;
  ulonglong uVar8;
  undefined8 extraout_MM1;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  m3dV amStack_c4 [4];
  float afStack_c0 [23];
  m3dV amStack_64 [4];
  float afStack_60 [24];
  
  *(uint *)this = *(uint *)this & 0xfffbffff;
  iVar4 = FindFloor(this,param_2);
  if (iVar4 == 0) {
    return;
  }
  (**(code **)(*(int *)(this + 0x3c) + 0x24))(&local_f4);
  m3dBOX::GetVertices((m3dBOX *)(this + 0x3c),amStack_c4);
  iVar4 = 0;
  do {
    *(float *)(amStack_64 + iVar4) = *(float *)(amStack_c4 + iVar4) - *(float *)param_2;
    *(float *)((int)afStack_60 + iVar4) =
         *(float *)((int)afStack_c0 + iVar4) - *(float *)(param_2 + 4);
    *(float *)((int)afStack_60 + iVar4 + 4) =
         *(float *)((int)afStack_c0 + iVar4 + 4) - *(float *)(param_2 + 8);
    m3dNormalize(amStack_64 + iVar4);
    iVar4 = iVar4 + 0xc;
  } while (iVar4 < 0x60);
  m3dBOX::CalcStart((m3dBOX *)(this + 0xc0));
  *(undefined4 *)(this + 0x120) = 0;
  iVar4 = 0;
  do {
    iVar5 = _m3dIsectRayVNPlane(param_2,amStack_64 + iVar4,(m3dV *)(this + 0x130),&m3dVUnitY,
                                (m3dV *)&fStack_104,(float *)0x0);
    if (iVar5 != 0) {
      fVar13 = *(float *)((int)afStack_c0 + iVar4) - fStack_100;
      fVar12 = *(float *)((int)afStack_c0 + iVar4 + 4) - fStack_fc;
      fVar12 = (*(float *)(amStack_c4 + iVar4) - fStack_104) *
               (*(float *)(amStack_c4 + iVar4) - fStack_104) + fVar13 * fVar13 + fVar12 * fVar12;
      uVar9 = extraout_MM1;
      if (m3dSimdType == 0) {
        fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar13 = auVar11._0_4_;
        fVar12 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) * fVar12;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar8 = (ulonglong)(uint)fVar12;
        uVar9 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar8);
        uVar10 = PackedFloatingMUL(uVar9,uVar9);
        uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
        uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
        uVar9 = PackedFloatingMUL(uVar9,uVar8);
        fVar12 = (float)uVar9;
        FastExitMediaState();
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      if (*(float *)(this + 0x120) <= fVar12) {
        fVar13 = *(float *)((int)afStack_c0 + iVar4) - fStack_100;
        fVar12 = *(float *)((int)afStack_c0 + iVar4 + 4) - fStack_fc;
        fVar12 = (*(float *)(amStack_c4 + iVar4) - fStack_104) *
                 (*(float *)(amStack_c4 + iVar4) - fStack_104) + fVar13 * fVar13 + fVar12 * fVar12;
        if (m3dSimdType == 0) {
          fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar13 = auVar11._0_4_;
          fVar12 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) * fVar12
          ;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = (ulonglong)(uint)fVar12;
          uVar9 = PackedFloatingReciprocalSQRAprox(uVar9,uVar8);
          uVar10 = PackedFloatingMUL(uVar9,uVar9);
          uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
          uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
          uVar9 = PackedFloatingMUL(uVar9,uVar8);
          fVar12 = (float)uVar9;
          FastExitMediaState();
        }
        else {
          fVar12 = SQRT(fVar12);
        }
      }
      else {
        fVar12 = *(float *)(this + 0x120);
      }
      *(float *)(this + 0x120) = fVar12;
      m3dBOX::CalcUpdate((m3dBOX *)(this + 0xc0),(m3dV *)&fStack_104);
    }
    iVar5 = _m3dIsectRayVNPlane(param_2,amStack_64 + iVar4,(m3dV *)(this + 0x13c),&m3dVUnitY,
                                (m3dV *)&fStack_104,(float *)0x0);
    if (iVar5 != 0) {
      m3dBOX::CalcUpdate((m3dBOX *)(this + 0xc0),(m3dV *)&fStack_104);
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 < 0x60);
  iVar4 = camCAMERA::QualBoxPOV((camCAMERA *)param_2,(m3dBOX *)(this + 0xc0));
  if (iVar4 == 1) {
    return;
  }
  *(uint *)this = *(uint *)this | 0x40000;
  animINST::GetPos((animINST *)**(undefined4 **)(this + 8),(m3dV *)&uStack_e0);
  *(undefined4 *)(this + 0x68) = _m3dVUnitY;
  *(undefined4 *)(this + 0x6c) = DAT_005f9994;
  *(undefined4 *)(this + 0x70) = DAT_005f9998;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x130);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x138);
  *(undefined4 *)(this + 0x98) = _m3dVUnitY;
  *(undefined4 *)(this + 0x9c) = DAT_005f9994;
  *(undefined4 *)(this + 0xa0) = DAT_005f9998;
  if (*(float *)(param_2 + 500) <= fStack_dc) {
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(this + 0xd4);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0xd8);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0xdc);
  }
  else {
    *(undefined4 *)(this + 0x8c) = uStack_e0;
    *(float *)(this + 0x90) = fStack_dc;
    *(undefined4 *)(this + 0x94) = uStack_d8;
  }
  pmVar7 = param_2 + 0x1f0;
  pmVar1 = (m3dV *)(this + 0xa8);
  *(float *)(this + 0x90) = *(float *)(this + 0x90) + ___real_3dcccccd;
  *(float *)pmVar1 = *(float *)pmVar7 - *(float *)param_2;
  *(float *)(this + 0xac) = *(float *)(param_2 + 500) - *(float *)(param_2 + 4);
  *(float *)(this + 0xb0) = *(float *)(param_2 + 0x1f8) - *(float *)(param_2 + 8);
  m3dNormalize(pmVar1);
  fStack_d4 = -*(float *)pmVar1;
  fStack_d0 = -*(float *)(this + 0xac);
  fStack_cc = -*(float *)(this + 0xb0);
  *(float *)(this + 0xb4) = fStack_f8 - *(float *)param_2;
  *(float *)(this + 0xb8) = local_f4 - *(float *)(param_2 + 4);
  *(float *)(this + 0xbc) = fStack_f0 - *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)(this + 0xb4));
  fStack_ec = fStack_f8 - *(float *)pmVar7;
  fStack_e8 = local_f4 - *(float *)(param_2 + 500);
  fStack_e4 = fStack_f0 - *(float *)(param_2 + 0x1f8);
  m3dNormalize((m3dV *)&fStack_ec);
  uVar2 = *(uint *)this;
  uVar6 = uVar2 & 0xffd7ffff;
  *(uint *)this = uVar6;
  uVar3 = *(uint *)((animINST *)**(undefined4 **)(this + 8) + 8);
  if ((uVar3 & 4) != 0) {
    return;
  }
  if ((uVar3 & 8) != 0) {
    *(uint *)this = uVar6 | 0x280000;
    return;
  }
  if ((uVar2 & 0x1000) == 0) {
    iVar4 = (**(code **)(*(int *)(this + 0x3c) + 0xc))(param_2,pmVar1,DAT_005dd0ec,0);
    if (iVar4 != 0) {
      if ((*(float *)(param_2 + 500) <= *(float *)(this + 0x54)) ||
         (iVar4 = (**(code **)(*(int *)(this + 0x3c) + 0xc))(pmVar7,&fStack_d4,DAT_005dd0ec,0,0,0),
         iVar4 != 0)) {
        *(uint *)this = *(uint *)this | 0x280000;
      }
      goto LAB_0052c22c;
    }
  }
  else {
    iVar4 = scnSCENE::IsectRayInst
                      (gsScenePtr,(animINST *)**(undefined4 **)(this + 8),pmVar7,(m3dV *)&fStack_d4,
                       DAT_005dd0ec,(cdtREFINE *)0x0,(cdtINFO *)0x0);
    if (iVar4 != 0) {
      *(uint *)this = *(uint *)this | 0x280000;
    }
  }
  iVar4 = (**(code **)(*(int *)(this + 0xc0) + 0x10))(pmVar7,DAT_005dd0ec,0,&fStack_108,0);
  if ((iVar4 == 2) || (fStack_108 < *(float *)(this + 0x24))) {
    pmVar1 = (m3dV *)(this + 0xb4);
    *(uint *)this = *(uint *)this | 0x200000;
    fVar12 = m3dAngleVector(pmVar1,&m3dVUnitY);
    if (___real_41f00000 <= ___real_43340000 - fVar12) {
      fVar12 = m3dAngleVector(pmVar1,&m3dVUnitY);
      fVar12 = ___real_43340000 - fVar12;
    }
    else {
      fVar12 = 30.0;
    }
    fStack_c8 = m3dAngleVector((m3dV *)&fStack_ec,pmVar1);
    fVar13 = m3dAngleVector((m3dV *)&fStack_ec,&m3dVUnitY);
    if ((fStack_c8 < fVar12) && (fVar13 < ___real_00000000)) {
      *(uint *)this = *(uint *)this & 0xffdfffff;
    }
  }
LAB_0052c22c:
  if ((((*(uint *)this & 0x200000) != 0) && ((*(uint *)this & 0x80000) == 0)) &&
     (iVar4 = FindCutPlaneTop(this,param_2,(camCAMERA *)param_2), iVar4 == 0)) {
    *(uint *)this = *(uint *)this & 0xffdfffff;
  }
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052C270 */

void __thiscall pshEXCLUDE_LIST::Add(pshEXCLUDE_LIST *this,pshOBJ_GROUP *param_1)

{
  if ((param_1 != (pshOBJ_GROUP *)0x0) && (*(int *)this < 500)) {
    *(pshOBJ_GROUP **)(this + *(int *)this * 4 + 4) = param_1;
    *(int *)this = *(int *)this + 1;
  }
  return;
}




/* from: gs:proj_shd_group.cpp
   addr: 0052C290 */

void __thiscall pshEXCLUDE_LIST::Del(pshEXCLUDE_LIST *this,pshOBJ_GROUP *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  pshEXCLUDE_LIST *ppVar4;
  pshEXCLUDE_LIST *ppVar5;
  pshEXCLUDE_LIST *ppVar6;
  pshEXCLUDE_LIST *ppVar7;
  
  iVar3 = 0;
  iVar2 = *(int *)this;
  if (0 < iVar2) {
    ppVar6 = this + 8;
    ppVar4 = this + 4;
    do {
      if (*(pshOBJ_GROUP **)ppVar4 == param_1) {
        if (iVar3 < iVar2 + -1) {
          ppVar5 = ppVar6;
          ppVar7 = ppVar4;
          for (uVar1 = (iVar2 - iVar3) * 4 - 4U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
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
        ppVar6 = ppVar6 + -4;
        iVar3 = iVar3 + -1;
        *(int *)this = *(int *)this + -1;
        ppVar4 = ppVar4 + -4;
      }
      iVar2 = *(int *)this;
      iVar3 = iVar3 + 1;
      ppVar6 = ppVar6 + 4;
      ppVar4 = ppVar4 + 4;
    } while (iVar3 < iVar2);
  }
  return;
}

