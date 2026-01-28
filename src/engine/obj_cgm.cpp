
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_cgm.cpp
   addr: 005804B0 */

int __thiscall objOBJ::Weld(objOBJ *this,objWELD_PARAM *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  objMTL *poVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  objSPLIT_ENTRY *this_00;
  uint local_78;
  uint local_74;
  int local_70;
  undefined4 *local_6c;
  int local_64;
  float local_60;
  int local_54;
  uint local_48;
  undefined4 *local_44;
  uint local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_10 = _m3dVZero;
  local_8 = DAT_00963744;
  local_2c = 0;
  local_28 = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0xffffffff;
  local_c = DAT_00963740;
  local_4 = 0.0;
  local_30 = &cgmSEARCH_VLIST::_vftable_;
  if (*(int *)(this + 0x28) != 0) {
    if (param_1 == (objWELD_PARAM *)0x0) {
      param_1 = (objWELD_PARAM *)&DAT_009643d0;
    }
    uVar12 = *(uint *)(this + 0x14);
    puVar9 = (ushort *)(*(int *)(this + 0x28) + 6);
    iVar18 = 3;
    do {
      if ((int)uVar12 <= (int)(uint)*puVar9) {
        uVar12 = (uint)*puVar9;
      }
      puVar9 = puVar9 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    if (uVar12 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x34);
      bVar2 = false;
      bVar1 = false;
      if ((puVar4 == (undefined4 *)0x0) || (puVar6 = puVar4, *(int *)(param_1 + 0x44) < (int)uVar12)
         ) {
        puVar4 = (undefined4 *)apCalloc(uVar12,4);
        if (puVar4 == (undefined4 *)0x0) {
LAB_0058058f:
          local_30 = &cgmSEARCH::_vftable_;
          operator_delete(local_24);
          return 0;
        }
        bVar1 = true;
      }
      else {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      local_64 = 0;
      do {
        if (local_64 == 0) {
          if (*(short *)(this + 0x22) == -1) {
            uVar12 = *(uint *)(this + 0x14);
            local_78 = 0xc;
            local_6c = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
            local_60 = *(float *)param_1;
            iVar18 = *(int *)(param_1 + 0x20);
            goto LAB_00580617;
          }
        }
        else {
          local_78 = 8;
          uVar12 = (uint)*(ushort *)(*(int *)(this + 0x28) + 4 + local_64 * 2);
          local_6c = *(undefined4 **)(*(int *)(this + 0x28) + 8 + local_64 * 4);
          local_60 = *(float *)(param_1 + 4);
          iVar18 = *(int *)(param_1 + local_64 * 4 + 0x20);
LAB_00580617:
          if ((uVar12 != 0) && (_DAT_005df608 <= local_60)) {
            local_14 = local_78 >> 2;
            uVar5 = iVar18 * local_78;
            puVar6 = (undefined4 *)(uVar5 + (int)local_6c);
            iVar7 = cgmSEARCH_VLIST::Init
                              ((cgmSEARCH_VLIST *)&local_30,uVar12 - iVar18,local_78,puVar6,
                               *(int **)(param_1 + 0x3c));
            if (iVar7 == 0) {
              local_30 = &cgmSEARCH::_vftable_;
              operator_delete(local_24);
              return 0;
            }
            local_4 = local_60;
            puVar8 = puVar4;
            for (uVar13 = uVar12; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar8 = 0xffffffff;
              puVar8 = puVar8 + 1;
            }
            puVar8 = *(undefined4 **)(param_1 + 0x38);
            if ((puVar8 == (undefined4 *)0x0) || (*(int *)(param_1 + 0x48) < (int)uVar12)) {
              puVar8 = (undefined4 *)apCalloc(uVar12,local_78);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0058058f;
              bVar2 = true;
            }
            puVar17 = local_6c;
            puVar21 = puVar8;
            for (uVar13 = uVar5 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar21 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar21 = puVar21 + 1;
            }
            iVar7 = 0;
            for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
              *(undefined1 *)puVar21 = *(undefined1 *)puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
              puVar21 = (undefined4 *)((int)puVar21 + 1);
            }
            if (0 < iVar18) {
              do {
                puVar4[iVar7] = iVar7;
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar18);
            }
            local_70 = 0;
            puVar17 = local_6c;
            if (0 < iVar18) {
              do {
                iVar7 = cgmSEARCH::Search((cgmSEARCH *)&local_30,puVar17,-1);
                iVar14 = cgmSEARCH::Search((cgmSEARCH *)&local_30,puVar17,1);
                for (; iVar7 <= iVar14; iVar7 = iVar7 + 1) {
                  iVar19 = *(int *)((int)local_24 + iVar7 * 4) + iVar18;
                  iVar16 = 0;
                  if (0 < (int)local_14) {
                    pfVar15 = (float *)(iVar19 * local_78 + (int)local_6c);
                    do {
                      local_74 = (uint)(ABS((float)puVar17[iVar16] - *pfVar15) < local_60);
                      if ((float)local_74 == ___real_00000000) {
                        if (iVar16 < (int)local_14) goto LAB_005807af;
                        break;
                      }
                      iVar16 = iVar16 + 1;
                      pfVar15 = pfVar15 + 1;
                    } while (iVar16 < (int)local_14);
                  }
                  puVar4[iVar19] = local_70;
LAB_005807af:
                }
                local_70 = local_70 + 1;
                puVar17 = (undefined4 *)((int)puVar17 + local_78);
              } while (local_70 < iVar18);
            }
            local_74 = iVar18;
            if (iVar18 < (int)uVar12) {
              local_44 = (undefined4 *)(uVar5 + (int)puVar8);
              iVar7 = iVar18;
              do {
                if (puVar4[iVar7] == -1) {
                  iVar14 = cgmSEARCH::Search((cgmSEARCH *)&local_30,puVar6,-1);
                  iVar16 = cgmSEARCH::Search((cgmSEARCH *)&local_30,puVar6,1);
                  for (; iVar14 <= iVar16; iVar14 = iVar14 + 1) {
                    iVar19 = 0;
                    iVar20 = *(int *)((int)local_24 + iVar14 * 4) + iVar18;
                    if (0 < (int)local_14) {
                      pfVar15 = (float *)(iVar20 * local_78 + (int)local_6c);
                      do {
                        local_48 = (uint)(ABS((float)puVar6[iVar19] - *pfVar15) < local_60);
                        if ((float)local_48 == ___real_00000000) {
                          if (iVar19 < (int)local_14) goto LAB_005808be;
                          break;
                        }
                        iVar19 = iVar19 + 1;
                        pfVar15 = pfVar15 + 1;
                      } while (iVar19 < (int)local_14);
                    }
                    puVar4[iVar20] = local_74;
LAB_005808be:
                  }
                  puVar17 = puVar6;
                  puVar21 = local_44;
                  for (uVar5 = local_78 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar21 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar21 = puVar21 + 1;
                  }
                  for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
                    *(undefined1 *)puVar21 = *(undefined1 *)puVar17;
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                    puVar21 = (undefined4 *)((int)puVar21 + 1);
                  }
                  local_74 = local_74 + 1;
                  local_44 = (undefined4 *)((int)local_44 + local_78);
                }
                iVar7 = iVar7 + 1;
                puVar6 = (undefined4 *)((int)puVar6 + local_78);
              } while (iVar7 < (int)uVar12);
            }
            if (bVar2) {
              apFree(local_6c);
              if (local_64 == 0) {
                *(uint *)(this + 0x14) = local_74;
                *(undefined4 **)(*(int *)(this + 0x28) + 0x40) = puVar8;
              }
              else {
                *(undefined2 *)(*(int *)(this + 0x28) + 4 + local_64 * 2) = (undefined2)local_74;
                *(undefined4 **)(*(int *)(this + 0x28) + 8 + local_64 * 4) = puVar8;
              }
            }
            else {
              for (uVar5 = local_74 * local_78 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *local_6c = *puVar8;
                puVar8 = puVar8 + 1;
                local_6c = local_6c + 1;
              }
              for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
                *(undefined1 *)local_6c = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                local_6c = (undefined4 *)((int)local_6c + 1);
              }
              if (local_64 == 0) {
                AllocVertList(this,local_74);
              }
              else {
                AllocTexCoord(this,local_64 + -1,local_74);
              }
            }
            bVar3 = false;
            if (((int)local_74 < (int)uVar12) && (*(int *)(this + 0x10) == *(int *)(param_1 + 0x1c))
               ) {
              bVar3 = true;
            }
            if (0 < *(int *)(this + 0x10)) {
              local_70 = 0;
              puVar9 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
              if (*puVar9 != 0) {
                local_54 = 0;
                do {
                  this_00 = (objSPLIT_ENTRY *)(*(int *)(puVar9 + 1) + local_54);
                  if ((bVar3) ||
                     (*(int *)(param_1 + 0x1c) <=
                      (int)((uint)*(ushort *)(this_00 + 0x6a) + (uint)*(ushort *)(this_00 + 0x68))))
                  {
                    if (0 < local_64) {
                      poVar10 = objSPLIT_ENTRY::FindMtlTCCoordID(this_00,this,local_64 + -1);
                      if (poVar10 == (objMTL *)0x0) goto LAB_00580b05;
                      local_34 = (uint)*(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6 +
                                                (char)poVar10[0x18] * 4);
                    }
                    local_44 = (undefined4 *)0x0;
                    if (*(short *)(this_00 + 0x6a) != 0) {
                      do {
                        if ((bVar3) ||
                           (*(int *)(param_1 + 0x1c) <=
                            (int)((uint)*(ushort *)(this_00 + 0x68) + (int)local_44))) {
                          puVar11 = (ushort *)
                                    (((uint)*(ushort *)(this_00 + 0x68) + (int)local_44) *
                                     (uint)*(byte *)(*(int **)(this + 0x28) + 1) +
                                    **(int **)(this + 0x28));
                          iVar18 = 0;
                          puVar9 = puVar11;
                          do {
                            puVar9 = puVar9 + 1;
                            if (local_64 == 0) {
                              *puVar9 = *(ushort *)(puVar4 + *puVar9);
                            }
                            else {
                              iVar7 = iVar18 + local_34 * 3;
                              puVar11[iVar7 + 4] = *(ushort *)(puVar4 + puVar11[iVar7 + 4]);
                            }
                            iVar18 = iVar18 + 1;
                          } while (iVar18 < 3);
                        }
                        local_44 = (undefined4 *)((int)local_44 + 1);
                      } while ((int)local_44 < (int)(uint)*(ushort *)(this_00 + 0x6a));
                    }
                  }
LAB_00580b05:
                  local_70 = local_70 + 1;
                  local_54 = local_54 + 0x70;
                  puVar9 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
                } while (local_70 < (int)(uint)*puVar9);
              }
            }
            cgmSEARCH_VLIST::Term((cgmSEARCH_VLIST *)&local_30);
          }
        }
        local_64 = local_64 + 1;
      } while (local_64 < 4);
      if (bVar1) {
        apFree(puVar4);
      }
      RemoveDegenerateFaces(this,param_1);
      if ((*(int *)(param_1 + 0xc) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
        RemoveUnusedVertTexCoord(this,param_1);
      }
    }
  }
  local_30 = &cgmSEARCH::_vftable_;
  operator_delete(local_24);
  return 1;
}




/* from: engine:obj_cgm.cpp
   addr: 00580BF0 */

int __thiscall objOBJ::RemoveDegenerateFaces(objOBJ *this,objWELD_PARAM *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  objFACE *poVar9;
  objOBJ *poVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  objOBJ *poVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_228;
  float local_224 [60];
  int local_134;
  objOBJ local_130 [240];
  m3dV local_40 [12];
  m3dV local_34 [12];
  int local_28;
  objOBJ *local_24;
  int local_20;
  objOBJ *local_1c;
  int local_18;
  objOBJ *local_14;
  int local_10;
  int local_c;
  float *local_8;
  
  iVar16 = *(int *)(this + 0x10);
  if (iVar16 == 0) {
    return iVar16;
  }
  if (param_1 == (objWELD_PARAM *)0x0) {
    param_1 = (objWELD_PARAM *)&DAT_009643d0;
  }
  local_18 = 0;
  local_c = *(int *)(param_1 + 0x1c);
  if (local_c < iVar16) {
    local_10 = local_c + 1;
    do {
      local_28 = 0;
      iVar16 = **(int **)(this + 0x28);
      iVar8 = (uint)*(byte *)(*(int **)(this + 0x28) + 1) * local_c;
      sVar4 = *(short *)(iVar8 + 2 + iVar16);
      iVar8 = iVar8 + iVar16;
      sVar5 = *(short *)(iVar8 + 4);
      if (((sVar4 == sVar5) || (sVar6 = *(short *)(iVar8 + 6), sVar5 == sVar6)) || (sVar4 == sVar6))
      {
        local_28 = 1;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_00580f13:
        if (local_28 != 0) goto LAB_00580f1f;
      }
      else {
        iVar16 = 0;
        local_134 = 3;
        poVar10 = local_130;
        if (((byte)*this & 1) == 0) {
          local_14 = this + 0x3c;
          local_20 = 0;
          do {
            iVar16 = local_20;
            local_24 = poVar10;
            poVar9 = GetFace(this,local_c);
            local_8 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) +
                               (uint)*(ushort *)(poVar9 + iVar16 * 2 + 2) * 0xc);
            local_1c = poVar10;
            if (m3dSimdType == 0) {
              if (((uint)local_14 & 0xf) == 0) {
                fVar29 = *local_8;
                fVar2 = local_8[1];
                fVar3 = local_8[2];
                fVar27 = fVar29 * *(float *)local_14 + *(float *)(local_14 + 0x30) +
                         fVar2 * *(float *)(local_14 + 0x10) + fVar3 * *(float *)(local_14 + 0x20);
                fVar28 = fVar29 * *(float *)(local_14 + 4) + *(float *)(local_14 + 0x34) +
                         fVar2 * *(float *)(local_14 + 0x14) + fVar3 * *(float *)(local_14 + 0x24);
                fVar29 = fVar29 * *(float *)(local_14 + 8) + *(float *)(local_14 + 0x38) +
                         fVar2 * *(float *)(local_14 + 0x18) + fVar3 * *(float *)(local_14 + 0x28);
              }
              else {
                fVar29 = *local_8;
                fVar2 = local_8[1];
                fVar3 = local_8[2];
                fVar27 = fVar29 * (float)*(undefined8 *)local_14 +
                         fVar2 * (float)*(undefined8 *)(local_14 + 0x10) +
                         fVar3 * (float)*(undefined8 *)(local_14 + 0x20) +
                         (float)*(undefined8 *)(local_14 + 0x30);
                fVar28 = fVar29 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                         fVar2 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x10) >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x20) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(local_14 + 0x30) >> 0x20);
                fVar29 = fVar29 * (float)*(undefined8 *)(local_14 + 8) +
                         fVar2 * (float)*(undefined8 *)(local_14 + 0x18) +
                         fVar3 * (float)*(undefined8 *)(local_14 + 0x28) +
                         (float)*(undefined8 *)(local_14 + 0x38);
              }
              *(ulonglong *)poVar10 = CONCAT44(fVar28,fVar27);
              *(float *)(poVar10 + 8) = fVar29;
              local_20 = iVar16;
              local_24 = poVar10;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar19 = (undefined4)*(undefined8 *)local_8;
              uVar22 = CONCAT44(uVar19,uVar19);
              uVar19 = (undefined4)((ulonglong)*(undefined8 *)local_8 >> 0x20);
              uVar25 = CONCAT44(uVar19,uVar19);
              uVar26 = CONCAT44(local_8[2],local_8[2]);
              uVar20 = PackedFloatingMUL(uVar22,*(undefined8 *)local_14);
              uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(local_14 + 0x10));
              uVar23 = PackedFloatingMUL(uVar26,*(undefined8 *)(local_14 + 0x20));
              uVar20 = PackedFloatingADD(uVar20,*(undefined8 *)(local_14 + 0x30));
              uVar24 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_14 + 8));
              uVar22 = PackedFloatingADD(uVar21,uVar23);
              uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(local_14 + 0x18));
              uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(local_14 + 0x28));
              uVar25 = PackedFloatingADD(uVar24,*(undefined8 *)(local_14 + 0x38));
              uVar22 = PackedFloatingADD(uVar20,uVar22);
              uVar20 = PackedFloatingADD(uVar21,uVar26);
              *(undefined8 *)poVar10 = uVar22;
              uVar22 = PackedFloatingADD(uVar25,uVar20);
              *(float *)(poVar10 + 8) = (float)uVar22;
              FastExitMediaState();
              local_20 = iVar16;
              local_24 = poVar10;
            }
            else {
              iVar16 = 0;
              local_1c = local_14 + -(int)poVar10;
              do {
                poVar15 = local_1c;
                *(float *)poVar10 = 0.0;
                iVar8 = 0;
                poVar15 = poVar15 + (int)poVar10;
                do {
                  iVar12 = iVar8 + 1;
                  *(float *)poVar10 = local_8[iVar8] * *(float *)poVar15 + *(float *)poVar10;
                  iVar8 = iVar12;
                  poVar15 = poVar15 + 0x10;
                } while (iVar12 < 3);
                iVar8 = iVar16 + iVar12 * 4;
                iVar16 = iVar16 + 1;
                *(float *)poVar10 = *(float *)(local_14 + iVar8 * 4) + *(float *)poVar10;
                poVar10 = poVar10 + 4;
              } while (iVar16 < 3);
            }
            local_20 = local_20 + 1;
            poVar10 = local_24 + 0xc;
            local_24 = poVar10;
          } while (local_20 < local_134);
        }
        else {
          do {
            poVar9 = GetFace(this,local_c);
            iVar8 = iVar16 * 2;
            iVar16 = iVar16 + 1;
            pfVar1 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) +
                              (uint)*(ushort *)(poVar9 + iVar8 + 2) * 0xc);
            *(float *)poVar10 = *pfVar1;
            *(float *)(poVar10 + 4) = pfVar1[1];
            *(float *)(poVar10 + 8) = pfVar1[2];
            poVar10 = poVar10 + 0xc;
          } while (iVar16 < local_134);
        }
        piVar7 = *(int **)(this + 0x28);
        local_8 = local_224;
        local_228 = 3;
        iVar16 = 0;
        do {
          iVar8 = iVar16 * 2;
          iVar16 = iVar16 + 1;
          pfVar1 = (float *)(piVar7[0x10] +
                            (uint)*(ushort *)
                                   ((uint)*(byte *)(piVar7 + 1) * local_c + 2 + iVar8 + *piVar7) *
                            0xc);
          *local_8 = *pfVar1;
          local_8[1] = pfVar1[1];
          local_8[2] = pfVar1[2];
          local_8 = local_8 + 3;
        } while (iVar16 < 3);
        iVar16 = _m3dGetPolyNormal((m3dPOLY *)&local_134,local_34);
        if ((iVar16 != 0) ||
           (iVar16 = _m3dGetPolyNormal((m3dPOLY *)&local_228,local_40), iVar16 != 0))
        goto LAB_00580f13;
LAB_00580f1f:
        if (local_c < *(int *)(this + 0x10) + -1) {
          uVar11 = (uint)*(byte *)(*(int **)(this + 0x28) + 1);
          iVar16 = **(int **)(this + 0x28);
          uVar13 = ((*(int *)(this + 0x10) - local_c) + -1) * uVar11;
          puVar17 = (undefined4 *)(local_10 * uVar11 + iVar16);
          puVar18 = (undefined4 *)(uVar11 * local_c + iVar16);
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
        }
        local_c = local_c + -1;
        local_10 = local_10 + -1;
        local_18 = local_18 + 1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (local_c < *(int *)(this + 0x10));
    if (local_18 != 0) {
      AllocFaceList(this,*(int *)(this + 0x10),(uint)*(byte *)(*(int *)(this + 0x28) + 5));
      CompressFaceSplit(this);
      return local_18;
    }
  }
  return 0;
}




/* from: engine:obj_cgm.cpp
   addr: 00580FC0 */

objOBJ * __thiscall objOBJ::ExtractObj(objOBJ *this,uchar *param_1,int param_2)

{
  objOBJ *this_00;
  objOBJ *poVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *poVar4;
  
  this_00 = Duplicate(this,0);
  poVar1 = (objOBJ *)0x0;
  if (this_00 != (objOBJ *)0x0) {
    if (0 < *(int *)(this + 0x10)) {
      do {
        poVar1[(int)param_1] = (objOBJ)(poVar1[(int)param_1] == (objOBJ)0x0);
        poVar1 = poVar1 + 1;
      } while ((int)poVar1 < *(int *)(this + 0x10));
    }
    iVar2 = RemoveFaces(this_00,param_1,param_2);
    if (iVar2 == 0) {
      return (objOBJ *)0x0;
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        param_1[iVar2] = param_1[iVar2] == '\0';
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x10));
    }
    poVar3 = this + 0x3c;
    poVar4 = this_00 + 0x7c;
    for (iVar2 = 0x10; poVar1 = this_00, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)poVar4 = *(undefined4 *)poVar3;
      poVar3 = poVar3 + 4;
      poVar4 = poVar4 + 4;
    }
  }
  return poVar1;
}




/* from: engine:obj_cgm.cpp
   addr: 00581040 */

int __thiscall objOBJ::RemoveFaces(objOBJ *this,uchar *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint _Size;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(this + 0x10)) {
    local_54 = 0;
    do {
      if (param_1[iVar6] == '\0') {
        _Size = (uint)*(byte *)(*(int **)(this + 0x28) + 1);
        iVar2 = **(int **)(this + 0x28);
        memmove((void *)(_Size * iVar5 + iVar2),(void *)(_Size * iVar6 + iVar2),_Size);
        iVar2 = *(int *)(*(int *)(this + 0x28) + 0x44);
        if (iVar2 != 0) {
          puVar1 = (undefined4 *)(iVar4 + iVar2);
          puVar3 = (undefined4 *)(local_54 + iVar2);
          *puVar3 = *puVar1;
          puVar3[1] = puVar1[1];
          puVar3[2] = puVar1[2];
        }
        iVar5 = iVar5 + 1;
        local_54 = local_54 + 0xc;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *(int *)(this + 0x10));
  }
  iVar4 = AllocFaceList(this,iVar5,(uint)*(byte *)(*(int *)(this + 0x28) + 5));
  if (iVar4 == 0) {
    return 0;
  }
  FreeStateFaceList(this);
  FreeNormalList(this);
  if (*(int *)(*(int *)(this + 0x28) + 0x44) != 0) {
    iVar4 = AllocNormalList(this,iVar5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  *(int *)(this + 0x10) = iVar5;
  CompressFaceSplit(this);
  if (param_2 != 0) {
    local_2c = 0;
    local_28 = 0;
    local_50 = 0x3a83126f;
    local_4c = 0x3a83126f;
    local_48 = 1;
    local_3c = 1;
    local_34 = 0;
    local_30 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_14 = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    local_44 = 1;
    local_40 = 1;
    iVar4 = RemoveUnusedVertTexCoord(this,(objWELD_PARAM *)&local_50);
    if (iVar4 == 0) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:obj_cgm.cpp
   addr: 005811A0 */

int __thiscall objOBJ::RemoveUnusedVertTexCoord(objOBJ *this,objWELD_PARAM *param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  objMTL *poVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  objSPLIT_ENTRY *poVar15;
  undefined4 *puVar16;
  undefined4 *local_38;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  void *local_24;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 == (objWELD_PARAM *)0x0) {
      param_1 = (objWELD_PARAM *)&DAT_009643d0;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      local_1c = *(uint *)(this + 0x14);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar13 = 3;
      puVar10 = (ushort *)(*(int *)(this + 0x28) + 6);
      do {
        if ((int)local_1c <= (int)(uint)*puVar10) {
          local_1c = (uint)*puVar10;
        }
        puVar10 = puVar10 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    puVar6 = *(undefined4 **)(param_1 + 0x30);
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    if ((puVar6 == (undefined4 *)0x0) || (*(int *)(param_1 + 0x40) < (int)local_1c)) {
      puVar6 = (undefined4 *)apMalloc(local_1c);
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      bVar3 = true;
    }
    local_38 = *(undefined4 **)(param_1 + 0x34);
    if ((local_38 == (undefined4 *)0x0) ||
       (uVar11 = local_1c, puVar12 = local_38, *(int *)(param_1 + 0x44) < (int)local_1c)) {
      local_38 = (undefined4 *)apMalloc(local_1c * 4);
      if (local_38 == (undefined4 *)0x0) {
        return 0;
      }
      bVar5 = true;
    }
    else {
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    local_30 = *(undefined4 **)(param_1 + 0x38);
    if ((local_30 == (undefined4 *)0x0) || (*(int *)(param_1 + 0x48) < (int)local_1c)) {
      local_30 = (undefined4 *)apMalloc(local_1c * 0xc);
      if (local_30 == (undefined4 *)0x0) {
        return 0;
      }
      bVar4 = true;
    }
    if (*(int *)(*(int *)(this + 0x28) + 0x4c) == 0) {
      local_24 = (void *)0x0;
    }
    else {
      local_24 = apCalloc(*(uint *)(this + 0x14),4);
      if (local_24 == (void *)0x0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(short *)(this + 0x22) == -1)) {
      puVar12 = puVar6;
      for (uVar11 = local_1c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (uVar11 = local_1c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      iVar13 = 0;
      if (0 < *(int *)(this + 0x10)) {
        do {
          iVar7 = 2;
          do {
            iVar7 = iVar7 + 2;
            *(undefined1 *)
             ((uint)*(ushort *)
                     ((uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar13 + **(int **)(this + 0x28)
                      + -2 + iVar7) + (int)puVar6) = 1;
          } while (iVar7 < 8);
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(this + 0x10));
      }
      puVar12 = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
      puVar16 = local_30;
      for (uVar11 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      }
      iVar14 = 0;
      iVar13 = 0;
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      if (0 < *(int *)(this + 0x14)) {
        iVar7 = 0;
        local_20 = local_30;
        do {
          if (*(char *)(iVar13 + (int)puVar6) != '\0') {
            puVar12 = (undefined4 *)(*(int *)(*(int *)(this + 0x28) + 0x40) + iVar7);
            *puVar12 = *local_20;
            puVar12[1] = local_20[1];
            puVar12[2] = local_20[2];
            if (*(int *)(*(int *)(this + 0x28) + 0x4c) != 0) {
              *(undefined4 *)((int)local_24 + iVar14 * 4) =
                   *(undefined4 *)(*(int *)(*(int *)(this + 0x28) + 0x4c) + iVar13 * 4);
            }
            local_38[iVar13] = iVar14;
            iVar14 = iVar14 + 1;
            iVar7 = iVar7 + 0xc;
          }
          iVar13 = iVar13 + 1;
          local_20 = local_20 + 3;
        } while (iVar13 < *(int *)(this + 0x14));
      }
      iVar13 = 0;
      *(int *)(this + 0x14) = iVar14;
      if (0 < *(int *)(this + 0x10)) {
        do {
          puVar10 = (ushort *)
                    ((uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar13 + **(int **)(this + 0x28))
          ;
          iVar7 = 3;
          do {
            puVar10 = puVar10 + 1;
            iVar7 = iVar7 + -1;
            *puVar10 = *(ushort *)(local_38 + *puVar10);
          } while (iVar7 != 0);
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(this + 0x10));
      }
      if ((*(int *)(param_1 + 0x14) != 0) &&
         (iVar13 = AllocVertList(this,*(int *)(this + 0x14)), iVar13 == 0)) {
        return 0;
      }
      if (*(int *)(*(int *)(this + 0x28) + 0x48) != 0) {
        iVar13 = AllocVertNormalList(this,*(int *)(this + 0x14));
        if (iVar13 == 0) {
          return 0;
        }
        CalcFaceNormals(this);
        CalcVertNormals(this);
      }
      if (*(int *)(*(int *)(this + 0x28) + 0x4c) != 0) {
        FreeColorList(this);
        pvVar8 = apRealloc(local_24,*(int *)(this + 0x14) << 2);
        *(void **)(*(int *)(this + 0x28) + 0x4c) = pvVar8;
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      local_28 = 0;
      local_20 = (undefined4 *)0x6;
      local_24 = (void *)0xc;
      do {
        if (*(short *)(*(int *)(this + 0x28) + (int)local_20) != 0) {
          puVar12 = puVar6;
          for (uVar11 = local_1c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          for (uVar11 = local_1c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar12 = 0;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          if (0 < *(int *)(this + 0x10)) {
            local_2c = 0;
            puVar10 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
            if (*puVar10 != 0) {
              local_18 = 0;
              do {
                poVar15 = (objSPLIT_ENTRY *)(*(int *)(puVar10 + 1) + local_18);
                poVar9 = objSPLIT_ENTRY::FindMtlTCCoordID(poVar15,this,local_28);
                if (poVar9 != (objMTL *)0x0) {
                  iVar13 = 0;
                  bVar1 = *(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6 +
                                   (char)poVar9[0x18] * 4);
                  if (*(short *)(poVar15 + 0x6a) != 0) {
                    do {
                      puVar10 = (ushort *)
                                ((uint)bVar1 * 6 + 8 +
                                ((uint)*(ushort *)(poVar15 + 0x68) + iVar13) *
                                (uint)*(byte *)(*(int **)(this + 0x28) + 1) +
                                **(int **)(this + 0x28));
                      iVar7 = 3;
                      do {
                        uVar2 = *puVar10;
                        puVar10 = puVar10 + 1;
                        iVar7 = iVar7 + -1;
                        *(undefined1 *)((uint)uVar2 + (int)puVar6) = 1;
                      } while (iVar7 != 0);
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < (int)(uint)*(ushort *)(poVar15 + 0x6a));
                  }
                }
                local_2c = local_2c + 1;
                puVar10 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
                local_18 = local_18 + 0x70;
              } while (local_2c < (int)(uint)*puVar10);
            }
          }
          iVar13 = 0;
          puVar12 = *(undefined4 **)(*(int *)(this + 0x28) + (int)local_24);
          puVar16 = local_30;
          for (uVar11 = ((uint)*(ushort *)(*(int *)(this + 0x28) + (int)local_20) << 3) >> 2;
              uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar16 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar16 + 1;
          }
          local_14 = 0;
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          iVar7 = *(int *)(this + 0x28);
          iVar14 = 0;
          puVar12 = local_30;
          if (*(short *)(iVar7 + (int)local_20) != 0) {
            do {
              if (*(char *)((int)puVar6 + iVar14) != '\0') {
                iVar7 = *(int *)(iVar7 + (int)local_24);
                *(undefined4 *)(iVar7 + iVar13 * 8) = *puVar12;
                *(undefined4 *)(iVar7 + 4 + iVar13 * 8) = puVar12[1];
                local_38[iVar14] = iVar13;
                iVar13 = iVar13 + 1;
              }
              iVar7 = *(int *)(this + 0x28);
              iVar14 = iVar14 + 1;
              puVar12 = puVar12 + 2;
              local_14 = iVar13;
            } while (iVar14 < (int)(uint)*(ushort *)(iVar7 + (int)local_20));
          }
          if (0 < *(int *)(this + 0x10)) {
            local_2c = 0;
            puVar10 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
            if (*puVar10 != 0) {
              local_18 = 0;
              do {
                poVar15 = (objSPLIT_ENTRY *)(*(int *)(puVar10 + 1) + local_18);
                poVar9 = objSPLIT_ENTRY::FindMtlTCCoordID(poVar15,this,local_28);
                if (poVar9 != (objMTL *)0x0) {
                  iVar13 = 0;
                  bVar1 = *(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6 +
                                   (char)poVar9[0x18] * 4);
                  if (*(short *)(poVar15 + 0x6a) != 0) {
                    do {
                      iVar7 = 3;
                      puVar10 = (ushort *)
                                ((uint)bVar1 * 6 + 8 +
                                ((uint)*(ushort *)(poVar15 + 0x68) + iVar13) *
                                (uint)*(byte *)(*(int **)(this + 0x28) + 1) +
                                **(int **)(this + 0x28));
                      do {
                        iVar7 = iVar7 + -1;
                        *puVar10 = *(ushort *)(local_38 + *puVar10);
                        puVar10 = puVar10 + 1;
                      } while (iVar7 != 0);
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < (int)(uint)*(ushort *)(poVar15 + 0x6a));
                  }
                }
                local_2c = local_2c + 1;
                puVar10 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
                local_18 = local_18 + 0x70;
              } while (local_2c < (int)(uint)*puVar10);
            }
          }
          if (*(int *)(param_1 + 0x14) != 0) {
            AllocTexCoord(this,local_28,local_14);
          }
          *(undefined2 *)((int)local_20 + *(int *)(this + 0x28)) = (undefined2)local_14;
        }
        local_20 = (undefined4 *)((int)local_20 + 2);
        local_28 = local_28 + 1;
        local_24 = (void *)((int)local_24 + 4);
      } while ((int)local_24 < 0x18);
    }
    if (bVar3) {
      apFree(puVar6);
    }
    if (bVar4) {
      apFree(local_30);
    }
    if (bVar5) {
      apFree(local_38);
    }
  }
  return 1;
}




/* from: engine:obj_cgm.cpp
   addr: 005817B0 */

void __thiscall objWELD_PARAM::objWELD_PARAM(objWELD_PARAM *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)this = 0x3a83126f;
  *(undefined4 *)(this + 4) = 0x3a83126f;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}

