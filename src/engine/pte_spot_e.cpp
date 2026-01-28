
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot_e.cpp
   addr: 004D3470 */

void __thiscall
pteSPOT_ELLIPSE::SetParams
          (pteSPOT_ELLIPSE *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,float param_4,
          float param_5)

{
  float fVar1;
  float fVar2;
  
  *(float *)(this + 0x10c) = param_5;
  *(float *)(this + 0x108) = param_4;
  (**(code **)(*(int *)this + 0x14))(param_1);
  if (param_2 == (m3dV *)0x0) {
    m3dMATR::MakeLCS2WCS_VZ((m3dMATR *)&stack0xffffffbc,param_1,param_1);
  }
  else {
    m3dMATR::MakeLCS2WCS((m3dMATR *)&stack0xffffffbc,param_1,param_1,param_2,(m3dV *)0x0);
  }
  m3dMATR::Invert((m3dMATR *)&stack0xffffffbc,(m3dMATR *)(this + 0x110));
  fVar1 = (*(float *)(this + 0x108) + ___real_3f800000) * *(float *)(this + 200);
  fVar2 = -fVar1;
  *(float *)(this + 0x150) = fVar2 * *(float *)param_1 + *(float *)param_1;
  *(float *)(this + 0x154) = fVar2 * *(float *)(param_1 + 4) + *(float *)(param_1 + 4);
  *(float *)(this + 0x158) = fVar2 * *(float *)(param_1 + 8) + *(float *)(param_1 + 8);
  *(float *)(this + 0x15c) = fVar1 * *(float *)param_1 + *(float *)param_1;
  *(float *)(this + 0x160) = fVar1 * *(float *)(param_1 + 4) + *(float *)(param_1 + 4);
  *(float *)(this + 0x164) = fVar1 * *(float *)(param_1 + 8) + *(float *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot_e.cpp
   addr: 004D3540 */

int __thiscall
pteSPOT_ELLIPSE::ShadeFace
          (pteSPOT_ELLIPSE *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ptePOLY_DATA *ppVar5;
  pteSPOT_ELLIPSE *ppVar6;
  float *pfVar7;
  int iVar8;
  pteSPOT_ELLIPSE *ppVar9;
  pteSDR_INFO *ppVar10;
  float *pfVar11;
  int iVar12;
  ptePOLY_DATA *ppVar13;
  pteSDR_INFO *ppVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [3];
  ptePOLY_DATA *local_14;
  m3dPOLY *local_10;
  ptePOLY_DATA *local_c;
  pteSPOT_ELLIPSE *local_8;
  
  local_8 = this;
  (**(code **)(*(int *)this + 0x18))(&local_2c);
  local_c = *(ptePOLY_DATA **)(this + 200);
  local_10 = (m3dPOLY *)(param_3 + 4);
  ppVar14 = param_3 + 8;
  pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + param_2 * 0xc);
  if ((ABS((local_2c - *(float *)(param_3 + 8)) * *pfVar7 +
           (local_28 - *(float *)(param_3 + 0xc)) * pfVar7[1] +
           (local_24 - *(float *)(param_3 + 0x10)) * pfVar7[2]) <= (float)local_c) &&
     (iVar8 = m3xzIsIsectPolyCircle(local_10,(m3dV *)&local_2c,(float)local_c), ppVar6 = local_8,
     iVar8 != 0)) {
    iVar8 = *(int *)local_10;
    iVar12 = iVar8;
    ppVar10 = param_3;
    param_3 = (pteSDR_INFO *)-_DAT_005dbdbc;
    fVar4 = _DAT_005dbdbc;
    if (0 < iVar8) {
      do {
        ppVar10 = ppVar10 + 0xc;
        if ((float)param_3 <= (float)*(pteSDR_INFO **)ppVar10) {
          param_3 = *(pteSDR_INFO **)ppVar10;
        }
        if (*(float *)ppVar10 <= fVar4) {
          fVar4 = *(float *)ppVar10;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if ((fVar4 <= local_28 + (float)local_c) && (local_28 - (float)local_c <= (float)param_3)) {
      fVar4 = ___real_3f000000 / (float)local_c;
      pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + param_2 * 0xc);
      if (ABS(_m3dVUnitY * *pfVar7 + DAT_005f9994 * pfVar7[1] + DAT_005f9998 * pfVar7[2]) <=
          _DAT_005dbdc0 * ___real_3eaaaaab) {
        param_1 = (objOBJ *)0x0;
        if (ABS(_m3dVUnitZ * *pfVar7 + DAT_005f99a0 * pfVar7[1] + DAT_005f99a4 * pfVar7[2]) <=
            _DAT_005dbdc0 * ___real_3f000000) {
          if (0 < iVar8) {
            ppVar9 = local_8 + 0x110;
            local_c = param_4 + 8;
            local_14 = (ptePOLY_DATA *)local_20;
            do {
              ppVar5 = local_14;
              ppVar13 = local_c;
              if (m3dSimdType == 0) {
                if (((uint)ppVar9 & 0xf) == 0) {
                  fVar25 = *(float *)ppVar14;
                  fVar3 = *(float *)(ppVar14 + 4);
                  fVar2 = *(float *)(ppVar14 + 8);
                  fVar23 = fVar25 * *(float *)ppVar9 + *(float *)(ppVar6 + 0x140) +
                           fVar3 * *(float *)(ppVar6 + 0x120) + fVar2 * *(float *)(ppVar6 + 0x130);
                  fVar24 = fVar25 * *(float *)(ppVar6 + 0x114) + *(float *)(ppVar6 + 0x144) +
                           fVar3 * *(float *)(ppVar6 + 0x124) + fVar2 * *(float *)(ppVar6 + 0x134);
                  fVar25 = fVar25 * *(float *)(ppVar6 + 0x118) + *(float *)(ppVar6 + 0x148) +
                           fVar3 * *(float *)(ppVar6 + 0x128) + fVar2 * *(float *)(ppVar6 + 0x138);
                }
                else {
                  fVar25 = *(float *)ppVar14;
                  fVar3 = *(float *)(ppVar14 + 4);
                  fVar2 = *(float *)(ppVar14 + 8);
                  fVar23 = fVar25 * (float)*(undefined8 *)ppVar9 +
                           fVar3 * (float)*(undefined8 *)(ppVar6 + 0x120) +
                           fVar2 * (float)*(undefined8 *)(ppVar6 + 0x130) +
                           (float)*(undefined8 *)(ppVar6 + 0x140);
                  fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)ppVar9 >> 0x20) +
                           fVar3 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x120) >> 0x20) +
                           fVar2 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x130) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x140) >> 0x20);
                  fVar25 = fVar25 * (float)*(undefined8 *)(ppVar6 + 0x118) +
                           fVar3 * (float)*(undefined8 *)(ppVar6 + 0x128) +
                           fVar2 * (float)*(undefined8 *)(ppVar6 + 0x138) +
                           (float)*(undefined8 *)(ppVar6 + 0x148);
                }
                *(ulonglong *)local_14 = CONCAT44(fVar24,fVar23);
                *(float *)((int)local_14 + 8) = fVar25;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar15 = (undefined4)*(undefined8 *)ppVar14;
                uVar18 = CONCAT44(uVar15,uVar15);
                uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar14 >> 0x20);
                uVar21 = CONCAT44(uVar15,uVar15);
                uVar22 = CONCAT44(*(float *)(ppVar14 + 8),*(float *)(ppVar14 + 8));
                uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)ppVar9);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x120));
                uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x130));
                uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(ppVar6 + 0x140));
                uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(ppVar6 + 0x118));
                uVar18 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x128));
                uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x138));
                uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(ppVar6 + 0x148));
                uVar18 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingADD(uVar17,uVar22);
                *(undefined8 *)local_14 = uVar18;
                uVar18 = PackedFloatingADD(uVar21,uVar16);
                *(float *)((int)ppVar5 + 8) = (float)uVar18;
                FastExitMediaState();
              }
              else {
                iVar8 = 0;
                pfVar7 = local_20;
                do {
                  *pfVar7 = 0.0;
                  iVar12 = 0;
                  pfVar11 = (float *)(((int)ppVar9 - (int)local_20) + (int)pfVar7);
                  fVar25 = ___real_00000000;
                  do {
                    iVar1 = iVar12 * 4;
                    fVar3 = *pfVar11;
                    iVar12 = iVar12 + 1;
                    pfVar11 = pfVar11 + 4;
                    fVar25 = *(float *)(ppVar14 + iVar1) * fVar3 + fVar25;
                  } while (iVar12 < 3);
                  iVar12 = iVar8 + iVar12 * 4;
                  *pfVar7 = fVar25;
                  iVar8 = iVar8 + 1;
                  *pfVar7 = fVar25 + *(float *)(ppVar9 + iVar12 * 4);
                  pfVar7 = pfVar7 + 1;
                  ppVar13 = local_c;
                } while (iVar8 < 3);
              }
              ppVar14 = ppVar14 + 0xc;
              local_c = ppVar13 + 8;
              *(float *)(ppVar13 + -4) =
                   (fVar4 / *(float *)(local_8 + 0x108)) * local_20[1] + ___real_3f000000;
              param_1 = param_1 + 1;
              *(float *)ppVar13 =
                   (fVar4 / *(float *)(local_8 + 0x108)) * local_20[2] + ___real_3f000000;
            } while ((int)param_1 < *(int *)local_10);
          }
        }
        else if (0 < iVar8) {
          ppVar9 = local_8 + 0x110;
          local_c = param_4 + 8;
          local_14 = (ptePOLY_DATA *)local_20;
          do {
            ppVar5 = local_14;
            ppVar13 = local_c;
            if (m3dSimdType == 0) {
              if (((uint)ppVar9 & 0xf) == 0) {
                fVar25 = *(float *)ppVar14;
                fVar3 = *(float *)(ppVar14 + 4);
                fVar2 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * *(float *)ppVar9 + *(float *)(ppVar6 + 0x140) +
                         fVar3 * *(float *)(ppVar6 + 0x120) + fVar2 * *(float *)(ppVar6 + 0x130);
                fVar24 = fVar25 * *(float *)(ppVar6 + 0x114) + *(float *)(ppVar6 + 0x144) +
                         fVar3 * *(float *)(ppVar6 + 0x124) + fVar2 * *(float *)(ppVar6 + 0x134);
                fVar25 = fVar25 * *(float *)(ppVar6 + 0x118) + *(float *)(ppVar6 + 0x148) +
                         fVar3 * *(float *)(ppVar6 + 0x128) + fVar2 * *(float *)(ppVar6 + 0x138);
              }
              else {
                fVar25 = *(float *)ppVar14;
                fVar3 = *(float *)(ppVar14 + 4);
                fVar2 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * (float)*(undefined8 *)ppVar9 +
                         fVar3 * (float)*(undefined8 *)(ppVar6 + 0x120) +
                         fVar2 * (float)*(undefined8 *)(ppVar6 + 0x130) +
                         (float)*(undefined8 *)(ppVar6 + 0x140);
                fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)ppVar9 >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x120) >> 0x20) +
                         fVar2 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x130) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x140) >> 0x20);
                fVar25 = fVar25 * (float)*(undefined8 *)(ppVar6 + 0x118) +
                         fVar3 * (float)*(undefined8 *)(ppVar6 + 0x128) +
                         fVar2 * (float)*(undefined8 *)(ppVar6 + 0x138) +
                         (float)*(undefined8 *)(ppVar6 + 0x148);
              }
              *(ulonglong *)local_14 = CONCAT44(fVar24,fVar23);
              *(float *)((int)local_14 + 8) = fVar25;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = (undefined4)*(undefined8 *)ppVar14;
              uVar18 = CONCAT44(uVar15,uVar15);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar14 >> 0x20);
              uVar21 = CONCAT44(uVar15,uVar15);
              uVar22 = CONCAT44(*(float *)(ppVar14 + 8),*(float *)(ppVar14 + 8));
              uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)ppVar9);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x120));
              uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x130));
              uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(ppVar6 + 0x140));
              uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(ppVar6 + 0x118));
              uVar18 = PackedFloatingADD(uVar17,uVar19);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x128));
              uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x138));
              uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(ppVar6 + 0x148));
              uVar18 = PackedFloatingADD(uVar16,uVar18);
              uVar16 = PackedFloatingADD(uVar17,uVar22);
              *(undefined8 *)local_14 = uVar18;
              uVar18 = PackedFloatingADD(uVar21,uVar16);
              *(float *)((int)ppVar5 + 8) = (float)uVar18;
              FastExitMediaState();
            }
            else {
              iVar8 = 0;
              pfVar7 = local_20;
              do {
                *pfVar7 = 0.0;
                iVar12 = 0;
                pfVar11 = (float *)(((int)ppVar9 - (int)local_20) + (int)pfVar7);
                fVar25 = ___real_00000000;
                do {
                  iVar1 = iVar12 * 4;
                  fVar3 = *pfVar11;
                  iVar12 = iVar12 + 1;
                  pfVar11 = pfVar11 + 4;
                  fVar25 = *(float *)(ppVar14 + iVar1) * fVar3 + fVar25;
                } while (iVar12 < 3);
                iVar12 = iVar8 + iVar12 * 4;
                *pfVar7 = fVar25;
                iVar8 = iVar8 + 1;
                *pfVar7 = fVar25 + *(float *)(ppVar9 + iVar12 * 4);
                pfVar7 = pfVar7 + 1;
                ppVar13 = local_c;
              } while (iVar8 < 3);
            }
            ppVar14 = ppVar14 + 0xc;
            local_c = ppVar13 + 8;
            *(float *)(ppVar13 + -4) =
                 (fVar4 / *(float *)(local_8 + 0x108)) * local_20[0] + ___real_3f000000;
            param_1 = param_1 + 1;
            *(float *)ppVar13 =
                 (fVar4 / *(float *)(local_8 + 0x108)) * local_20[1] + ___real_3f000000;
          } while ((int)param_1 < *(int *)local_10);
          return 1;
        }
      }
      else {
        param_1 = (objOBJ *)0x0;
        if (0 < iVar8) {
          ppVar9 = local_8 + 0x110;
          local_14 = param_4 + 8;
          local_c = (ptePOLY_DATA *)local_20;
          do {
            ppVar5 = local_c;
            ppVar13 = local_14;
            if (m3dSimdType == 0) {
              if (((uint)ppVar9 & 0xf) == 0) {
                fVar25 = *(float *)ppVar14;
                fVar3 = *(float *)(ppVar14 + 4);
                fVar2 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * *(float *)ppVar9 + *(float *)(ppVar6 + 0x140) +
                         fVar3 * *(float *)(ppVar6 + 0x120) + fVar2 * *(float *)(ppVar6 + 0x130);
                fVar24 = fVar25 * *(float *)(ppVar6 + 0x114) + *(float *)(ppVar6 + 0x144) +
                         fVar3 * *(float *)(ppVar6 + 0x124) + fVar2 * *(float *)(ppVar6 + 0x134);
                fVar25 = fVar25 * *(float *)(ppVar6 + 0x118) + *(float *)(ppVar6 + 0x148) +
                         fVar3 * *(float *)(ppVar6 + 0x128) + fVar2 * *(float *)(ppVar6 + 0x138);
              }
              else {
                fVar25 = *(float *)ppVar14;
                fVar3 = *(float *)(ppVar14 + 4);
                fVar2 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * (float)*(undefined8 *)ppVar9 +
                         fVar3 * (float)*(undefined8 *)(ppVar6 + 0x120) +
                         fVar2 * (float)*(undefined8 *)(ppVar6 + 0x130) +
                         (float)*(undefined8 *)(ppVar6 + 0x140);
                fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)ppVar9 >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x120) >> 0x20) +
                         fVar2 * (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x130) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(ppVar6 + 0x140) >> 0x20);
                fVar25 = fVar25 * (float)*(undefined8 *)(ppVar6 + 0x118) +
                         fVar3 * (float)*(undefined8 *)(ppVar6 + 0x128) +
                         fVar2 * (float)*(undefined8 *)(ppVar6 + 0x138) +
                         (float)*(undefined8 *)(ppVar6 + 0x148);
              }
              *(ulonglong *)local_c = CONCAT44(fVar24,fVar23);
              *(float *)((int)local_c + 8) = fVar25;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = (undefined4)*(undefined8 *)ppVar14;
              uVar18 = CONCAT44(uVar15,uVar15);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar14 >> 0x20);
              uVar21 = CONCAT44(uVar15,uVar15);
              uVar22 = CONCAT44(*(float *)(ppVar14 + 8),*(float *)(ppVar14 + 8));
              uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)ppVar9);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x120));
              uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x130));
              uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(ppVar6 + 0x140));
              uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(ppVar6 + 0x118));
              uVar18 = PackedFloatingADD(uVar17,uVar19);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(ppVar6 + 0x128));
              uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(ppVar6 + 0x138));
              uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(ppVar6 + 0x148));
              uVar18 = PackedFloatingADD(uVar16,uVar18);
              uVar16 = PackedFloatingADD(uVar17,uVar22);
              *(undefined8 *)local_c = uVar18;
              uVar18 = PackedFloatingADD(uVar21,uVar16);
              *(float *)((int)ppVar5 + 8) = (float)uVar18;
              FastExitMediaState();
            }
            else {
              iVar8 = 0;
              pfVar7 = local_20;
              do {
                *pfVar7 = 0.0;
                iVar12 = 0;
                pfVar11 = (float *)(((int)ppVar9 - (int)local_20) + (int)pfVar7);
                fVar25 = ___real_00000000;
                do {
                  iVar1 = iVar12 * 4;
                  fVar3 = *pfVar11;
                  iVar12 = iVar12 + 1;
                  pfVar11 = pfVar11 + 4;
                  fVar25 = *(float *)(ppVar14 + iVar1) * fVar3 + fVar25;
                } while (iVar12 < 3);
                iVar12 = iVar8 + iVar12 * 4;
                *pfVar7 = fVar25;
                iVar8 = iVar8 + 1;
                *pfVar7 = fVar25 + *(float *)(ppVar9 + iVar12 * 4);
                pfVar7 = pfVar7 + 1;
                ppVar13 = local_14;
              } while (iVar8 < 3);
            }
            ppVar14 = ppVar14 + 0xc;
            param_1 = param_1 + 1;
            local_14 = ppVar13 + 8;
            *(float *)(ppVar13 + -4) =
                 (fVar4 / *(float *)(local_8 + 0x108)) * local_20[0] + ___real_3f000000;
            *(float *)ppVar13 = local_20[2] * fVar4 + ___real_3f000000;
          } while ((int)param_1 < *(int *)local_10);
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

