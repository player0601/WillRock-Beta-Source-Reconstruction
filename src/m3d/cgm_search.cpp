
/* from: m3d:cgm_search.cpp
   addr: 00565A20 */

int __thiscall cgmSEARCH::Init(cgmSEARCH *this,int param_1,int param_2,void *param_3,int *param_4)

{
  void *pvVar1;
  int iVar2;
  
  *(void **)(this + 0x18) = param_3;
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 8) = param_1;
  if (param_4 == (int *)0x0) {
    pvVar1 = operator_new(param_1 * 4);
    *(void **)(this + 0xc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  }
  else {
    *(int **)(this + 0xc) = param_4;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 8)) {
    do {
      *(int *)(*(int *)(this + 0xc) + iVar2 * 4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 8));
  }
  DAT_00963a3c = this;
  qsort(*(void **)(this + 0xc),*(size_t *)(this + 8),4,QSortCB);
  return 1;
}




/* from: m3d:cgm_search.cpp
   addr: 00565AB0 */

int __thiscall cgmSEARCH::Search(cgmSEARCH *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = *(int *)(this + 8) + -1;
  iVar1 = iVar2;
  do {
    if (iVar2 < 3) {
      if (param_2 != -1) {
        iVar4 = iVar1;
      }
      return iVar4;
    }
    iVar5 = (iVar1 + iVar4) / 2;
    iVar2 = (**(code **)(*(int *)this + 0x10))
                      (*(int *)(*(int *)(this + 0xc) + iVar5 * 4) * *(int *)(this + 0x10) +
                       *(int *)(this + 0x18) + *(int *)(this + 0x14),param_1);
    if (param_2 == -1) {
      iVar3 = iVar5;
      if (iVar2 == -1) {
LAB_00565b0a:
        iVar3 = iVar1;
        iVar4 = iVar5;
      }
    }
    else {
      iVar3 = iVar1;
      if ((param_2 == 1) && (iVar3 = iVar5, iVar2 != 1)) goto LAB_00565b0a;
    }
    iVar2 = iVar3 - iVar4;
    iVar1 = iVar3;
  } while( true );
}




/* from: m3d:cgm_search.cpp
   addr: 00565B30 */

void __thiscall cgmSEARCH::Term(cgmSEARCH *this)

{
  if (((byte)this[4] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_search.cpp
   addr: 00565B60 */

int __thiscall
cgmSEARCH_VLIST::Init(cgmSEARCH_VLIST *this,int param_1,int param_2,void *param_3,int *param_4)

{
  m3dV *pmVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_2c [3];
  undefined **local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (*(int *)(this + 0x1c) == -1) {
    *(uint *)(this + 0x1c) = (uint)param_2 >> 2;
  }
  if (param_1 < 2) {
    *(undefined4 *)(this + 0x20) = _m3dVUnitY;
    *(undefined4 *)(this + 0x24) = DAT_005f9994;
    *(undefined4 *)(this + 0x28) = DAT_005f9998;
  }
  else {
    local_2c[0] = _m3dVZero;
    local_2c[1] = DAT_00963740;
    local_2c[2] = DAT_00963744;
    m3dBOX::CalcStart((m3dBOX *)&local_20);
    if (0 < param_1) {
      iVar7 = 0;
      iVar6 = param_1;
      do {
        iVar2 = *(int *)(this + 0x1c);
        iVar5 = 0;
        if (0 < iVar2) {
          puVar4 = (undefined4 *)(*(int *)(this + 0x14) + iVar7 + (int)param_3);
          do {
            local_2c[iVar5] = *puVar4;
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar5 < iVar2);
        }
        m3dBOX::CalcUpdate((m3dBOX *)&local_20,(m3dV *)local_2c);
        iVar7 = iVar7 + param_2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    pmVar1 = (m3dV *)(this + 0x20);
    *(float *)pmVar1 = local_c - local_18;
    *(float *)(this + 0x24) = local_8 - local_14;
    *(float *)(this + 0x28) = local_4 - local_10;
    iVar6 = _m3dNormalize(pmVar1);
    if (iVar6 == 0) {
      *(undefined4 *)pmVar1 = _m3dVUnitY;
      *(undefined4 *)(this + 0x24) = DAT_005f9994;
      *(undefined4 *)(this + 0x28) = DAT_005f9998;
    }
  }
  uVar3 = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x2c) = 0;
  iVar6 = cgmSEARCH::Init((cgmSEARCH *)this,param_1,param_2,param_3,param_4);
  if (iVar6 != 0) {
    *(undefined4 *)(this + 0x2c) = uVar3;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_search.cpp
   addr: 00565CB0 */

void __thiscall cgmSEARCH_VLIST::Term(cgmSEARCH_VLIST *this)

{
  if (((byte)this[4] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x20) = _m3dVZero;
  *(undefined4 *)(this + 0x24) = DAT_00963740;
  *(undefined4 *)(this + 0x28) = DAT_00963744;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_search.cpp
   addr: 00565D00 */

int __thiscall cgmSEARCH_VLIST::CmpItem(cgmSEARCH_VLIST *this,void *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  cgmSEARCH_VLIST *pcVar3;
  float *pfVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0x1c);
  fVar1 = ___real_00000000;
  fVar2 = ___real_00000000;
  if (0 < iVar5) {
    pcVar3 = this + 0x20;
    pfVar4 = (float *)param_2;
    do {
      iVar5 = iVar5 + -1;
      fVar2 = *(float *)(((int)param_1 - (int)param_2) + (int)pfVar4) * *(float *)pcVar3 + fVar2;
      fVar1 = *(float *)pcVar3 * *pfVar4 + fVar1;
      pcVar3 = pcVar3 + 4;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 != 0);
  }
  if (fVar1 - *(float *)(this + 0x2c) <= fVar2) {
    if (fVar2 <= fVar1 + *(float *)(this + 0x2c)) {
      return 0;
    }
    return 1;
  }
  return -1;
}




/* from: m3d:cgm_search.cpp
   addr: 00565D80 */

int __thiscall cgmSEARCH_INT_LIST::CmpItem(cgmSEARCH_INT_LIST *this,void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 == 1) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = (int)*param_1;
                    /* WARNING: Load size is inaccurate */
    iVar2 = (int)*param_2;
  }
  else if (iVar1 == 2) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = (int)*param_1;
                    /* WARNING: Load size is inaccurate */
    iVar2 = (int)*param_2;
  }
  else {
    if (iVar1 != 4) goto LAB_00565dbc;
                    /* WARNING: Load size is inaccurate */
    iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
    iVar2 = *param_2;
  }
  param_1 = (void *)(iVar1 - iVar2);
LAB_00565dbc:
  if ((int)param_1 < 0) {
    return -1;
  }
  return (uint)(0 < (int)param_1);
}




/* from: m3d:cgm_search.cpp
   addr: 00565DE0 */

int __cdecl cgmSEARCH::QSortCB(void *param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*DAT_00963a3c + 0x10))
                    (*param_1 * DAT_00963a3c[4] + DAT_00963a3c[5] + DAT_00963a3c[6],
                     *param_2 * DAT_00963a3c[4] + DAT_00963a3c[5] + DAT_00963a3c[6]);
  return iVar1;
}

