
/* from: engine:pte_sdr_static.cpp
   addr: 004D2650 */

void __thiscall pteSDR_STATIC_DATA::~pteSDR_STATIC_DATA(pteSDR_STATIC_DATA *this)

{
  apFree(*(void **)(this + 8));
  apFree(*(void **)(this + 0xc));
  apFree(*(void **)(this + 0x10));
  apFree(*(void **)(this + 0x14));
  apFree(*(void **)(this + 0x18));
  return;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D2690 */

void __thiscall pteSHADER::MakeObjIndList(pteSHADER *this,cdtOFL *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(pteManager + 0x1793c);
  *(undefined4 *)param_1 = 0;
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x48)) {
    do {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x4c) + iVar4 * 4);
      if ((((*(byte *)(iVar2 + 8) & 0x3f) == 0) && (*(int *)(iVar2 + 0x10) != 0)) &&
         (iVar3 = (**(code **)(*(int *)this + 0x30))(iVar2), iVar3 != 0)) {
        *(undefined2 *)(*(int *)(param_1 + 4) + *(int *)param_1 * 2) = *(undefined2 *)(iVar2 + 0x1c)
        ;
        *(int *)param_1 = *(int *)param_1 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x48));
  }
  return;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D2700 */

int __thiscall pteSHADER::CalcStaticData(pteSHADER *this,int param_1)

{
  undefined4 *puVar1;
  objOBJ *poVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  animINST *this_00;
  int iVar6;
  scnSCENE *this_01;
  int iVar7;
  scnSCENE *psStack_410;
  objOBJ *apoStack_40c [2];
  scnSCENE *local_404;
  
  this_01 = *(scnSCENE **)(pteManager + 0x1793c);
  puVar1 = *(undefined4 **)(pteManager + 0x1794c);
  local_404 = this_01;
  piVar3 = (int *)operator_new(0x28);
  iVar7 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = -1;
    piVar3[8] = -1;
  }
  *(int **)(this + 0x88) = piVar3;
  *piVar3 = param_1;
  (**(code **)(*(int *)this + 0x60))(puVar1);
  *(undefined4 *)(*(int *)(this + 0x88) + 4) = *puVar1;
  pvVar4 = apCalloc(4,*(uint *)(*(int *)(this + 0x88) + 4));
  *(void **)(*(int *)(this + 0x88) + 8) = pvVar4;
  pvVar4 = *(void **)(this + 0x88);
  if (*(int *)((int)pvVar4 + 8) == 0) {
    apFree(pvVar4);
    return 0;
  }
  pvVar4 = apCalloc(2,*(uint *)((int)pvVar4 + 4));
  *(void **)(*(int *)(this + 0x88) + 0xc) = pvVar4;
  iVar5 = *(int *)(this + 0x88);
  if (*(int *)(iVar5 + 0xc) == 0) {
    apFree(*(void **)(iVar5 + 8));
    apFree(*(void **)(this + 0x88));
    return 0;
  }
  pvVar4 = apCalloc(2,*(uint *)(iVar5 + 4));
  *(void **)(*(int *)(this + 0x88) + 0x10) = pvVar4;
  if (*(int *)(*(int *)(this + 0x88) + 0x10) != 0) {
    (**(code **)(*(int *)this + 0x4c))(this_01,0);
    if (0 < *(int *)(*(int *)(this + 0x88) + 4)) {
      do {
        iVar5 = IncludeStaticDataObj
                          (this,*(objOBJ **)
                                 (*(int *)(this_01 + 0x4c) +
                                 (uint)*(ushort *)(puVar1[1] + iVar7 * 2) * 4),
                           (int *)&stack0xfffffbe4,(int *)&stack0xfffffbe8,(int *)&stack0xfffffbec);
        if (iVar5 == 0) {
          return 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(*(int *)(this + 0x88) + 4));
    }
    if ((**(byte **)(this + 0x88) & 1) == 0) {
      for (this_00 = scnSCENE::FindNextInst(this_01,(animINST *)0x0); this_00 != (animINST *)0x0;
          this_00 = scnSCENE::FindNextInst(this_01,this_00)) {
        if ((((*(uint *)(this_00 + 4) & 0x48) != 0) || ((**(byte **)(this + 0x88) & 2) != 0)) &&
           ((*(uint *)(this_00 + 4) & 1) == 0)) {
          animINST::Validate(this_00,4);
          iVar7 = objMakePtrList((objOBJ **)(this_00 + 0x10),1,apoStack_40c,0x100);
          iVar5 = 0;
          this_01 = psStack_410;
          if (0 < iVar7) {
            do {
              poVar2 = apoStack_40c[iVar5];
              if (((((byte)poVar2[8] & 0x3f) == 0) && (*(int *)(poVar2 + 0x10) != 0)) &&
                 (iVar6 = IncludeStaticDataObj
                                    (this,poVar2,(int *)&stack0xfffffbe4,(int *)&stack0xfffffbe8,
                                     (int *)&stack0xfffffbec), iVar6 == 0)) {
                return 0;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar7);
          }
        }
      }
    }
    *(undefined4 *)(*(int *)(this + 0x88) + 4) = 0;
    pvVar4 = apCalloc(0x28,0);
    *(void **)(*(int *)(this + 0x88) + 0x18) = pvVar4;
    pvVar4 = *(void **)(this + 0x88);
    if (*(int *)((int)pvVar4 + 0x18) == 0) {
      if (pvVar4 != (void *)0x0) {
        apFree(*(void **)((int)pvVar4 + 8));
        apFree(*(void **)((int)pvVar4 + 0xc));
        apFree(*(void **)((int)pvVar4 + 0x10));
        apFree(*(void **)((int)pvVar4 + 0x14));
        apFree(*(void **)((int)pvVar4 + 0x18));
        operator_delete(pvVar4);
      }
      *(undefined4 *)(this + 0x88) = 0;
      return 0;
    }
    CalcStaticDataTexCoord(this);
    return 1;
  }
  apFree(*(void **)(*(int *)(this + 0x88) + 0xc));
  apFree(*(void **)(*(int *)(this + 0x88) + 8));
  apFree(*(void **)(this + 0x88));
  return 0;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D2A00 */

void __thiscall pteSHADER::CalcStaticDataTexCoord(pteSHADER *this)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  pteSHADER *ppVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_3fc [78];
  undefined4 *local_2c4;
  undefined4 local_2c0;
  float local_2bc [132];
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c [15];
  undefined4 auStack_60 [11];
  int local_34;
  float *local_30;
  float *local_2c;
  int local_28;
  int local_24;
  float *local_20;
  int local_1c;
  int local_18;
  float *local_14;
  int local_10;
  byte *local_c;
  pteSHADER *local_8;
  
  local_2c4 = local_3fc;
  iVar11 = *(int *)(this + 0x88);
  local_a4 = 0;
  local_3fc[0] = 0;
  iVar13 = 0;
  local_8 = this;
  local_28 = 0;
  local_18 = 0;
  if (0 < *(int *)(iVar11 + 4)) {
    do {
      local_1c = 0;
      local_c = *(byte **)(*(int *)(iVar11 + 8) + local_18 * 4);
      if (0 < *(short *)(*(int *)(iVar11 + 0xc) + local_18 * 2)) {
        local_10 = iVar13 * 0x28;
        do {
          local_2c0 = 3;
          local_24 = (int)*(short *)(*(int *)(iVar11 + 0x14) +
                                    (*(short *)(*(int *)(iVar11 + 0x10) + local_18 * 2) + local_1c)
                                    * 2);
          if ((*local_c & 1) == 0) {
            pfVar7 = local_2bc;
            local_34 = 0;
            local_14 = (float *)(local_c + 0x3c);
            local_20 = pfVar7;
            do {
              piVar5 = *(int **)(local_c + 0x28);
              local_30 = pfVar7;
              pfVar1 = (float *)(piVar5[0x10] +
                                (uint)*(ushort *)
                                       ((uint)*(byte *)(piVar5 + 1) * local_24 + 2 + local_34 * 2 +
                                       *piVar5) * 0xc);
              local_2c = pfVar1;
              if (m3dSimdType == 0) {
                if (((uint)local_14 & 0xf) == 0) {
                  fVar24 = *pfVar1;
                  fVar3 = pfVar1[1];
                  fVar4 = pfVar1[2];
                  fVar22 = fVar24 * *local_14 + local_14[0xc] + fVar3 * local_14[4] +
                           fVar4 * local_14[8];
                  fVar23 = fVar24 * local_14[1] + local_14[0xd] + fVar3 * local_14[5] +
                           fVar4 * local_14[9];
                  fVar24 = fVar24 * local_14[2] + local_14[0xe] + fVar3 * local_14[6] +
                           fVar4 * local_14[10];
                }
                else {
                  fVar24 = *pfVar1;
                  fVar3 = pfVar1[1];
                  fVar4 = pfVar1[2];
                  fVar22 = fVar24 * (float)*(undefined8 *)local_14 +
                           fVar3 * (float)*(undefined8 *)(local_14 + 4) +
                           fVar4 * (float)*(undefined8 *)(local_14 + 8) +
                           (float)*(undefined8 *)(local_14 + 0xc);
                  fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                           fVar3 * (float)((ulonglong)*(undefined8 *)(local_14 + 4) >> 0x20) +
                           fVar4 * (float)((ulonglong)*(undefined8 *)(local_14 + 8) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(local_14 + 0xc) >> 0x20);
                  fVar24 = fVar24 * (float)*(undefined8 *)(local_14 + 2) +
                           fVar3 * (float)*(undefined8 *)(local_14 + 6) +
                           fVar4 * (float)*(undefined8 *)(local_14 + 10) +
                           (float)*(undefined8 *)(local_14 + 0xe);
                }
                *(ulonglong *)pfVar7 = CONCAT44(fVar23,fVar22);
                pfVar7[2] = fVar24;
                local_20 = pfVar7;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar14 = (undefined4)*(undefined8 *)pfVar1;
                uVar17 = CONCAT44(uVar14,uVar14);
                uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
                uVar20 = CONCAT44(uVar14,uVar14);
                uVar21 = CONCAT44(pfVar1[2],pfVar1[2]);
                uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_14);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_14 + 4));
                uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 8));
                uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_14 + 0xc));
                uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_14 + 2));
                uVar17 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_14 + 6));
                uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 10));
                uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(local_14 + 0xe));
                uVar17 = PackedFloatingADD(uVar15,uVar17);
                uVar15 = PackedFloatingADD(uVar16,uVar21);
                *(undefined8 *)pfVar7 = uVar17;
                uVar17 = PackedFloatingADD(uVar20,uVar15);
                pfVar7[2] = (float)uVar17;
                FastExitMediaState();
                local_20 = pfVar7;
              }
              else {
                iVar13 = 0;
                iVar11 = (int)local_14 - (int)pfVar7;
                local_20 = pfVar7;
                do {
                  *pfVar7 = 0.0;
                  iVar8 = 0;
                  pfVar10 = (float *)(iVar11 + (int)pfVar7);
                  do {
                    pfVar2 = pfVar1 + iVar8;
                    fVar24 = *pfVar10;
                    iVar8 = iVar8 + 1;
                    pfVar10 = pfVar10 + 4;
                    *pfVar7 = *pfVar2 * fVar24 + *pfVar7;
                  } while (iVar8 < 3);
                  iVar8 = iVar13 + iVar8 * 4;
                  iVar13 = iVar13 + 1;
                  *pfVar7 = local_14[iVar8] + *pfVar7;
                  pfVar7 = pfVar7 + 1;
                } while (iVar13 < 3);
              }
              local_34 = local_34 + 1;
              pfVar7 = local_20 + 3;
              local_20 = pfVar7;
            } while (local_34 < 3);
          }
          else {
            iVar11 = 0;
            pfVar7 = local_2bc;
            do {
              piVar5 = *(int **)(local_c + 0x28);
              iVar13 = iVar11 * 2;
              iVar11 = iVar11 + 1;
              pfVar1 = (float *)(piVar5[0x10] +
                                (uint)*(ushort *)
                                       ((uint)*(byte *)(piVar5 + 1) * local_24 + 2 + iVar13 +
                                       *piVar5) * 0xc);
              *pfVar7 = *pfVar1;
              pfVar7[1] = pfVar1[1];
              pfVar7[2] = pfVar1[2];
              pfVar7 = pfVar7 + 3;
            } while (iVar11 < 3);
          }
          ppVar12 = local_8;
          local_ac = 1;
          local_a0 = 0x3f800000;
          iVar11 = (**(code **)(*(int *)local_8 + 0x3c))(local_c,local_24,&local_2c4,&local_a0);
          if (iVar11 != 0) {
            *(undefined4 *)(local_10 + *(int *)(*(int *)(ppVar12 + 0x88) + 0x18)) = local_a0;
            iVar8 = 0;
            puVar9 = local_9c;
            iVar11 = local_10;
            iVar13 = local_10 + 0x1c;
            do {
              iVar8 = iVar8 + 1;
              iVar11 = iVar11 + 8;
              iVar6 = *(int *)(*(int *)(local_8 + 0x88) + 0x18);
              *(undefined4 *)(iVar6 + -4 + iVar11) = *puVar9;
              *(undefined4 *)(iVar6 + iVar11) = puVar9[1];
              *(undefined4 *)(iVar13 + *(int *)(*(int *)(local_8 + 0x88) + 0x18)) =
                   auStack_60[iVar8];
              puVar9 = puVar9 + 2;
              ppVar12 = local_8;
              iVar13 = iVar13 + 4;
            } while (iVar8 < 3);
          }
          iVar13 = local_28 + 1;
          local_28 = iVar13;
          iVar11 = *(int *)(ppVar12 + 0x88);
          local_1c = local_1c + 1;
          local_10 = local_10 + 0x28;
          this = local_8;
        } while (local_1c < *(short *)(*(int *)(iVar11 + 0xc) + local_18 * 2));
      }
      iVar11 = *(int *)(this + 0x88);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar11 + 4));
  }
  return;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D2D90 */

int __thiscall
pteSHADER::IncludeStaticDataObj
          (pteSHADER *this,objOBJ *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  void *pvVar24;
  undefined4 local_3ec [78];
  undefined4 *local_2b4;
  undefined4 local_2b0;
  float local_2ac [132];
  undefined4 local_9c;
  undefined4 local_94;
  undefined1 local_90 [108];
  pteSHADER *local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  int local_14;
  float *local_10;
  objOBJ *local_c;
  int local_8;
  
  local_94 = 0;
  local_24 = this;
  iVar7 = (**(code **)(*(int *)this + 0x30))(param_1);
  if (iVar7 != 0) {
    iVar7 = *(int *)(*(int *)(this + 0x88) + 4);
    if (iVar7 <= *param_2) {
      *(int *)(*(int *)(this + 0x88) + 4) = iVar7 + 5;
      pvVar8 = apRealloc(*(void **)(*(int *)(this + 0x88) + 8),
                         *(int *)(*(int *)(this + 0x88) + 4) << 2);
      *(void **)(*(int *)(this + 0x88) + 8) = pvVar8;
      pvVar8 = apRealloc(*(void **)(*(int *)(this + 0x88) + 0xc),
                         *(int *)(*(int *)(this + 0x88) + 4) * 2);
      *(void **)(*(int *)(this + 0x88) + 0xc) = pvVar8;
      pvVar8 = apRealloc(*(void **)(*(int *)(this + 0x88) + 0x10),
                         *(int *)(*(int *)(this + 0x88) + 4) * 2);
      *(void **)(*(int *)(this + 0x88) + 0x10) = pvVar8;
      pvVar8 = *(void **)(this + 0x88);
      if (((*(int *)((int)pvVar8 + 8) == 0) || (*(int *)((int)pvVar8 + 0xc) == 0)) ||
         (*(int *)((int)pvVar8 + 0x10) == 0)) {
        if (pvVar8 != (void *)0x0) {
          apFree(*(void **)((int)pvVar8 + 8));
          apFree(*(void **)((int)pvVar8 + 0xc));
          apFree(*(void **)((int)pvVar8 + 0x10));
          apFree(*(void **)((int)pvVar8 + 0x14));
          pvVar24 = *(void **)((int)pvVar8 + 0x18);
LAB_004d31de:
          apFree(pvVar24);
          operator_delete(pvVar8);
        }
LAB_004d31ec:
        *(int *)(this + 0x88) = 0;
        return 0;
      }
    }
    if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
      animINST::Validate(*(animINST **)(param_1 + 0xbc),1);
    }
    *(objOBJ **)(*(int *)(*(int *)(this + 0x88) + 8) + *param_2 * 4) = param_1;
    *(short *)(*(int *)(*(int *)(this + 0x88) + 0x10) + *param_2 * 2) = (short)*param_3;
    local_2b4 = local_3ec;
    local_3ec[0] = 0;
    local_20 = 0;
    local_8 = 0;
    *(undefined2 *)(*(int *)(*(int *)(this + 0x88) + 0xc) + *param_2 * 2) = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        local_9c = 1;
        local_2b0 = 3;
        if (((byte)*param_1 & 1) == 0) {
          pfVar9 = local_2ac;
          local_14 = 0;
          local_c = param_1 + 0x3c;
          local_10 = pfVar9;
          do {
            piVar6 = *(int **)(param_1 + 0x28);
            local_18 = pfVar9;
            pfVar1 = (float *)(piVar6[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar6 + 1) * local_8 + 2 + local_14 * 2 +
                                     *piVar6) * 0xc);
            local_1c = pfVar1;
            if (m3dSimdType == 0) {
              if (((uint)local_c & 0xf) == 0) {
                fVar23 = *pfVar1;
                fVar4 = pfVar1[1];
                fVar5 = pfVar1[2];
                fVar21 = fVar23 * *(float *)local_c + *(float *)(local_c + 0x30) +
                         fVar4 * *(float *)(local_c + 0x10) + fVar5 * *(float *)(local_c + 0x20);
                fVar22 = fVar23 * *(float *)(local_c + 4) + *(float *)(local_c + 0x34) +
                         fVar4 * *(float *)(local_c + 0x14) + fVar5 * *(float *)(local_c + 0x24);
                fVar23 = fVar23 * *(float *)(local_c + 8) + *(float *)(local_c + 0x38) +
                         fVar4 * *(float *)(local_c + 0x18) + fVar5 * *(float *)(local_c + 0x28);
              }
              else {
                fVar23 = *pfVar1;
                fVar4 = pfVar1[1];
                fVar5 = pfVar1[2];
                fVar21 = fVar23 * (float)*(undefined8 *)local_c +
                         fVar4 * (float)*(undefined8 *)(local_c + 0x10) +
                         fVar5 * (float)*(undefined8 *)(local_c + 0x20) +
                         (float)*(undefined8 *)(local_c + 0x30);
                fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
                         fVar4 * (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) +
                         fVar5 * (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(local_c + 0x30) >> 0x20);
                fVar23 = fVar23 * (float)*(undefined8 *)(local_c + 8) +
                         fVar4 * (float)*(undefined8 *)(local_c + 0x18) +
                         fVar5 * (float)*(undefined8 *)(local_c + 0x28) +
                         (float)*(undefined8 *)(local_c + 0x38);
              }
              *(ulonglong *)pfVar9 = CONCAT44(fVar22,fVar21);
              pfVar9[2] = fVar23;
              local_10 = pfVar9;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar13 = (undefined4)*(undefined8 *)pfVar1;
              uVar16 = CONCAT44(uVar13,uVar13);
              uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
              uVar19 = CONCAT44(uVar13,uVar13);
              uVar20 = CONCAT44(pfVar1[2],pfVar1[2]);
              uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_c);
              uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_c + 0x10));
              uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_c + 0x20));
              uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(local_c + 0x30));
              uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_c + 8));
              uVar16 = PackedFloatingADD(uVar15,uVar17);
              uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_c + 0x18));
              uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_c + 0x28));
              uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(local_c + 0x38));
              uVar16 = PackedFloatingADD(uVar14,uVar16);
              uVar14 = PackedFloatingADD(uVar15,uVar20);
              *(undefined8 *)pfVar9 = uVar16;
              uVar16 = PackedFloatingADD(uVar19,uVar14);
              pfVar9[2] = (float)uVar16;
              FastExitMediaState();
              local_10 = pfVar9;
            }
            else {
              iVar12 = 0;
              iVar7 = (int)local_c - (int)pfVar9;
              local_10 = pfVar9;
              do {
                *pfVar9 = 0.0;
                iVar10 = 0;
                pfVar11 = (float *)(iVar7 + (int)pfVar9);
                do {
                  pfVar2 = pfVar1 + iVar10;
                  fVar23 = *pfVar11;
                  iVar10 = iVar10 + 1;
                  pfVar11 = pfVar11 + 4;
                  *pfVar9 = *pfVar2 * fVar23 + *pfVar9;
                } while (iVar10 < 3);
                iVar10 = iVar12 + iVar10 * 4;
                iVar12 = iVar12 + 1;
                *pfVar9 = *(float *)(local_c + iVar10 * 4) + *pfVar9;
                pfVar9 = pfVar9 + 1;
              } while (iVar12 < 3);
            }
            local_14 = local_14 + 1;
            pfVar9 = local_10 + 3;
            local_10 = pfVar9;
          } while (local_14 < 3);
        }
        else {
          piVar6 = *(int **)(param_1 + 0x28);
          iVar7 = 0;
          pfVar9 = local_2ac;
          do {
            iVar12 = iVar7 * 2;
            iVar7 = iVar7 + 1;
            pfVar1 = (float *)(piVar6[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar6 + 1) * local_8 + 2 + iVar12 + *piVar6)
                              * 0xc);
            *pfVar9 = *pfVar1;
            pfVar9[1] = pfVar1[1];
            pfVar9[2] = pfVar1[2];
            pfVar9 = pfVar9 + 3;
          } while (iVar7 < 3);
        }
        this = local_24;
        iVar7 = (**(code **)(*(int *)local_24 + 0x3c))(param_1,local_8,&local_2b4,local_90);
        if (iVar7 != 0) {
          iVar7 = *(int *)(this + 0x88);
          psVar3 = (short *)(*(int *)(iVar7 + 0xc) + *param_2 * 2);
          *psVar3 = *psVar3 + 1;
          if (*param_4 <= *param_3) {
            pvVar8 = apRealloc(*(void **)(iVar7 + 0x14),*param_4 * 2 + 0x3c);
            if (pvVar8 == (void *)0x0) {
              pvVar8 = *(void **)(this + 0x88);
              if (pvVar8 == (void *)0x0) goto LAB_004d31ec;
              apFree(*(void **)((int)pvVar8 + 8));
              apFree(*(void **)((int)pvVar8 + 0xc));
              apFree(*(void **)((int)pvVar8 + 0x10));
              apFree(*(void **)((int)pvVar8 + 0x14));
              pvVar24 = *(void **)((int)pvVar8 + 0x18);
              goto LAB_004d31de;
            }
            *(void **)(iVar7 + 0x14) = pvVar8;
            *param_4 = *param_4 + 0x1e;
          }
          local_20 = 1;
          *(undefined2 *)(*(int *)(iVar7 + 0x14) + *param_3 * 2) = (undefined2)local_8;
          *param_3 = *param_3 + 1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(param_1 + 0x10));
      if (local_20 != 0) {
        *param_2 = *param_2 + 1;
      }
    }
  }
  return 1;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D3240 */

int __thiscall
pteSDR_STATIC_DATA::IsShadedFace
          (pteSDR_STATIC_DATA *this,int param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ptePOLY_DATA *ppVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  ptePOLY_DATA *ppVar16;
  
  if ((*(short *)(*(int *)(this + 0xc) + param_1 * 2) == 1) &&
     (*(short *)(*(int *)(this + 0x14) + *(short *)(*(int *)(this + 0x10) + param_1 * 2) * 2) == -1)
     ) {
    return 1;
  }
  if ((*(int *)(this + 0x1c) == param_1) && (*(int *)(this + 0x20) < param_2)) {
    iVar9 = *(int *)(this + 0x24);
  }
  else {
    iVar9 = 0;
  }
  *(int *)(this + 0x1c) = param_1;
  *(int *)(this + 0x20) = param_2;
  iVar13 = (int)*(short *)(*(int *)(this + 0xc) + param_1 * 2);
  if (iVar9 < iVar13) {
    iVar12 = (int)*(short *)(*(int *)(this + 0x10) + param_1 * 2);
    psVar15 = (short *)(*(int *)(this + 0x14) + (iVar9 + iVar12) * 2);
    do {
      iVar14 = (int)*psVar15;
      iVar10 = iVar9 + iVar12;
      if (iVar14 == param_2) {
        *(int *)(this + 0x24) = iVar9;
        if ((param_3 != (pteSDR_INFO *)0x0) && (**(int **)param_3 != 0)) {
          iVar10 = iVar10 * 0x28;
          iVar9 = *(int *)(this + 0x18) + iVar10;
          param_1 = 0;
          fVar1 = *(float *)(iVar9 + 0xc);
          fVar2 = *(float *)(iVar9 + 4);
          fVar3 = *(float *)(iVar9 + 0x14);
          fVar4 = *(float *)(iVar9 + 4);
          fVar5 = *(float *)(iVar9 + 0x10);
          fVar6 = *(float *)(iVar9 + 8);
          fVar7 = *(float *)(iVar9 + 0x18);
          fVar8 = *(float *)(iVar9 + 8);
          if (0 < *(int *)(param_3 + 4)) {
            iVar9 = 0x118;
            ppVar11 = param_4;
            do {
              *(undefined4 *)(param_4 + iVar9 + -0xd4) =
                   *(undefined4 *)(iVar10 + 0x1c + *(int *)(this + 0x18));
              *(float *)(ppVar11 + 4) =
                   (fVar3 - fVar4) * *(float *)(iVar9 + *(int *)param_3) +
                   (fVar1 - fVar2) * *(float *)(iVar9 + -0x20 + *(int *)param_3) +
                   *(float *)(iVar10 + 4 + *(int *)(this + 0x18));
              param_1 = param_1 + 1;
              *(float *)(ppVar11 + 8) =
                   (fVar7 - fVar8) * *(float *)(iVar9 + *(int *)param_3) +
                   (fVar5 - fVar6) * *(float *)(iVar9 + -0x20 + *(int *)param_3) +
                   *(float *)(iVar10 + 8 + *(int *)(this + 0x18));
              iVar9 = iVar9 + 4;
              ppVar11 = ppVar11 + 8;
            } while (param_1 < *(int *)(param_3 + 4));
          }
          *(undefined4 *)param_4 = *(undefined4 *)(iVar10 + *(int *)(this + 0x18));
          return 1;
        }
        iVar10 = iVar10 * 0x28;
        param_1 = 3;
        iVar9 = iVar10;
        ppVar11 = param_4 + 4;
        iVar13 = iVar10 + 0x1c;
        ppVar16 = param_4 + 0x44;
        do {
          *(undefined4 *)ppVar16 = *(undefined4 *)(iVar13 + *(int *)(this + 0x18));
          iVar12 = *(int *)(this + 0x18);
          *(undefined4 *)ppVar11 = *(undefined4 *)(iVar9 + 4 + iVar12);
          *(undefined4 *)(ppVar11 + 4) = *(undefined4 *)(iVar9 + 8 + iVar12);
          param_1 = param_1 + -1;
          iVar9 = iVar9 + 8;
          ppVar11 = ppVar11 + 8;
          iVar13 = iVar13 + 4;
          ppVar16 = ppVar16 + 4;
        } while (param_1 != 0);
        *(undefined4 *)param_4 = *(undefined4 *)(iVar10 + *(int *)(this + 0x18));
        return 1;
      }
      if (iVar14 != param_2 && param_2 <= iVar14) break;
      iVar9 = iVar9 + 1;
      psVar15 = psVar15 + 1;
    } while (iVar9 < iVar13);
  }
  *(int *)(this + 0x24) = iVar9;
  return 0;
}




/* from: engine:pte_sdr_static.cpp
   addr: 004D3430 */

int __thiscall pteSDR_STATIC_DATA::GetObjShadeCode(pteSDR_STATIC_DATA *this,objOBJ *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xbc) != 0) && (((byte)*this & 1) != 0)) {
    return -2;
  }
  iVar1 = 0;
  if (0 < *(int *)(this + 4)) {
    piVar2 = *(int **)(this + 8);
    do {
      if ((objOBJ *)*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return -1;
}

