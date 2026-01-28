
/* from: engine:Rend_sort.cpp
   addr: 004F1600 */

void __thiscall rnsBUF_TRANSP_TYPE::StoreObj(rnsBUF_TRANSP_TYPE *this,objOBJ *param_1)

{
  int iVar1;
  void *pvVar2;
  m3dV local_18 [12];
  m3dV local_c [8];
  undefined4 local_4;
  
  if (*(int *)(this + 0xc) <= *(int *)(this + 8)) {
    iVar1 = *(int *)(this + 0xc) + 0x14;
    *(int *)(this + 0xc) = iVar1;
    pvVar2 = apRealloc(*(void **)(this + 4),iVar1 * 8);
    *(void **)(this + 4) = pvVar2;
  }
  *(objOBJ **)(*(int *)(this + 4) + *(int *)(this + 8) * 8) = param_1;
  objOBJ::GetCenter(param_1,local_18);
  camCAMERA::TransformPoint(*(camCAMERA **)(rendDrv + 0x84),local_18,local_c);
  *(undefined4 *)(*(int *)(this + 4) + 4 + *(int *)(this + 8) * 8) = local_4;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1680 */

void __thiscall rnsBUF_TRANSP_TYPE::Purge(rnsBUF_TRANSP_TYPE *this)

{
  objOBJ *poVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  if (0 < (int)*(size_t *)(this + 8)) {
    qsort(*(void **)(this + 4),*(size_t *)(this + 8),8,_rnsCompObjZ);
    local_4 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        iVar4 = 0;
        poVar1 = *(objOBJ **)(*(int *)(this + 4) + local_4 * 8);
        puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
        if (*puVar2 != 0) {
          iVar3 = 0;
          do {
            rendDRIVER::RenderObj
                      (rendDrv,poVar1,(int)*(short *)(poVar1 + 0xee),
                       (objSPLIT_ENTRY *)(*(int *)(puVar2 + 1) + iVar3));
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x70;
            puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
          } while (iVar4 < (int)(uint)*puVar2);
        }
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(this + 8));
    }
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1710 */

void __thiscall rnsBUF_OPAQUE::Purge(rnsBUF_OPAQUE *this)

{
  int iVar1;
  objOBJ *poVar2;
  rnsBUF_OPAQUE *prVar3;
  int iVar4;
  
  *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffffb;
  (**(code **)(*(int *)rendDrv + 0x7c))();
  iVar4 = 0;
  if (0 < *(int *)(this + 800)) {
    prVar3 = this + 4;
    do {
      for (iVar1 = *(int *)prVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        poVar2 = *(objOBJ **)(iVar1 + 8);
        if ((*(uint *)(poVar2 + 8) & 0x380000) == 0) {
          rendDRIVER::RenderObj
                    (rendDrv,poVar2,(int)*(short *)(poVar2 + 0xee),*(objSPLIT_ENTRY **)(iVar1 + 0xc)
                    );
        }
      }
      iVar4 = iVar4 + 1;
      prVar3 = prVar3 + 0x14;
    } while (iVar4 < *(int *)(this + 800));
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1790 */

void __thiscall
rnsBUF_OPAQUE::LinkObjSplit(rnsBUF_OPAQUE *this,objOBJ *param_1,int param_2,rendCFG_PREP *param_3)

{
  int iVar1;
  int iVar2;
  rnsBUF_OPAQUE *prVar3;
  int iVar4;
  
  if (((byte)param_1[0x24] & 0x20) == 0) {
    iVar2 = -1;
    iVar4 = 0;
    prVar3 = this;
    if (0 < *(int *)(this + 800)) {
      do {
        if (*(int *)(prVar3 + 0x10) == *(int *)(param_3 + 4)) break;
        iVar1 = (**(code **)(*(int *)prVar3 + 0x14))();
        if (iVar1 == 0) {
          iVar2 = iVar4;
        }
        iVar4 = iVar4 + 1;
        prVar3 = prVar3 + 0x14;
      } while (iVar4 < *(int *)(this + 800));
    }
    iVar1 = *(int *)(this + 800);
    if (iVar4 == iVar1) {
      if (0x27 < iVar1) {
        return;
      }
      iVar4 = iVar2;
      if (iVar2 == -1) {
        *(int *)(this + 800) = iVar1 + 1;
        iVar4 = iVar1;
      }
      *(undefined4 *)(this + iVar4 * 0x14 + 0x10) = *(undefined4 *)(param_3 + 4);
    }
    (**(code **)(*(int *)(this + iVar4 * 0x14) + 0x1c))(param_3 + 0xcc);
  }
  else if (*(int **)(param_3 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_3 + 0xdc) + 0xc))(param_3 + 0xcc);
    *(undefined4 *)(param_3 + 0xdc) = 0;
    return;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1850 */

void __thiscall rnsMNG::InitLevel(rnsMNG *this,scnSCENE *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  animINST *paVar6;
  int iVar7;
  int iVar8;
  rnsMNG *prVar9;
  objOBJ *poStack_c;
  objOBJ *poStack_8;
  int iStack_4;
  
  prVar9 = this + 4;
  iVar8 = 0;
  if (0 < *(int *)(this + 0x324)) {
    do {
      (**(code **)(*(int *)prVar9 + 0x10))();
      *(int *)(prVar9 + 0x10) = 0;
      iVar8 = iVar8 + 1;
      prVar9 = prVar9 + 0x14;
    } while (iVar8 < *(int *)(this + 0x324));
  }
  *(undefined4 *)(this + 0x324) = 0;
  prVar9 = this + 0x654;
  iVar8 = 4;
  do {
    *(undefined4 *)prVar9 = 0;
    prVar9 = prVar9 + 0x10;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  prVar9 = this + 0x328;
  iVar8 = 0;
  if (0 < *(int *)(this + 0x648)) {
    do {
      (**(code **)(*(int *)prVar9 + 0x10))();
      *(int *)(prVar9 + 0x10) = 0;
      iVar8 = iVar8 + 1;
      prVar9 = prVar9 + 0x14;
    } while (iVar8 < *(int *)(this + 0x648));
  }
  *(undefined4 *)(this + 0x648) = 0;
  prVar9 = this + 0x694;
  iVar8 = 4;
  do {
    *(undefined4 *)prVar9 = 0;
    prVar9 = prVar9 + 0x10;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(undefined4 *)(this + 0x1d74) = 0;
  if (param_1 != (scnSCENE *)0x0) {
    for (paVar6 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar6 != (animINST *)0x0;
        paVar6 = scnSCENE::FindNextInst(param_1,paVar6)) {
      iVar8 = 0;
      if ((*(uint *)(paVar6 + 4) & 0x4000000) != 0) {
        iVar2 = *(int *)(paVar6 + 0x10);
        poStack_c = (objOBJ *)0x0;
        if (iVar2 != 0) {
          poStack_c = *(objOBJ **)(iVar2 + 0x38);
          iStack_4 = 0;
          poStack_8 = poStack_c;
        }
        if ((((*(uint *)(iVar2 + 8) & 0x800000) != 0) && (*(int *)(iVar2 + 0x28) != 0)) &&
           (psVar3 = *(short **)(*(int *)(iVar2 + 0x28) + 0x18), psVar3 != (short *)0x0)) {
          if (((*(int *)(iVar2 + 0xe8) != 0) &&
              (iVar4 = *(int *)(*(int *)(iVar2 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar4 != 0))
             && (*psVar3 != 0)) {
            do {
              iVar7 = *(int *)(iVar4 + 8) * iVar8;
              iVar1 = iVar7 + 0xcc + *(int *)(iVar4 + 0xc);
              piVar5 = *(int **)(iVar7 + 0xdc + *(int *)(iVar4 + 0xc));
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 0xc))(iVar1);
                *(undefined4 *)(iVar1 + 0x10) = 0;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)(uint)**(ushort **)(*(int *)(iVar2 + 0x28) + 0x18));
          }
          *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff7fffff;
        }
        while ((poStack_c != (objOBJ *)0x0 && ((iStack_4 == 0 || (poStack_8 != poStack_c))))) {
          UnLinkObj(this,poStack_8);
          poStack_8 = *(objOBJ **)(poStack_8 + 0x30);
          iStack_4 = 1;
        }
        *(uint *)(paVar6 + 4) = *(uint *)(paVar6 + 4) & 0xfbffffff;
      }
    }
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1A30 */

void __thiscall rnsMNG::StoreObj(rnsMNG *this,objOBJ *param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  void *pvVar4;
  rnsMNG *prVar5;
  int iVar6;
  objMTL *this_00;
  undefined4 uStack_84;
  m3dV amStack_80 [8];
  undefined4 uStack_78;
  objMTL local_70 [100];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  iVar6 = 0;
  if (*(int *)this == 0) {
    this_00 = local_70;
    iVar6 = 4;
    do {
      objMTL::objMTL(this_00);
      this_00 = this_00 + 0x19;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_c = 0;
    local_6 = *(undefined2 *)(param_1 + 0x10);
    local_a = 0;
    local_4 = 0;
    local_8 = 0;
    rendDRIVER::RenderObj
              (rendDrv,param_1,(int)*(short *)(param_1 + 0xee),(objSPLIT_ENTRY *)local_70);
    return;
  }
  iVar3 = (**(code **)(*(int *)rendDrv + 0x94))(param_1);
  if (iVar3 == 0) {
    (**(code **)(*(int *)rendDrv + 0x90))(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((uVar1 & 0x20) == 0) {
    if ((((*(uint *)(param_1 + 8) & 0x800000) == 0) && (*(int *)(param_1 + 0x28) != 0)) &&
       (psVar2 = *(short **)(*(int *)(param_1 + 0x28) + 0x18), psVar2 != (short *)0x0)) {
      if (((*(int *)(param_1 + 0xe8) != 0) &&
          (iVar3 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar3 != 0))
         && (*psVar2 != 0)) {
        do {
          prVar5 = this + 0x328;
          if ((*(uint *)(param_1 + 0x24) & 0x1000000) == 0) {
            prVar5 = this + 4;
          }
          rnsBUF_OPAQUE::LinkObjSplit
                    ((rnsBUF_OPAQUE *)prVar5,param_1,iVar6,
                     (rendCFG_PREP *)(*(int *)(iVar3 + 8) * iVar6 + *(int *)(iVar3 + 0xc)));
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800000;
      return;
    }
  }
  else {
    if ((uVar1 & 0x1000000) != 0) {
      if ((uVar1 & 0x2000000) != 0) {
        if (*(int *)(this + 0x698) <= *(int *)(this + 0x694)) {
          iVar6 = *(int *)(this + 0x698) + 0x14;
          *(int *)(this + 0x698) = iVar6;
          pvVar4 = apRealloc(*(void **)(this + 0x690),iVar6 * 8);
          *(void **)(this + 0x690) = pvVar4;
        }
        *(objOBJ **)(*(int *)(this + 0x690) + *(int *)(this + 0x694) * 8) = param_1;
        objOBJ::GetCenter(param_1,amStack_80);
        camCAMERA::TransformPoint
                  (*(camCAMERA **)(rendDrv + 0x84),amStack_80,(m3dV *)&stack0xffffff74);
        *(undefined4 *)(*(int *)(this + 0x690) + 4 + *(int *)(this + 0x694) * 8) = uStack_84;
        *(int *)(this + 0x694) = *(int *)(this + 0x694) + 1;
        return;
      }
      if ((uVar1 & 0x4000000) != 0) {
        rnsBUF_TRANSP_TYPE::StoreObj((rnsBUF_TRANSP_TYPE *)(this + 0x69c),param_1);
        return;
      }
      if ((uVar1 & 0x8000000) != 0) {
        rnsBUF_TRANSP_TYPE::StoreObj((rnsBUF_TRANSP_TYPE *)(this + 0x6bc),param_1);
        return;
      }
      rnsBUF_TRANSP_TYPE::StoreObj((rnsBUF_TRANSP_TYPE *)(this + 0x6ac),param_1);
      return;
    }
    if ((uVar1 & 0x2000000) != 0) {
      if (*(int *)(this + 0x658) <= *(int *)(this + 0x654)) {
        iVar6 = *(int *)(this + 0x658) + 0x14;
        *(int *)(this + 0x658) = iVar6;
        pvVar4 = apRealloc(*(void **)(this + 0x650),iVar6 * 8);
        *(void **)(this + 0x650) = pvVar4;
      }
      *(objOBJ **)(*(int *)(this + 0x650) + *(int *)(this + 0x654) * 8) = param_1;
      objOBJ::GetCenter(param_1,(m3dV *)&stack0xffffff74);
      camCAMERA::TransformPoint(*(camCAMERA **)(rendDrv + 0x84),(m3dV *)&stack0xffffff74,amStack_80)
      ;
      *(undefined4 *)(*(int *)(this + 0x650) + 4 + *(int *)(this + 0x654) * 8) = uStack_78;
      *(int *)(this + 0x654) = *(int *)(this + 0x654) + 1;
      return;
    }
    if ((uVar1 & 0x4000000) != 0) {
      rnsBUF_TRANSP_TYPE::StoreObj((rnsBUF_TRANSP_TYPE *)(this + 0x65c),param_1);
      return;
    }
    prVar5 = this + 0x67c;
    if ((uVar1 & 0x8000000) == 0) {
      prVar5 = this + 0x66c;
    }
    rnsBUF_TRANSP_TYPE::StoreObj((rnsBUF_TRANSP_TYPE *)prVar5,param_1);
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F1D60 */

void __thiscall rnsMNG::Purge(rnsMNG *this,int param_1,int param_2)

{
  objOBJ *poVar1;
  ushort *puVar2;
  rnsMNG *prVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)this != 0) {
    switch(param_2) {
    case 0:
      *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) | 4;
      if (param_1 != 3) {
        rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + param_1 * 0x40 + 0x64c));
        (**(code **)(*(int *)rendDrv + 0x5c))();
        return;
      }
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x64c));
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x68c));
      (**(code **)(*(int *)rendDrv + 0x5c))();
      return;
    case 1:
      if (param_1 != 3) {
        rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + param_1 * 0x40 + 0x65c));
        (**(code **)(*(int *)rendDrv + 0x5c))();
        return;
      }
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x65c));
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x69c));
      (**(code **)(*(int *)rendDrv + 0x5c))();
      return;
    case 2:
      if (param_1 != 3) {
        rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + param_1 * 0x40 + 0x66c));
        (**(code **)(*(int *)rendDrv + 0x5c))();
        return;
      }
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x66c));
      rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x6ac));
      (**(code **)(*(int *)rendDrv + 0x5c))();
      return;
    case 3:
      if (param_1 == 3) {
        rnsBUF_TRANSP_TYPE::Purge((rnsBUF_TRANSP_TYPE *)(this + 0x67c));
        if (0 < (int)*(size_t *)(this + 0x6c4)) {
          qsort(*(void **)(this + 0x6c0),*(size_t *)(this + 0x6c4),8,_rnsCompObjZ);
          param_2 = 0;
          if (0 < *(int *)(this + 0x6c4)) {
            do {
              iVar6 = 0;
              poVar1 = *(objOBJ **)(*(int *)(this + 0x6c0) + param_2 * 8);
              puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
              if (*puVar2 != 0) {
                iVar4 = 0;
                do {
                  rendDRIVER::RenderObj
                            (rendDrv,poVar1,(int)*(short *)(poVar1 + 0xee),
                             (objSPLIT_ENTRY *)(*(int *)(puVar2 + 1) + iVar4));
                  iVar6 = iVar6 + 1;
                  iVar4 = iVar4 + 0x70;
                  puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
                } while (iVar6 < (int)(uint)*puVar2);
              }
              param_2 = param_2 + 1;
            } while (param_2 < *(int *)(this + 0x6c4));
          }
        }
      }
      else {
        iVar6 = param_1 * 0x40;
        if (0 < (int)*(size_t *)(this + iVar6 + 0x684)) {
          qsort(*(void **)(this + iVar6 + 0x680),*(size_t *)(this + iVar6 + 0x684),8,_rnsCompObjZ);
          param_2 = 0;
          if (0 < *(int *)(this + iVar6 + 0x684)) {
            do {
              iVar4 = 0;
              poVar1 = *(objOBJ **)(*(int *)(this + iVar6 + 0x680) + param_2 * 8);
              puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
              if (*puVar2 != 0) {
                iVar5 = 0;
                do {
                  rendDRIVER::RenderObj
                            (rendDrv,poVar1,(int)*(short *)(poVar1 + 0xee),
                             (objSPLIT_ENTRY *)(*(int *)(puVar2 + 1) + iVar5));
                  iVar4 = iVar4 + 1;
                  iVar5 = iVar5 + 0x70;
                  puVar2 = *(ushort **)(*(int *)(poVar1 + 0x28) + 0x18);
                } while (iVar4 < (int)(uint)*puVar2);
              }
              param_2 = param_2 + 1;
            } while (param_2 < *(int *)(this + iVar6 + 0x684));
          }
        }
      }
      *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffffb;
      if (param_1 == 3) {
        prVar3 = this + 0x654;
        iVar6 = 4;
        do {
          *(undefined4 *)prVar3 = 0;
          prVar3 = prVar3 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        prVar3 = this + 0x694;
        iVar6 = 4;
        do {
          *(undefined4 *)prVar3 = 0;
          prVar3 = prVar3 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        (**(code **)(*(int *)rendDrv + 0x5c))();
        return;
      }
      iVar6 = 4;
      prVar3 = this + param_1 * 0x40 + 0x654;
      do {
        *(undefined4 *)prVar3 = 0;
        prVar3 = prVar3 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      break;
    case 4:
      if (param_1 != 3) {
        rnsBUF_OPAQUE::Purge((rnsBUF_OPAQUE *)(this + param_1 * 0x324 + 4));
        (**(code **)(*(int *)rendDrv + 0x5c))();
        return;
      }
      rnsBUF_OPAQUE::Purge((rnsBUF_OPAQUE *)(this + 4));
      rnsBUF_OPAQUE::Purge((rnsBUF_OPAQUE *)(this + 0x328));
      (**(code **)(*(int *)rendDrv + 0x5c))();
      return;
    }
    (**(code **)(*(int *)rendDrv + 0x5c))();
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F20B0 */

int __thiscall rnsMNG::IsEmpty(rnsMNG *this,int param_1)

{
  int iVar1;
  rnsMNG *prVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + param_1 * 0x324 + 0x324)) {
    prVar2 = this + param_1 * 0x324 + 8;
    do {
      if (*(int *)prVar2 != 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      prVar2 = prVar2 + 0x14;
    } while (iVar1 < *(int *)(this + param_1 * 0x324 + 0x324));
  }
  iVar1 = 0;
  prVar2 = this + param_1 * 0x40 + 0x654;
  do {
    if (*(int *)prVar2 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    prVar2 = prVar2 + 0x10;
  } while (iVar1 < 4);
  return 1;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2110 */

void __thiscall rnsMNG::StorePoly(rnsMNG *this,int param_1,rendVERTEX *param_2,rendCFG *param_3)

{
  uint uVar1;
  int iVar2;
  rnsMNG *prVar3;
  
  if (*(int *)(this + 0x1d74) < 5) {
    *(int *)(this + *(int *)(this + 0x1d74) * 0x488 + 0x6cc) = param_1;
    prVar3 = this + *(int *)(this + 0x1d74) * 0x488 + 0x6d0;
    for (uVar1 = (uint)(param_1 * 0x30) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)prVar3 = *(undefined4 *)param_2;
      param_2 = (rendVERTEX *)((rnsMNG *)param_2 + 4);
      prVar3 = prVar3 + 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *prVar3 = *(rnsMNG *)param_2;
      param_2 = (rendVERTEX *)((rnsMNG *)param_2 + 1);
      prVar3 = prVar3 + 1;
    }
    prVar3 = this + *(int *)(this + 0x1d74) * 0x488 + 0xa90;
    for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)prVar3 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      prVar3 = prVar3 + 4;
    }
    *(int *)(this + 0x1d74) = *(int *)(this + 0x1d74) + 1;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F21A0 */

void __thiscall rnsMNG::PurgePoly(rnsMNG *this)

{
  int iVar1;
  rnsMNG *prVar2;
  
  if (0 < (int)*(size_t *)(this + 0x1d74)) {
    qsort(this + 0x6cc,*(size_t *)(this + 0x1d74),0x488,_rnsComparePolyZ);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x1d74)) {
      prVar2 = this + 0xa90;
      do {
        (**(code **)(*(int *)rendDrv + 0x50))(prVar2,0);
        (**(code **)(*(int *)rendDrv + 0x40))
                  (*(undefined4 *)(prVar2 + -0x3c4),prVar2 + -0x3c0,prVar2);
        iVar1 = iVar1 + 1;
        prVar2 = prVar2 + 0x488;
      } while (iVar1 < *(int *)(this + 0x1d74));
    }
    *(undefined4 *)(this + 0x1d74) = 0;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2220 */

void __thiscall rnsMNG::ObjDestroyNotify(rnsMNG *this,objOBJ *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((((*(int *)(param_1 + 0x28) != 0) &&
       (psVar2 = *(short **)(*(int *)(param_1 + 0x28) + 0x18), psVar2 != (short *)0x0)) &&
      (*(int *)(param_1 + 0xe8) != 0)) &&
     ((iVar3 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar3 != 0 &&
      (iVar6 = 0, *psVar2 != 0)))) {
    do {
      iVar5 = *(int *)(iVar3 + 8) * iVar6;
      iVar1 = iVar5 + 0xcc + *(int *)(iVar3 + 0xc);
      piVar4 = *(int **)(iVar5 + 0xdc + *(int *)(iVar3 + 0xc));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(iVar1);
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F22A0 */

void __thiscall rnsMNG::LinkObjSplit(rnsMNG *this,objOBJ *param_1,int param_2,rendCFG_PREP *param_3)

{
  if ((*(uint *)(param_1 + 0x24) & 0x1000000) != 0) {
    rnsBUF_OPAQUE::LinkObjSplit((rnsBUF_OPAQUE *)(this + 0x328),param_1,param_2,param_3);
    return;
  }
  rnsBUF_OPAQUE::LinkObjSplit((rnsBUF_OPAQUE *)(this + 4),param_1,param_2,param_3);
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F22D0 */

void __thiscall rnsMNG::LinkObj(rnsMNG *this,objOBJ *param_1)

{
  short *psVar1;
  int iVar2;
  rnsMNG *this_00;
  int iVar3;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar3 = 0;
  local_c = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (psVar1 = *(short **)(*(int *)(param_1 + 0x28) + 0x18), psVar1 != (short *)0x0)) {
    if ((*(int *)(param_1 + 0xe8) != 0) &&
       ((iVar2 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar2 != 0 &&
        (*psVar1 != 0)))) {
      do {
        this_00 = this + 0x328;
        if ((*(uint *)(param_1 + 0x24) & 0x1000000) == 0) {
          this_00 = this + 4;
        }
        rnsBUF_OPAQUE::LinkObjSplit
                  ((rnsBUF_OPAQUE *)this_00,param_1,iVar3,
                   (rendCFG_PREP *)(*(int *)(iVar2 + 8) * iVar3 + *(int *)(iVar2 + 0xc)));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800000;
  }
  while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
    LinkObj(this,local_8);
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F23B0 */

void __thiscall rnsMNG::UnLinkObj(rnsMNG *this,objOBJ *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((((*(uint *)(param_1 + 8) & 0x800000) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
     (psVar2 = *(short **)(*(int *)(param_1 + 0x28) + 0x18), psVar2 != (short *)0x0)) {
    if (((*(int *)(param_1 + 0xe8) != 0) &&
        (iVar3 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar3 != 0)) &&
       (iVar6 = 0, *psVar2 != 0)) {
      do {
        iVar5 = *(int *)(iVar3 + 8) * iVar6;
        iVar1 = iVar5 + 0xcc + *(int *)(iVar3 + 0xc);
        piVar4 = *(int **)(iVar5 + 0xdc + *(int *)(iVar3 + 0xc));
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(iVar1);
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff7fffff;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2460 */

void __thiscall rnsMNG::UnLinkObj(rnsMNG *this,objOBJ *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar6 = 0;
  local_c = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  if ((((*(uint *)(param_1 + 8) & 0x800000) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
     (psVar2 = *(short **)(*(int *)(param_1 + 0x28) + 0x18), psVar2 != (short *)0x0)) {
    if (((*(int *)(param_1 + 0xe8) != 0) &&
        (iVar3 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar3 != 0)) &&
       (*psVar2 != 0)) {
      do {
        iVar5 = *(int *)(iVar3 + 8) * iVar6;
        iVar1 = iVar5 + 0xcc + *(int *)(iVar3 + 0xc);
        piVar4 = *(int **)(iVar5 + 0xdc + *(int *)(iVar3 + 0xc));
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(iVar1);
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff7fffff;
  }
  while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
    UnLinkObj(this,local_8);
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2550 */

void __thiscall rnsMNG::LinkInst(rnsMNG *this,animINST *param_1)

{
  objOBJ *poVar1;
  short *psVar2;
  int iVar3;
  rnsMNG *this_00;
  int iVar4;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  if ((*(uint *)(param_1 + 4) & 0x4000000) == 0) {
    poVar1 = *(objOBJ **)(param_1 + 0x10);
    iVar4 = 0;
    local_c = (objOBJ *)0x0;
    if (poVar1 != (objOBJ *)0x0) {
      local_8 = *(objOBJ **)(poVar1 + 0x38);
      local_4 = 0;
      local_c = local_8;
    }
    if ((*(int *)(poVar1 + 0x28) != 0) &&
       (psVar2 = *(short **)(*(int *)(poVar1 + 0x28) + 0x18), psVar2 != (short *)0x0)) {
      if ((*(int *)(poVar1 + 0xe8) != 0) &&
         ((iVar3 = *(int *)(*(int *)(poVar1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar3 != 0 &&
          (*psVar2 != 0)))) {
        do {
          this_00 = this + 0x328;
          if ((*(uint *)(poVar1 + 0x24) & 0x1000000) == 0) {
            this_00 = this + 4;
          }
          rnsBUF_OPAQUE::LinkObjSplit
                    ((rnsBUF_OPAQUE *)this_00,poVar1,iVar4,
                     (rendCFG_PREP *)(*(int *)(iVar3 + 8) * iVar4 + *(int *)(iVar3 + 0xc)));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)**(ushort **)(*(int *)(poVar1 + 0x28) + 0x18));
      }
      *(uint *)(poVar1 + 8) = *(uint *)(poVar1 + 8) | 0x800000;
    }
    while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
      LinkObj(this,local_8);
      local_8 = *(objOBJ **)(local_8 + 0x30);
      local_4 = 1;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x4000000;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2650 */

void __thiscall rnsMNG::UnLinkInst(rnsMNG *this,animINST *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  if ((*(uint *)(param_1 + 4) & 0x4000000) != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar7 = 0;
    local_c = (objOBJ *)0x0;
    if (iVar2 != 0) {
      local_c = *(objOBJ **)(iVar2 + 0x38);
      local_4 = 0;
      local_8 = local_c;
    }
    if ((((*(uint *)(iVar2 + 8) & 0x800000) != 0) && (*(int *)(iVar2 + 0x28) != 0)) &&
       (psVar3 = *(short **)(*(int *)(iVar2 + 0x28) + 0x18), psVar3 != (short *)0x0)) {
      if (((*(int *)(iVar2 + 0xe8) != 0) &&
          (iVar4 = *(int *)(*(int *)(iVar2 + 0xe8) + *(int *)(rendDrv + 0x78) * 4), iVar4 != 0)) &&
         (*psVar3 != 0)) {
        do {
          iVar6 = *(int *)(iVar4 + 8) * iVar7;
          iVar1 = iVar6 + 0xcc + *(int *)(iVar4 + 0xc);
          piVar5 = *(int **)(iVar6 + 0xdc + *(int *)(iVar4 + 0xc));
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))(iVar1);
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)**(ushort **)(*(int *)(iVar2 + 0x28) + 0x18));
      }
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff7fffff;
    }
    while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
      UnLinkObj(this,local_8);
      local_8 = *(objOBJ **)(local_8 + 0x30);
      local_4 = 1;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfbffffff;
  }
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2760 */

void __thiscall rnsSIGNATURE::Insert(rnsSIGNATURE *this,lstNODE *param_1)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  lstPLIST::Insert((lstPLIST *)this,param_1);
  *(rnsSIGNATURE **)(param_1 + 0x10) = this;
  return;
}




/* from: engine:Rend_sort.cpp
   addr: 004F2790 */

int __thiscall rnsSIGNATURE::Compare(rnsSIGNATURE *this,lstNODE *param_1,lstNODE *param_2)

{
  lstNODE *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xe8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xe8) + *(int *)(rendDrv + 0x78) * 4);
  }
  if (*(int *)(*(int *)(param_2 + 8) + 0xe8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 0xe8) + *(int *)(rendDrv + 0x78) * 4);
  }
  plVar1 = param_1 + 0xc;
  param_1 = (lstNODE *)0x0;
  iVar5 = (uint)*(ushort *)(*(int *)plVar1 + 0x66) * *(int *)(iVar5 + 8) + 8 + *(int *)(iVar5 + 0xc)
  ;
  piVar2 = (int *)((uint)*(ushort *)(*(int *)(param_2 + 0xc) + 0x66) * *(int *)(iVar4 + 8) + 8 +
                  *(int *)(iVar4 + 0xc));
  piVar6 = piVar2;
  do {
    iVar4 = piVar2[0x2d];
    if (*(int *)(iVar5 + 0xb4) < piVar2[0x2d]) {
      iVar4 = *(int *)(iVar5 + 0xb4);
    }
    if (iVar4 <= (int)param_1) {
      iVar4 = piVar2[0x2d];
      iVar5 = *(int *)(iVar5 + 0xb4);
      if (iVar5 == iVar4) {
        return 0;
      }
      return (uint)(iVar4 != iVar5 && -1 < iVar4 - iVar5);
    }
    iVar4 = *(int *)((int)piVar6 + (iVar5 - (int)piVar2));
    iVar3 = *piVar6;
    if (iVar4 == 0) {
      if (iVar3 != 0) {
        return 1;
      }
    }
    else {
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = stricmp((char *)(iVar3 + 8),(char *)(iVar4 + 8));
      if (0 < iVar4) {
        return 1;
      }
      if (iVar4 < 0) {
        return 0;
      }
    }
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 9;
  } while( true );
}




/* from: engine:Rend_sort.cpp
   addr: 004F2890 */

int __cdecl _rnsCompObjZ(void *param_1,void *param_2)

{
  if (*(float *)((int)param_1 + 4) < *(float *)((int)param_2 + 4)) {
    return 1;
  }
  return -1;
}




/* from: engine:Rend_sort.cpp
   addr: 004F28B0 */

int __cdecl _rnsComparePolyZ(void *param_1,void *param_2)

{
  if (*(float *)((int)param_2 + 0xc) < *(float *)((int)param_1 + 0xc)) {
    return -1;
  }
  if (*(float *)((int)param_1 + 0xc) < *(float *)((int)param_2 + 0xc)) {
    return 1;
  }
  return 0;
}




/* from: engine:Rend_sort.cpp
   addr: 004F28F0 */

void __thiscall objMTL::objMTL(objMTL *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  this[0x18] = (objMTL)0xff;
  return;
}

