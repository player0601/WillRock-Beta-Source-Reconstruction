
/* from: gs_shared:plgs_action.cpp
   addr: 0052F1C0 */

plgsACTION * __thiscall plgsACTION::plgsACTION(plgsACTION *this)

{
  plgsACTION *ppVar1;
  int iVar2;
  
  entENTITY::entENTITY((entENTITY *)this);
  this[0x14f] = (plgsACTION)0x0;
  ppVar1 = this + 0x19b;
  iVar2 = 10;
  do {
    *(undefined4 *)ppVar1 = 0;
    ppVar1 = ppVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F1F0
   addr: 0052F1F0 */

void * __thiscall plgsACTION::_scalar_deleting_destructor_(plgsACTION *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:plgs_action.cpp
   addr: 0052F230 */

int __thiscall plgsACTION::ProcessINIT_LEVEL(plgsACTION *this)

{
  plgsACTION *ppVar1;
  float fVar2;
  float unaff_EBX;
  float local_c;
  float fStack_8;
  
  *(undefined4 *)(this + 0x22f) = 0x3f800000;
  *(undefined4 *)(this + 0x233) = 0;
  (**(code **)(*(int *)this + 0x68))(&local_c);
  fVar2 = 0.0;
  ppVar1 = this + 0x193;
  do {
    *(float *)(ppVar1 + 8) = fVar2;
    fVar2 = (float)((int)fVar2 + 1);
    *(float *)(ppVar1 + -4) = unaff_EBX;
    *(float *)ppVar1 = local_c;
    *(float *)(ppVar1 + 4) = fStack_8;
    *(float *)ppVar1 = *(float *)ppVar1 + ___real_3f000000;
    ppVar1 = ppVar1 + 0x10;
  } while ((int)fVar2 < 10);
  *(undefined4 *)(this + 0x233) = 9;
  *(undefined4 *)(this + 0x237) = 9;
  return 1;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F2D0 */

int __thiscall plgsACTION::IsActive(plgsACTION *this)

{
  return ~*(uint *)(gsSysCinema + 0x80) & 1;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F2F0 */

void __thiscall plgsACTION::ProcessFRAME(plgsACTION *this)

{
  int iVar1;
  
  if (*(int *)(gsSysMP + 0x28) != 3) {
    iVar1 = (**(code **)(*(int *)this + 0x8c))();
    if (iVar1 != 0) {
      UpdateBreadCrumbs(this);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:plgs_action.cpp
   addr: 0052F320 */

void __thiscall plgsACTION::UpdateBreadCrumbs(plgsACTION *this)

{
  int iVar1;
  plgsACTION *ppVar2;
  plgsACTION *ppVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 extraout_MM1;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack_20;
  float local_1c;
  float fStack_18;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  fVar12 = *(float *)(this + 0x22f) - gsElapsedTime;
  *(float *)(this + 0x22f) = fVar12;
  if (fVar12 <= ___real_00000000) {
    *(undefined4 *)(this + 0x22f) = 0x3f800000;
    (**(code **)(*(int *)this + 0x68))(&local_1c);
    local_1c = local_1c + ___real_3f800000;
    ppVar2 = this + *(int *)(this + 0x233) * 0x10 + 399;
    fVar12 = (*(float *)ppVar2 - fStack_20) * (*(float *)ppVar2 - fStack_20) +
             (*(float *)(ppVar2 + 4) - local_1c) * (*(float *)(ppVar2 + 4) - local_1c) +
             (*(float *)(ppVar2 + 8) - fStack_18) * (*(float *)(ppVar2 + 8) - fStack_18);
    if (m3dSimdType == 0) {
      fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar12 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) * fVar12;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)fVar12;
      uVar10 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar9);
      uVar11 = PackedFloatingMUL(uVar10,uVar10);
      uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
      uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
      uVar10 = PackedFloatingMUL(uVar10,uVar9);
      fVar12 = (float)uVar10;
      FastExitMediaState();
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (___real_3f800000 <= fVar12) {
      iVar6 = *(int *)(this + 0x233);
      iVar5 = iVar6 + 1;
      *(int *)(this + 0x233) = iVar5;
      if (9 < iVar5) {
        *(undefined4 *)(this + 0x233) = 0;
      }
      ppVar2 = this + *(int *)(this + 0x233) * 0x10 + 399;
      *(float *)ppVar2 = fStack_20;
      *(float *)(ppVar2 + 4) = local_1c;
      *(float *)(ppVar2 + 8) = fStack_18;
      *(int *)(ppVar2 + 0xc) = *(int *)(this + iVar6 * 0x10 + 0x19b) + 1;
      iVar6 = *(int *)(this + 0x237);
      *(int *)(this + 0x237) = iVar6 + 1;
      if (9 < iVar6 + 1) {
        *(undefined4 *)(this + 0x237) = 9;
      }
      iVar6 = *(int *)(this + 0x237);
      uStack_c = *(undefined4 *)(this + 0xbc);
      uStack_10 = 2;
      uStack_8 = 1;
      ppuStack_14 = &entCDT_REFINE_EXCL::_vftable_;
      iVar5 = 0;
      if (iVar6 < 0) {
        iVar5 = iVar6;
      }
      iVar4 = *(int *)(this + 0x233);
      while (2 < iVar6) {
        iVar6 = 2;
        if (*(int *)(this + 0x237) < 2) {
          iVar6 = *(int *)(this + 0x237);
        }
        iVar6 = scnSCENE::IsVisiblePoint
                          (gsScenePtr,
                           (m3dV *)(this + (((*(int *)(this + 0x233) - iVar6) + 10) % 10) * 0x10 +
                                           399),
                           (m3dV *)(this + (((iVar4 - iVar5) + 10) % 10) * 0x10 + 399),0,
                           (cdtREFINE *)&ppuStack_14,(cdtINFO *)0x0);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = *(int *)(this + 0x237);
        iVar7 = 1;
        if (1 < iVar6 + -1) {
          do {
            iVar1 = iVar7 + 1;
            iVar8 = iVar1;
            if (iVar6 < iVar1) {
              iVar8 = iVar6;
            }
            if (iVar6 < iVar7) {
              iVar7 = iVar6;
            }
            ppVar2 = this + (((*(int *)(this + 0x233) - iVar8) + 10) % 10) * 0x10 + 399;
            ppVar3 = this + (((*(int *)(this + 0x233) - iVar7) + 10) % 10) * 0x10 + 399;
            *(undefined4 *)ppVar3 = *(undefined4 *)ppVar2;
            *(undefined4 *)(ppVar3 + 4) = *(undefined4 *)(ppVar2 + 4);
            *(undefined4 *)(ppVar3 + 8) = *(undefined4 *)(ppVar2 + 8);
            *(undefined4 *)(ppVar3 + 0xc) = *(undefined4 *)(ppVar2 + 0xc);
            iVar6 = *(int *)(this + 0x237);
            iVar7 = iVar1;
          } while (iVar1 < iVar6 + -1);
        }
        iVar6 = *(int *)(this + 0x237) + -1;
        *(int *)(this + 0x237) = iVar6;
      }
    }
  }
  return;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F610 */

plgsBREADCRUMB * __thiscall plgsACTION::GetBreadCrumb(plgsACTION *this,int param_1)

{
  if (*(int *)(this + 0x237) < param_1) {
    param_1 = *(int *)(this + 0x237);
  }
  return (plgsBREADCRUMB *)(this + (((*(int *)(this + 0x233) - param_1) + 10) % 10) * 0x10 + 399);
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F650 */

void __thiscall plgsACTION::ProcessMP_GET_SYNC_DATA(plgsACTION *this,void *param_1)

{
  undefined4 *puVar1;
  plgsACTION *ppVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_0095d628 & 1) == 0) {
      DAT_0095d628 = DAT_0095d628 | 1;
      DAT_0095d638._0_1_ = 0;
      DAT_0095d638._1_1_ = 0x40;
      puVar1 = &DAT_0095d648;
      iVar3 = 10;
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      DAT_0095d6dc = 0;
      DAT_0095d6e0 = 0;
      DAT_0095d638._2_2_ = 0xac;
      atexit((_func_4879 *)&__E9);
    }
    puVar1 = &DAT_0095d638;
    *(undefined4 **)param_1 = &DAT_0095d638;
  }
  puVar1[0x29] = *(undefined4 *)(this + 0x233);
  puVar1[0x2a] = *(undefined4 *)(this + 0x237);
  iVar3 = 9;
  ppVar2 = this + 399;
  puVar1 = puVar1 + 1;
  do {
    iVar3 = iVar3 + -1;
    *puVar1 = *(undefined4 *)ppVar2;
    puVar1[1] = *(undefined4 *)(ppVar2 + 4);
    puVar1[2] = *(undefined4 *)(ppVar2 + 8);
    puVar1[3] = *(undefined4 *)(ppVar2 + 0xc);
    ppVar2 = ppVar2 + 0x10;
    puVar1 = puVar1 + 4;
  } while (iVar3 != 0);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F720 */

void __thiscall plgsACTION::ProcessMP_WRITE_SYNC_DATA(plgsACTION *this,gsMSG_MP_SAVELOAD *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  gsMSG_MP_SAVELOAD *pgVar4;
  int iVar5;
  rendDRIVER *this_00;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar4 = param_1;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  puVar1 = *(undefined4 **)param_1;
  local_16 = 0xffffffff;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  local_20 = 0;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_20);
  iVar5 = 9;
  puVar3 = puVar1;
  do {
    fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0x4d8,(fioCHUNK *)&local_10);
    (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(puVar3 + 1,0xc);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)((int)&local_1e + 2));
    fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0x4d9,(fioCHUNK *)((int)&local_1e + 2));
    uVar2 = puVar3[4];
    uStack_8 = (undefined2)uVar2;
    local_6 = (undefined2)((uint)uVar2 >> 0x10);
    (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&uStack_8,4,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&local_10);
    fioFILE::WriteLastChunk(*(fioFILE **)(pgVar4 + 4));
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 4;
  } while (iVar5 != 0);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&local_20);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0xf1,(fioCHUNK *)&local_20);
  param_1 = (gsMSG_MP_SAVELOAD *)puVar1[0x29];
  this_00 = (rendDRIVER *)0x4;
  (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&param_1);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&stack0xffffffd4);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar4 + 4),0xf2,(fioCHUNK *)&stack0xffffffd4);
  uStack_8 = (undefined2)puVar1[0x2a];
  local_6 = (undefined2)((uint)puVar1[0x2a] >> 0x10);
  (**(code **)(**(int **)(pgVar4 + 4) + 0x18))(&uStack_8,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar4 + 4),(fioCHUNK *)&stack0xffffffc8);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar4 + 4));
  rendDRIVER::ConfigureTransp(this_00,(camCAMERA *)pgVar4);
  return;
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052F890 */

void __thiscall plgsACTION::ProcessMP_READ_SYNC_DATA(plgsACTION *this,gsMSG_MP_SAVELOAD *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short local_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined4 local_ba;
  undefined4 local_b6;
  rendDRIVER *local_b0;
  undefined4 local_ac;
  undefined4 local_9c [37];
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)param_1;
  local_c0 = 0;
  uStack_be = 0xffff;
  uStack_bc = 0xffff;
  local_ba = 0xffffffff;
  local_b6 = 0xffffffff;
  local_b0 = (rendDRIVER *)this;
  if (puVar4 == (undefined4 *)0x0) {
    if ((DAT_0095d628 & 1) == 0) {
      DAT_0095d628 = DAT_0095d628 | 1;
      DAT_0095d638._0_1_ = 0;
      DAT_0095d638._1_1_ = 0x40;
      DAT_0095d638._2_2_ = 0xffff;
      _vector_constructor_iterator_(&DAT_0095d63c,0x10,10,plgsBREADCRUMB::plgsBREADCRUMB);
      DAT_0095d6dc = 0;
      DAT_0095d6e0 = 0;
      DAT_0095d638._2_2_ = 0xac;
      atexit((_func_4879 *)&__E9);
    }
    puVar4 = &DAT_0095d638;
    local_ac._0_1_ = 0;
    *(undefined4 **)param_1 = &DAT_0095d638;
    local_ac._1_1_ = 0x40;
    puVar1 = local_9c;
    iVar3 = 10;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_8 = 0;
    local_4 = 0;
    local_ac._2_2_ = 0xac;
    puVar1 = &local_ac;
    puVar5 = &DAT_0095d638;
    for (iVar3 = 0x2b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_c0);
  do {
    if ((iVar3 == 0) || (local_c0 == 1)) {
      rendDRIVER::ConfigureTransp(local_b0,(camCAMERA *)param_1);
      return;
    }
    if (local_c0 == 0xf0) {
      iVar3 = 0;
      do {
        iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_c0);
        while ((iVar2 != 0 && (local_c0 != 1))) {
          if (local_c0 == 0x4d8) {
            uVar6 = 0xc;
            iVar2 = iVar3 * 0x10 + 4;
LAB_0052fa1f:
            (**(code **)(**(int **)(param_1 + 4) + 0x14))(iVar2 + (int)puVar4,uVar6,4);
          }
          else if (local_c0 == 0x4d9) {
            iVar2 = (iVar3 + 1) * 0x10;
            uVar6 = 4;
            goto LAB_0052fa1f;
          }
          iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_c0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 9);
    }
    else if (local_c0 == 0xf1) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x29,4,4);
    }
    else if (local_c0 == 0xf2) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x2a,4,4);
    }
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_c0);
  } while( true );
}




/* from: gs_shared:plgs_action.cpp
   addr: 0052FA70 */

void __thiscall plgsACTION::ProcessMP_NOTIFY(plgsACTION *this,gsEVENT *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  plgsACTION *ppVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == -100) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0x233) = *(undefined4 *)(iVar1 + 0xa4);
    *(undefined4 *)(this + 0x237) = *(undefined4 *)(iVar1 + 0xa8);
    iVar4 = 9;
    puVar2 = (undefined4 *)(iVar1 + 4);
    ppVar3 = this + 399;
    do {
      iVar4 = iVar4 + -1;
      *(undefined4 *)ppVar3 = *puVar2;
      *(undefined4 *)(ppVar3 + 4) = puVar2[1];
      *(undefined4 *)(ppVar3 + 8) = puVar2[2];
      *(undefined4 *)(ppVar3 + 0xc) = puVar2[3];
      puVar2 = puVar2 + 4;
      ppVar3 = ppVar3 + 0x10;
    } while (iVar4 != 0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:plgs_action.cpp
   addr: 0052FAF0 */

float __thiscall
entENTITY::GetDistToClosestPlayer(entENTITY *this,float param_1,m3dV *param_2,plgsACTION **param_3)

{
  entENTITY *peVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_MM1_01;
  undefined8 extraout_MM1_02;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float unaff_retaddr;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar7 = param_1;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
  peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0);
  if (peVar1 != (entENTITY *)0x0) {
    (**(code **)(*(int *)peVar1 + 0x68))(&local_18);
    local_18 = local_18 + unaff_retaddr;
    fVar8 = (fStack_10 - fStack_1c) * (fStack_10 - fStack_1c) +
            (local_c - local_18) * (local_c - local_18) +
            (local_8 - fStack_14) * (local_8 - fStack_14);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar11._0_4_;
      fVar8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fVar8;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1_01,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      fVar8 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    *(float *)param_1 = fStack_1c;
    *(float *)((int)param_1 + 4) = local_18;
    *(float *)((int)param_1 + 8) = fStack_14;
    if (param_2 != (m3dV *)0x0) {
      *(entENTITY **)param_2 = peVar1;
    }
    iVar2 = (**(code **)(*(int *)peVar1 + 0x78))();
    for (peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar1); peVar1 != (entENTITY *)0x0;
        peVar1 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar1)) {
      iVar3 = (**(code **)(*(int *)peVar1 + 0x78))();
      if (iVar3 == 0) {
        (**(code **)(*(int *)peVar1 + 0x68))(&fStack_1c);
        local_18 = local_18 + unaff_retaddr;
        fVar9 = (fStack_10 - fStack_1c) * (fStack_10 - fStack_1c) +
                (local_c - local_18) * (local_c - local_18) +
                (local_8 - fStack_14) * (local_8 - fStack_14);
        if (m3dSimdType == 0) {
          fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar10 = auVar11._0_4_;
          param_1 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar4 = (ulonglong)(uint)fVar9;
          uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1_02,uVar4);
          uVar6 = PackedFloatingMUL(uVar5,uVar5);
          uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
          uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
          uVar5 = PackedFloatingMUL(uVar5,uVar4);
          param_1 = (float)uVar5;
          FastExitMediaState();
        }
        else {
          param_1 = SQRT(fVar9);
        }
        if ((param_1 < fVar8) || (iVar2 != 0)) {
          *(float *)fVar7 = fStack_1c;
          *(float *)((int)fVar7 + 4) = local_18;
          *(float *)((int)fVar7 + 8) = fStack_14;
          if (param_2 != (m3dV *)0x0) {
            *(entENTITY **)param_2 = peVar1;
          }
          iVar2 = 0;
          fVar8 = param_1;
        }
      }
    }
    return fVar8;
  }
  if (plgsPlayer == (plgsACTION *)0x0) {
    animINST::GetDir(*(animINST **)(this + 0xbc),param_2);
    *(float *)param_2 = *(float *)param_2 * ___real_42480000 + local_c;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * ___real_42480000 + local_8;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * ___real_42480000 + local_4;
    uVar5 = extraout_MM1_00;
    if (param_3 != (plgsACTION **)0x0) {
      *param_3 = (plgsACTION *)0x0;
    }
  }
  else {
    (**(code **)(*(int *)plgsPlayer + 0x68))();
    uVar5 = extraout_MM1;
    if (param_3 != (plgsACTION **)0x0) {
      *param_3 = plgsPlayer;
    }
  }
  fVar7 = *(float *)(param_2 + 4);
  *(float *)(param_2 + 4) = param_1 + fVar7;
  local_8 = local_8 - (param_1 + fVar7);
  fVar7 = (local_c - *(float *)param_2) * (local_c - *(float *)param_2) +
          local_8 * local_8 +
          (local_4 - *(float *)(param_2 + 8)) * (local_4 - *(float *)(param_2 + 8));
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      return SQRT(fVar7);
    }
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    FastExitMediaState();
    return (float)uVar5;
  }
  fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
  auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar11._0_4_;
  return `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
}

