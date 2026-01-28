
/* from: engine:cdt_sys_anim.cpp
   addr: 004EBD40 */

void __thiscall cdtCOLL_ANIM::~cdtCOLL_ANIM(cdtCOLL_ANIM *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x40))(3);
  }
  *(undefined4 *)(this + 0x40) = 0;
  (**(code **)(*(int *)(this + 0x44) + 8))();
  operator_delete(*(void **)(this + 100));
  *(undefined4 *)(this + 100) = 0;
  operator_delete(*(void **)(this + 0x68));
  *(undefined4 *)(this + 0x68) = 0;
  operator_delete(*(void **)(this + 0x6c));
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined ***)(this + 0x44) = &lstNODE_CACHE<class_cdtCOLL_ANIM_NODE>::_vftable_;
  *(undefined ***)(this + 0x50) = &lstLIST_SIMPLE::_vftable_;
  *(undefined ***)(this + 0x14) = &m3dVOL::_vftable_;
  return;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EBDB0 */

int __thiscall
cdtCOLL_ANIM::InitData
          (cdtCOLL_ANIM *this,float param_1,float param_2,float param_3,int param_4,int param_5,
          int param_6,m3dBOX *param_7)

{
  voxGRID *this_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float extraout_EDX;
  
  this_00 = (voxGRID *)(this + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_7 + 4);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_7 + 8);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_7 + 0xc);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_7 + 0x10);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_7 + 0x14);
  fVar1 = *(float *)(param_7 + 0x18);
  *(float *)(this + 0x2c) = fVar1;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_7 + 0x1c);
  iVar2 = voxCalcNVoxel(param_1,fVar1);
  if (param_4 < iVar2) {
    iVar2 = param_4;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(int *)this_00 = iVar2;
  iVar2 = voxCalcNVoxel((float)param_4,param_2);
  if (param_5 < iVar2) {
    iVar2 = param_5;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(int *)(this + 0xc) = iVar2;
  iVar2 = voxCalcNVoxel((float)param_5,extraout_EDX);
  if (param_6 < iVar2) {
    iVar2 = param_6;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(int *)(this + 0x10) = iVar2;
  voxGRID::CalcVoxSize(this_00);
  iVar2 = voxGRID::GetNVoxels(this_00);
  uVar3 = (**(code **)(*(int *)this + 4))();
  piVar4 = (int *)operator_new(iVar2 * 8 + 4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar2;
    piVar4 = piVar4 + 1;
    piVar5 = piVar4;
    if (-1 < iVar2 + -1) {
      do {
        piVar5[1] = 0;
        *piVar5 = (int)&lstLIST_SIMPLE::_vftable_;
        iVar2 = iVar2 + -1;
        piVar5 = piVar5 + 2;
      } while (iVar2 != 0);
    }
  }
  *(int **)(this + 0x40) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)(this + 0x44) + 4))
                    (uVar3 * 8 + *(int *)(this + 0x10) * *(int *)this_00 * 6);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x60) = 0;
  pvVar6 = operator_new(uVar3 * 4);
  *(void **)(this + 100) = pvVar6;
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(uVar3);
    *(void **)(this + 0x68) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    puVar7 = (undefined4 *)operator_new(uVar3 * 0x18);
    *(undefined4 **)(this + 0x6c) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      for (uVar3 = uVar3 * 0x18 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EBF80 */

void * __thiscall lstLIST_SIMPLE::_vector_deleting_destructor_(lstLIST_SIMPLE *this,uint param_1)

{
  lstLIST_SIMPLE *plVar1;
  int iVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = &_vftable_;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  iVar2 = *(int *)(this + -4);
  plVar1 = this + iVar2 * 8;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = plVar1 + -8;
      iVar2 = iVar2 + -1;
      *(undefined ***)plVar1 = &_vftable_;
    } while (iVar2 != 0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this + -4);
  }
  return this + -4;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EBFE0 */

void __thiscall cdtCOLL_ANIM::Invalidate(cdtCOLL_ANIM *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(this + 0x60);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(this + 100);
    do {
      if (*piVar3 == param_1) {
        if (param_2 == 0) {
          return;
        }
        (*(int **)(this + 100))[iVar2] = -1;
        goto LAB_004ec02b;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_2 == 0) {
    *(int *)(*(int *)(this + 100) + iVar1 * 4) = param_1;
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    return;
  }
LAB_004ec02b:
  RemoveFromGrid(this,param_1);
  return;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EC040 */

void __thiscall cdtCOLL_ANIM::Validate(cdtCOLL_ANIM *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [4];
  int iStack_28;
  int iStack_24;
  undefined **local_20;
  undefined4 local_1c;
  m3dV amStack_18 [12];
  m3dV amStack_c [12];
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (*(int *)(this + 0x60) != 0) {
    local_4c = 0;
    if (0 < *(int *)(this + 0x60)) {
      do {
        iVar1 = *(int *)(*(int *)(this + 100) + local_4c * 4);
        if (iVar1 != -1) {
          iVar1 = (**(code **)(*(int *)this + 8))(iVar1,&local_20);
          if (iVar1 == 0) {
            RemoveFromGrid(this,*(int *)(*(int *)(this + 100) + local_4c * 4));
          }
          else {
            voxGRID::GetPosInd((voxGRID *)(this + 8),amStack_18,aiStack_38,aiStack_38 + 1,
                               aiStack_38 + 2,1);
            voxGRID::GetPosInd((voxGRID *)(this + 8),amStack_c,aiStack_38 + 3,&iStack_28,&iStack_24,
                               1);
            iVar1 = *(int *)(*(int *)(this + 100) + local_4c * 4);
            piVar5 = (int *)(*(int *)(this + 0x6c) + iVar1 * 0x18);
            if ((((aiStack_38[0] != *piVar5) || (aiStack_38[1] != piVar5[1])) ||
                (aiStack_38[2] != piVar5[2])) ||
               (((aiStack_38[3] != piVar5[3] || (iStack_28 != piVar5[4])) ||
                (iStack_24 != piVar5[5])))) {
              RemoveFromGrid(this,iVar1);
              iStack_44 = aiStack_38[0];
              iVar1 = aiStack_38[2];
              iVar2 = iStack_24;
              iVar3 = iStack_28;
              if (aiStack_38[0] <= aiStack_38[3]) {
                do {
                  iStack_40 = aiStack_38[1];
                  if (aiStack_38[1] <= iVar3) {
                    do {
                      if (iVar1 <= iVar2) {
                        iStack_3c = iVar1;
                        do {
                          iVar1 = *(int *)(this + 0xc);
                          iVar2 = *(int *)(this + 0x54);
                          iVar3 = *(int *)(this + 0x10);
                          (**(code **)(*(int *)(this + 0x50) + 0xc))(iVar2);
                          if (iVar2 != 0) {
                            *(undefined4 *)(iVar2 + 8) =
                                 *(undefined4 *)(*(int *)(this + 100) + local_4c * 4);
                            (**(code **)(*(int *)(*(int *)(this + 0x40) +
                                                 ((iVar1 * iStack_44 + iStack_40) * iVar3 +
                                                 iStack_3c) * 8) + 8))(iVar2);
                          }
                          iStack_3c = iStack_3c + 1;
                          iVar1 = aiStack_38[2];
                          iVar2 = iStack_24;
                          iVar3 = iStack_28;
                        } while (iStack_3c <= iStack_24);
                      }
                      iStack_40 = iStack_40 + 1;
                    } while (iStack_40 <= iVar3);
                  }
                  iStack_44 = iStack_44 + 1;
                } while (iStack_44 <= aiStack_38[3]);
              }
              piVar4 = aiStack_38;
              for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar5 = *piVar4;
                piVar4 = piVar4 + 1;
                piVar5 = piVar5 + 1;
              }
            }
          }
        }
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(this + 0x60));
    }
    *(undefined4 *)(this + 0x60) = 0;
  }
  return;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EC230 */

void __thiscall cdtCOLL_ANIM::RemoveFromGrid(cdtCOLL_ANIM *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(*(int *)(this + 0x6c) + param_1 * 0x18);
  puVar6 = (undefined4 *)(*(int *)(this + 0x6c) + param_1 * 0x18);
  if (-1 < iVar3) {
    if (iVar3 <= (int)puVar6[3]) {
      do {
        iVar5 = puVar6[1];
        if (iVar5 <= (int)puVar6[4]) {
          do {
            iVar4 = puVar6[2];
            if (iVar4 <= (int)puVar6[5]) {
              do {
                iVar2 = (*(int *)(this + 0xc) * iVar3 + iVar5) * *(int *)(this + 0x10) + iVar4;
                for (iVar1 = *(int *)(*(int *)(this + 0x40) + 4 + iVar2 * 8); iVar1 != 0;
                    iVar1 = *(int *)(iVar1 + 4)) {
                  if (*(int *)(iVar1 + 8) == param_1) {
                    (**(code **)(*(int *)(*(int *)(this + 0x40) + iVar2 * 8) + 0xc))(iVar1);
                    (**(code **)(*(int *)(this + 0x50) + 8))(iVar1);
                    break;
                  }
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 <= (int)puVar6[5]);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 <= (int)puVar6[4]);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= (int)puVar6[3]);
    }
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}




/* from: engine:cdt_sys_anim.cpp
   addr: 004EC2F0 */

void __thiscall
cdtCOLL_ANIM::MakeIndList(cdtCOLL_ANIM *this,m3dBOX *param_1,cdtOFL *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  Validate(this);
  uVar4 = (**(code **)(*(int *)this + 4))();
  puVar6 = *(undefined4 **)(this + 0x68);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  voxGRID::GetPosInd((voxGRID *)(this + 8),(m3dV *)(param_1 + 8),&iStack_c,&iStack_8,&iStack_4,1);
  voxGRID::GetPosInd((voxGRID *)(this + 8),(m3dV *)(param_1 + 0x14),&iStack_18,&iStack_14,&iStack_10
                     ,1);
  *(undefined4 *)param_2 = 0;
  for (; iVar2 = iStack_8, iStack_c <= iStack_18; iStack_c = iStack_c + 1) {
    for (; iVar3 = iStack_4, iVar2 <= iStack_14; iVar2 = iVar2 + 1) {
      for (; iVar3 <= iStack_10; iVar3 = iVar3 + 1) {
        for (iVar1 = *(int *)(*(int *)(this + 0x40) + 4 +
                             ((*(int *)(this + 0xc) * iStack_c + iVar2) * *(int *)(this + 0x10) +
                             iVar3) * 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          if (*(char *)(*(int *)(iVar1 + 8) + *(int *)(this + 0x68)) == '\0') {
            *(short *)(*(int *)(param_2 + 4) + *(int *)param_2 * 2) = (short)*(int *)(iVar1 + 8);
            *(int *)param_2 = *(int *)param_2 + 1;
            *(undefined1 *)(*(int *)(iVar1 + 8) + *(int *)(this + 0x68)) = 1;
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* from: engine:cdt_sys_anim.cpp
   addr: 004EC450 */

void __thiscall
cdtCOLL_ANIM::MakeIndListRay
          (cdtCOLL_ANIM *this,m3dV *param_1,m3dV *param_2,cdtOFL *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_1f44;
  int aiStack_1f40 [1999];
  undefined4 uStack_4;
  
  uStack_4 = 0x4ec45a;
  Validate(this);
  uVar2 = (**(code **)(*(int *)this + 4))();
  puVar4 = *(undefined4 **)(this + 0x68);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  voxGRID::MakeIndListRay((voxGRID *)(this + 8),param_1,param_2,aiStack_1f40,&iStack_1f44,2000);
  iVar5 = 0;
  *(undefined4 *)param_3 = 0;
  if (0 < iStack_1f44) {
    do {
      for (iVar1 = *(int *)(*(int *)(this + 0x40) + 4 + aiStack_1f40[iVar5] * 8); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
        if (*(char *)(*(int *)(iVar1 + 8) + *(int *)(this + 0x68)) == '\0') {
          *(short *)(*(int *)(param_3 + 4) + *(int *)param_3 * 2) = (short)*(int *)(iVar1 + 8);
          *(int *)param_3 = *(int *)param_3 + 1;
          *(undefined1 *)(*(int *)(this + 0x68) + *(int *)(iVar1 + 8)) = 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_1f44);
  }
  return;
}

