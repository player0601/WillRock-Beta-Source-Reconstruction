
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B70E0 */

void __fastcall
d3dPrepareVert(objOBJ *param_1,int param_2,int param_3,ushort *param_4,d3dFVF_DESCR *param_5,
              void *param_6,int param_7,m3dMATR *param_8)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  d3dFVF_DESCR *pdVar5;
  objFACE *poVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  d3dFVF_DESCR *pdVar11;
  txmTEXTURE *ptVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  m3dMATR local_98 [64];
  uint local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  float local_38 [3];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  objOBJ *local_8;
  
  pdVar5 = param_5;
  local_8 = param_1;
  if (param_8 == (m3dMATR *)0x0) {
    m3dMATR::Invert((m3dMATR *)(param_1 + 0x3c),local_98);
    param_8 = local_98;
  }
  local_2c = param_2 + param_3;
  if (param_2 < local_2c) {
    local_10 = param_2 * 3;
    local_14 = 0;
    local_c = param_2;
    do {
      param_3 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * local_c +
                **(int **)(param_1 + 0x28);
      poVar6 = objOBJ::GetFace(param_1,local_c);
      local_28 = (uint)*(ushort *)poVar6 * 0x70 +
                 *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2);
      local_1c = 0;
      do {
        param_3 = param_3 + 2;
        if (param_4 == (ushort *)0x0) {
          uVar8 = local_1c + local_14;
        }
        else {
          uVar8 = (uint)param_4[local_10 + local_1c];
        }
        if ((-1 < (int)uVar8) && ((int)uVar8 <= param_7)) {
          puVar16 = (undefined4 *)(*(int *)(pdVar5 + 4) * uVar8 + (int)param_6);
          puVar1 = (undefined4 *)
                   (*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (uint)*(ushort *)param_3 * 0xc);
          *puVar16 = *puVar1;
          puVar16[1] = puVar1[1];
          puVar16[2] = puVar1[2];
          if (((byte)*pdVar5 & 0x40) != 0) {
            *(undefined4 *)((int)puVar16 + *(int *)(pdVar5 + 8)) = 0;
          }
          if ((*(uint *)(param_1 + 0x24) & 0x10) != 0) {
            uVar8 = *(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) +
                             (uint)*(ushort *)param_3 * 4);
            local_18 = uVar8;
            if (((*(uint *)(param_1 + 0x24) & 0x40) != 0) && (uVar8 >> 0x18 != 0xff)) {
              uStack_54 = 0;
              local_50 = uVar8 >> 0x10 & 0xff;
              uStack_4c = 0;
              local_58 = uVar8 >> 0x18;
              uVar7 = ftol();
              local_40 = uVar8 >> 8 & 0xff;
              uStack_3c = 0;
              uVar8 = ftol();
              local_48 = local_18 & 0xff;
              uStack_44 = 0;
              uVar9 = ftol();
              uVar8 = ((uVar7 | 0xffffff00) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
            }
            *(uint *)((int)puVar16 + *(int *)(pdVar5 + 8)) = uVar8;
            param_1 = local_8;
          }
          if ((((byte)*pdVar5 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0x48) != 0)) {
            puVar14 = (undefined4 *)(*(int *)(pdVar5 + 0x10) + (int)puVar16);
            puVar1 = (undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x28) + 0x48) + (uint)*(ushort *)param_3 * 0xc);
            *puVar14 = *puVar1;
            puVar14[1] = puVar1[1];
            puVar14[2] = puVar1[2];
            pfVar15 = (float *)(*(int *)(pdVar5 + 0x10) + (int)puVar16);
            if (m3dSimdType == 0) {
              if (((uint)param_8 & 0xf) == 0) {
                fVar28 = *pfVar15;
                fVar4 = pfVar15[1];
                fVar3 = pfVar15[2];
                fVar26 = fVar28 * *(float *)param_8 + fVar4 * *(float *)(param_8 + 0x10) +
                         fVar3 * *(float *)(param_8 + 0x20);
                fVar27 = fVar28 * *(float *)(param_8 + 4) + fVar4 * *(float *)(param_8 + 0x14) +
                         fVar3 * *(float *)(param_8 + 0x24);
                fVar28 = fVar28 * *(float *)(param_8 + 8) + fVar4 * *(float *)(param_8 + 0x18) +
                         fVar3 * *(float *)(param_8 + 0x28);
              }
              else {
                fVar28 = *pfVar15;
                fVar4 = pfVar15[1];
                fVar3 = pfVar15[2];
                fVar26 = fVar28 * (float)*(undefined8 *)param_8 +
                         fVar4 * (float)*(undefined8 *)(param_8 + 0x10) +
                         fVar3 * (float)*(undefined8 *)(param_8 + 0x20);
                fVar27 = fVar28 * (float)((ulonglong)*(undefined8 *)param_8 >> 0x20) +
                         fVar4 * (float)((ulonglong)*(undefined8 *)(param_8 + 0x10) >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(param_8 + 0x20) >> 0x20);
                fVar28 = fVar28 * (float)*(undefined8 *)(param_8 + 8) +
                         fVar4 * (float)*(undefined8 *)(param_8 + 0x18) +
                         fVar3 * (float)*(undefined8 *)(param_8 + 0x28);
              }
              *(ulonglong *)pfVar15 = CONCAT44(fVar27,fVar26);
              pfVar15[2] = fVar28;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar18 = (undefined4)*(undefined8 *)pfVar15;
              uVar21 = CONCAT44(uVar18,uVar18);
              uVar18 = (undefined4)((ulonglong)*(undefined8 *)pfVar15 >> 0x20);
              uVar25 = CONCAT44(uVar18,uVar18);
              uVar22 = CONCAT44(pfVar15[2],pfVar15[2]);
              uVar19 = PackedFloatingMUL(uVar21,*(undefined8 *)param_8);
              uVar20 = PackedFloatingMUL(uVar25,*(undefined8 *)(param_8 + 0x10));
              uVar23 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_8 + 0x20));
              uVar24 = PackedFloatingMUL(uVar21,*(undefined8 *)(param_8 + 8));
              uVar21 = PackedFloatingADD(uVar20,uVar23);
              uVar25 = PackedFloatingMUL(uVar25,*(undefined8 *)(param_8 + 0x18));
              uVar20 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_8 + 0x28));
              uVar21 = PackedFloatingADD(uVar19,uVar21);
              uVar19 = PackedFloatingADD(uVar25,uVar20);
              *(undefined8 *)pfVar15 = uVar21;
              uVar21 = PackedFloatingADD(uVar24,uVar19);
              pfVar15[2] = (float)uVar21;
              FastExitMediaState();
            }
            else {
              pfVar17 = local_38;
              local_18 = (int)param_8 - (int)local_38;
              param_5 = (d3dFVF_DESCR *)0x3;
              do {
                uVar8 = local_18;
                iVar10 = 0;
                *pfVar17 = 0.0;
                pfVar13 = (float *)(uVar8 + (int)pfVar17);
                fVar28 = ___real_00000000;
                do {
                  pfVar2 = pfVar15 + iVar10;
                  fVar4 = *pfVar13;
                  iVar10 = iVar10 + 1;
                  pfVar13 = pfVar13 + 4;
                  fVar28 = *pfVar2 * fVar4 + fVar28;
                } while (iVar10 < 3);
                *pfVar17 = fVar28;
                pfVar17 = pfVar17 + 1;
                param_5 = param_5 + -1;
              } while (param_5 != (d3dFVF_DESCR *)0x0);
              *pfVar15 = local_38[0];
              pfVar15[1] = local_38[1];
              pfVar15[2] = local_38[2];
            }
            m3dNormalize((m3dV *)(*(int *)(pdVar5 + 0x10) + (int)puVar16));
          }
          iVar10 = 0;
          if (0 < *(int *)(pdVar5 + 0x24)) {
            pdVar11 = pdVar5 + 0x14;
            do {
              iVar10 = iVar10 + 1;
              *(undefined4 *)((int)puVar16 + *(int *)pdVar11) = 0xbf800000;
              *(undefined4 *)(*(int *)pdVar11 + 4 + (int)puVar16) = 0xbf800000;
              pdVar11 = pdVar11 + 4;
            } while (iVar10 < *(int *)(pdVar5 + 0x24));
          }
          iVar10 = 0;
          param_1 = local_8;
          if (0 < *(short *)(local_28 + 100)) {
            param_5 = (d3dFVF_DESCR *)(local_28 + 0x18);
            do {
              ptVar12 = objOBJ::GetFaceTexMtlNmb(local_8,local_c,iVar10);
              if (ptVar12 != (txmTEXTURE *)0x0) {
                objOBJ::GetFaceTexCoord(local_8,local_c,local_1c,iVar10,(m3dVTX *)&local_24);
                uVar8 = (uint)*(byte *)(*(int *)(*(int *)(local_8 + 0x28) + 0x18) + 9 +
                                       (char)*param_5 * 4);
                *(undefined4 *)((int)puVar16 + *(int *)(pdVar5 + uVar8 * 4 + 0x14)) = local_24;
                *(undefined4 *)(*(int *)(pdVar5 + uVar8 * 4 + 0x14) + 4 + (int)puVar16) = local_20;
              }
              iVar10 = iVar10 + 1;
              param_5 = param_5 + 0x19;
              param_1 = local_8;
            } while (iVar10 < *(short *)(local_28 + 100));
          }
        }
        local_1c = local_1c + 1;
      } while (local_1c < 3);
      local_10 = local_10 + 3;
      local_14 = local_14 + 3;
      local_c = local_c + 1;
    } while (local_c < local_2c);
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B7550 */

int __fastcall
d3dCreateSharedVertList
          (objOBJ *param_1,void *param_2,int param_3,ushort *param_4,d3dFVF_DESCR *param_5)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  ushort **ppuVar10;
  undefined4 *puVar11;
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  ushort *local_104;
  int local_100;
  m3dMATR local_f4 [64];
  undefined4 local_b4 [45];
  
  iVar8 = *(int *)(param_1 + 0x14);
  ppuVar10 = &d3dIdxFaceInd;
  for (uVar4 = (uint)(iVar8 * 2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *ppuVar10 = (ushort *)0x0;
    ppuVar10 = ppuVar10 + 1;
  }
  local_114 = 0;
  for (uVar4 = iVar8 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)ppuVar10 = 0;
    ppuVar10 = (ushort **)((int)ppuVar10 + 1);
  }
  local_110 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar4 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1);
    iVar8 = **(int **)(param_1 + 0x28);
    do {
      iVar7 = 2;
      iVar3 = uVar4 * local_110;
      do {
        psVar1 = (short *)((int)&d3dIdxFaceInd + (uint)*(ushort *)(iVar7 + iVar8 + iVar3) * 2);
        *psVar1 = *psVar1 + 1;
        uVar4 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1);
        iVar8 = **(int **)(param_1 + 0x28);
        iVar3 = uVar4 * local_110;
        uVar5 = (uint)*(ushort *)
                       ((int)&d3dIdxFaceInd + (uint)*(ushort *)(iVar7 + iVar8 + iVar3) * 2);
        if (local_114 <= uVar5) {
          local_114 = uVar5;
        }
        iVar7 = iVar7 + 2;
      } while (iVar7 < 8);
      local_110 = local_110 + 1;
    } while (local_110 < *(int *)(param_1 + 0x10));
  }
  uVar4 = (uint)(5000 / (longlong)*(int *)(param_1 + 0x14));
  if ((int)uVar4 <= (int)local_114) {
    local_114 = uVar4;
  }
  if ((int)local_114 < 2) {
    local_114 = 1;
  }
  uVar4 = *(int *)(param_1 + 0x14) * local_114 * 2;
  ppuVar10 = &d3dIdxFaceInd;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *ppuVar10 = (ushort *)0xffffffff;
    ppuVar10 = ppuVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)ppuVar10 = 0xff;
    ppuVar10 = (ushort **)((int)ppuVar10 + 1);
  }
  m3dMATR::Invert((m3dMATR *)(param_1 + 0x3c),local_f4);
  if (((byte)*param_5 & 0x10) != 0) {
    if (*(animINST **)(param_1 + 0xbc) == (animINST *)0x0) {
      objOBJ::CalcVertNormals(param_1);
    }
    else {
      animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
    }
  }
  local_108 = 0;
  local_110 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_10c = 0;
    do {
      d3dPrepareVert(param_1,local_110,1,(ushort *)0x0,param_5,local_b4,3,local_f4);
      iVar8 = 0;
      do {
        local_100 = 0;
        uVar4 = (uint)*(ushort *)
                       ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * local_110 + 2 + iVar8 * 2 +
                       **(int **)(param_1 + 0x28));
        if (0 < (int)local_114) {
          local_104 = (ushort *)((int)&d3dIdxFaceInd + uVar4 * local_114 * 2);
          do {
            uVar2 = *local_104;
            if (uVar2 == 0xffff) break;
            iVar3 = d3dFVF_DESCR::IsEqualVert
                              (param_5,(void *)(*(int *)(param_5 + 4) * (uint)uVar2 + (int)param_2),
                               (undefined4 *)((int)local_b4 + *(int *)(param_5 + 4) * iVar8));
            if (iVar3 != 0) {
              param_4[local_10c + iVar8] = uVar2;
              goto LAB_004b77ac;
            }
            local_100 = local_100 + 1;
            local_104 = local_104 + 1;
          } while (local_100 < (int)local_114);
        }
        if (param_3 <= local_108) {
          return local_108;
        }
        uVar5 = *(uint *)(param_5 + 4);
        puVar9 = (undefined4 *)((int)local_b4 + uVar5 * iVar8);
        puVar11 = (undefined4 *)(uVar5 * local_108 + (int)param_2);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(ushort *)((int)&d3dIdxFaceInd + (uVar4 * local_114 + local_100) * 2) = (ushort)local_108;
        param_4[local_10c + iVar8] = (ushort)local_108;
        local_108 = local_108 + 1;
LAB_004b77ac:
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      local_110 = local_110 + 1;
      local_10c = local_10c + 3;
    } while (local_110 < *(int *)(param_1 + 0x10));
  }
  return local_108;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B7800 */

int __fastcall
d3dPrepareFaceIndSlice
          (objOBJ *param_1,int param_2,int param_3,ushort *param_4,int param_5,d3dFVF_DESCR *param_6
          ,ushort *param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar8 = &DAT_00692cf0;
  for (uVar3 = (uint)(param_5 * 2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = param_5 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar3 = 0;
  if (param_2 < param_3 + param_2) {
    iVar9 = 0;
    param_3 = (param_3 + param_2) - param_2;
    iVar6 = param_2 * 3;
    do {
      iVar7 = 0;
      uVar2 = uVar3;
      do {
        if (param_4 == (ushort *)0x0) {
          uVar4 = iVar9 + iVar7;
        }
        else {
          uVar4 = (uint)param_4[iVar6 + iVar7];
        }
        uVar3 = uVar2;
        if ((-1 < (int)uVar4) && ((int)uVar4 <= param_5)) {
          uVar1 = *(ushort *)((int)&DAT_00692cf0 + uVar4 * 2);
          uVar5 = (uint)uVar1;
          if (uVar1 == 0xffff) {
            *(short *)((int)&DAT_00692cf0 + uVar4 * 2) = (short)uVar2;
            uVar3 = uVar2 + 1;
            uVar5 = uVar2;
          }
          param_7[iVar9 + iVar7] = (ushort)uVar5;
        }
        iVar7 = iVar7 + 1;
        uVar2 = uVar3;
      } while (iVar7 < 3);
      iVar6 = iVar6 + 3;
      iVar9 = iVar9 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B78B0 */

ulong __fastcall
_d3dCalcObjDot3Color
          (objOBJ *param_1,ushort *param_2,objSPLIT_ENTRY *param_3,int param_4,float param_5)

{
  int iVar1;
  ulong *puVar2;
  rendDRIVER *prVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong **ppuVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  ulonglong in_XMM4_Qa;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong *local_e8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong *local_b8 [3];
  undefined4 uStack_ac;
  float local_a0;
  float local_9c;
  float *local_94;
  int local_90;
  int local_8c;
  float *local_88;
  ushort *local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  m3dV *local_48;
  int local_44;
  objOBJ *local_40;
  ulong **local_3c;
  int local_38;
  rendDRIVER *local_34;
  int local_30;
  ulong **local_2c;
  m3dV *local_28;
  m3dV local_24 [4];
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  prVar3 = rendDrv;
  local_84 = param_2;
  local_40 = param_1;
  if (DAT_005f639c != 0) {
    DAT_005f639c = 0;
    DAT_0065ba00 = 0xffb2b2b2;
  }
  if (_DAT_005db7f4 <= param_5) {
    fVar19 = ___real_3f800000 - _DAT_005db7f4;
    local_34 = rendDrv + 0x40;
    ppuVar9 = &_d3dObjDot3Color;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *ppuVar9 = (ulong *)0x0;
      ppuVar9 = ppuVar9 + 1;
    }
    if (param_5 <= fVar19) {
      local_14 = ((___real_3f800000 - param_5) * ___real_3ececbfb + ___real_3f800000) *
                 ___real_42ff0000;
      local_18 = param_5 * ___real_42ff0000;
    }
    else {
      local_14 = 127.5;
      local_18 = 127.5;
    }
    if (m3dSimdType == 0) {
      uStack_74 = 0;
      fStack_78 = local_18;
      fStack_7c = local_18;
      local_80 = local_18;
      fStack_68 = local_14;
      fStack_6c = local_14;
      local_70 = local_14;
      uStack_64 = 0;
      local_60 = *(float *)local_34;
      fStack_5c = *(float *)(prVar3 + 0x44);
      fStack_58 = *(float *)(prVar3 + 0x48);
      uStack_54 = 0;
    }
    if (((byte)*param_1 & 1) == 0) {
      objOBJ::TransformPoints(param_1,(m3dMATR *)(param_1 + 0x3c),(m3dV *)0x0);
      local_48 = objOBJ::GetTransformedVertList();
    }
    else {
      local_48 = *(m3dV **)(*(int *)(param_1 + 0x28) + 0x40);
    }
    local_38 = 0;
    if (*(short *)(param_3 + 0x6a) != 0) {
      local_30 = 0;
      do {
        iVar8 = ((uint)*(ushort *)(param_3 + 0x68) + local_38) *
                (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) + **(int **)(param_1 + 0x28);
        local_8c = iVar8;
        local_44 = 0;
        do {
          iVar4 = (uint)local_84[local_30 + local_44] * 4;
          ppuVar9 = &_d3dObjDot3Color + local_84[local_30 + local_44];
          local_3c = ppuVar9;
          if (*ppuVar9 == (ulong *)0x0) {
            if (m3dSimdType == 0) {
              local_2c = ppuVar9;
              local_90 = *(int *)(*(int *)(local_40 + 0x28) + 0x48);
              local_94 = &local_60;
              local_28 = (m3dV *)&local_70;
              local_88 = &local_80;
              local_3c = (ulong **)(iVar8 + 2);
              iVar1 = (uint)*(ushort *)(local_44 * 2 + iVar8 + 2) * 0xc;
              fVar19 = *(float *)(iVar1 + local_90);
              fVar25 = *(float *)(iVar1 + 4 + local_90);
              fVar28 = *(float *)(iVar1 + 8 + local_90);
              fVar24 = ((float)in_XMM4_Qa - (float)in_XMM4_Qa) - fVar25;
              if (fVar24 <= fVar25) {
                fVar24 = fVar25;
              }
              if (fVar24 < `void___cdecl_sseAtWork(class_m3dMATR*,struct_m3dV*,struct_m3dV*,unsigned_short*,int,struct___m128*,struct___m128*,struct___m128*,unsigned_long*)'
                           ::__l2::almostOne) {
                fVar24 = _oneY - fVar25 * fVar19;
                fVar26 = _UNK_005db814 - fVar25 * fVar25;
                fVar27 = _UNK_005db818 - fVar25 * fVar28;
              }
              else {
                fVar24 = _oneX - fVar19 * fVar19;
                fVar26 = _UNK_005db824 - fVar19 * fVar25;
                fVar27 = _UNK_005db828 - fVar19 * fVar28;
              }
              fVar18 = fVar24 * fVar24;
              auVar21._4_4_ = fVar18;
              auVar21._0_4_ = fVar26 * fVar26;
              auVar21._8_4_ = fVar18;
              auVar21._12_4_ = fVar18;
              auVar20._4_12_ = auVar21._4_12_;
              auVar20._0_4_ = fVar26 * fVar26 + fVar18 + fVar27 * fVar27;
              auVar21 = rsqrtss(auVar20,auVar20);
              fVar18 = auVar21._0_4_;
              fVar18 = (`void___cdecl_sseAtWork(class_m3dMATR*,struct_m3dV*,struct_m3dV*,unsigned_short*,int,struct___m128*,struct___m128*,struct___m128*,unsigned_long*)'
                        ::__l2::three - auVar20._0_4_ * fVar18 * fVar18) *
                       `void___cdecl_sseAtWork(class_m3dMATR*,struct_m3dV*,struct_m3dV*,unsigned_short*,int,struct___m128*,struct___m128*,struct___m128*,unsigned_long*)'
                       ::__l2::half * fVar18;
              fVar24 = fVar24 * fVar18;
              fVar26 = fVar26 * fVar18;
              fVar27 = fVar27 * fVar18;
              fVar29 = local_60 - *(float *)(local_48 + iVar1);
              fVar30 = fStack_5c - *(float *)(local_48 + iVar1 + 4);
              fVar31 = fStack_58 - *(float *)(local_48 + iVar1 + 8);
              fVar18 = (fVar24 * fVar25 - fVar26 * fVar19) * fVar31 +
                       (fVar26 * fVar28 - fVar27 * fVar25) * fVar29 +
                       (fVar27 * fVar19 - fVar24 * fVar28) * fVar30;
              fVar24 = fVar27 * fVar31 + fVar24 * fVar29 + fVar26 * fVar30;
              fVar28 = fVar28 * fVar31 + fVar19 * fVar29 + fVar25 * fVar30;
              fVar19 = fVar18 * fVar18;
              auVar22._4_4_ = fVar19;
              auVar22._0_4_ = fVar24 * fVar24;
              auVar22._8_4_ = fVar19;
              auVar22._12_4_ = fVar19;
              auVar23._4_12_ = auVar22._4_12_;
              auVar23._0_4_ = fVar24 * fVar24 + fVar19 + fVar28 * fVar28;
              auVar21 = rsqrtss(auVar23,auVar23);
              fVar19 = auVar21._0_4_;
              fVar25 = auVar23._0_4_ * fVar19 * fVar19;
              in_XMM4_Qa = (ulonglong)(uint)fVar25;
              fVar19 = (`void___cdecl_sseAtWork(class_m3dMATR*,struct_m3dV*,struct_m3dV*,unsigned_short*,int,struct___m128*,struct___m128*,struct___m128*,unsigned_long*)'
                        ::__l2::three - fVar25) *
                       `void___cdecl_sseAtWork(class_m3dMATR*,struct_m3dV*,struct_m3dV*,unsigned_short*,int,struct___m128*,struct___m128*,struct___m128*,unsigned_long*)'
                       ::__l2::half * fVar19;
              *(char *)((int)&_d3dObjDot3Color + iVar4 + 2) =
                   (char)(int)ROUND(fVar18 * fVar19 * local_80 + local_70);
              *(char *)((int)&_d3dObjDot3Color + iVar4 + 1) =
                   (char)(int)ROUND(fVar24 * fVar19 * fStack_7c + fStack_6c);
              *(char *)ppuVar9 = (char)(int)ROUND(fVar28 * fVar19 * fStack_78 + fStack_68);
            }
            else {
              iVar8 = (uint)*(ushort *)(iVar8 + 2 + local_44 * 2) * 0xc;
              m3dMATR::MakeWCS2LCS_VZ
                        ((m3dMATR *)local_e8,local_48 + iVar8,
                         (m3dV *)(*(int *)(*(int *)(local_40 + 0x28) + 0x48) + iVar8));
              local_28 = local_24;
              local_2c = local_e8;
              if (m3dSimdType == 0) {
                if (((uint)local_e8 & 0xf) != 0) {
                  in_XMM4_Qa = CONCAT44(local_e8[1],local_e8[0]);
                }
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar10 = (undefined4)*(undefined8 *)local_34;
                uVar13 = CONCAT44(uVar10,uVar10);
                uVar10 = (undefined4)((ulonglong)*(undefined8 *)local_34 >> 0x20);
                uVar16 = CONCAT44(uVar10,uVar10);
                uVar17 = CONCAT44(*(undefined4 *)(local_34 + 8),*(undefined4 *)(local_34 + 8));
                uVar11 = PackedFloatingMUL(uVar13,CONCAT44(local_e8[1],local_e8[0]));
                uVar12 = PackedFloatingMUL(uVar16,CONCAT44(uStack_d4,local_d8));
                uVar14 = PackedFloatingMUL(uVar17,CONCAT44(uStack_c4,local_c8));
                uVar11 = PackedFloatingADD(uVar11,CONCAT44(local_b8[1],local_b8[0]));
                uVar15 = PackedFloatingMUL(uVar13,CONCAT44(local_e8[3],local_e8[2]));
                uVar13 = PackedFloatingADD(uVar12,uVar14);
                uVar12 = PackedFloatingMUL(uVar16,CONCAT44(uStack_cc,uStack_d0));
                uVar17 = PackedFloatingMUL(uVar17,CONCAT44(uStack_bc,uStack_c0));
                uVar16 = PackedFloatingADD(uVar15,CONCAT44(uStack_ac,local_b8[2]));
                uVar13 = PackedFloatingADD(uVar11,uVar13);
                uVar11 = PackedFloatingADD(uVar12,uVar17);
                fStack_20 = (float)((ulonglong)uVar13 >> 0x20);
                uVar13 = PackedFloatingADD(uVar16,uVar11);
                local_1c = (float)uVar13;
                FastExitMediaState();
              }
              else {
                iVar8 = 0;
                do {
                  *(undefined4 *)(local_24 + iVar8 * 4) = 0;
                  iVar4 = 0;
                  ppuVar9 = local_e8 + iVar8;
                  do {
                    iVar1 = iVar4 * 4;
                    puVar2 = *ppuVar9;
                    iVar4 = iVar4 + 1;
                    ppuVar9 = ppuVar9 + 4;
                    *(float *)(local_24 + iVar8 * 4) =
                         *(float *)(local_34 + iVar1) * (float)puVar2 +
                         *(float *)(local_24 + iVar8 * 4);
                  } while (iVar4 < 3);
                  iVar4 = iVar8 + iVar4 * 4;
                  iVar8 = iVar8 + 1;
                  *(float *)(local_24 + iVar8 * 4 + -4) =
                       (float)local_e8[iVar4] + *(float *)(local_24 + iVar8 * 4 + -4);
                  ppuVar9 = local_3c;
                } while (iVar8 < 3);
              }
              m3dNormalize(local_24);
              local_a0 = fStack_20 * local_18 + local_14;
              local_9c = local_1c * local_18 + local_14;
              uVar5 = ftol();
              uVar6 = ftol();
              uVar7 = ftol();
              *ppuVar9 = (ulong *)(((uVar5 | 0xffffff00) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff);
              iVar8 = local_8c;
            }
          }
          local_44 = local_44 + 1;
        } while (local_44 < 3);
        local_30 = local_30 + 3;
        local_38 = local_38 + 1;
        param_1 = local_40;
      } while (local_38 < (int)(uint)*(ushort *)(param_3 + 0x6a));
    }
    return 0;
  }
  return DAT_0065ba00;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B7EB0 */

void __thiscall d3dVBUF_MNG::BeginFrame(d3dVBUF_MNG *this)

{
  d3dVBUF_MNG *pdVar1;
  int iVar2;
  
  iVar2 = 100;
  *(int *)(this + 0x2a7c0) = *(int *)(this + 0x2a7c0) + 1;
  pdVar1 = this + 4;
  do {
    if (((~*(uint *)pdVar1 & 1) == 0) &&
       (((*(uint *)pdVar1 & 1) == 0 || ((*(uint *)pdVar1 & 2) == 0)))) {
      *(uint *)(pdVar1 + 0x38) = *(uint *)(this + 0x2a7c0);
    }
    pdVar1 = pdVar1 + 0x3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B7EF0 */

int __thiscall d3dVBUF_MNG::PrepStatObj(d3dVBUF_MNG *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  
  poVar1 = param_1;
  iVar2 = StoreViaObjTpl(this,param_1,&param_1,1);
  if (iVar2 == 0) {
    *(uint *)(*(int *)(poVar1 + 0x28) + 0x66) =
         *(uint *)(*(int *)(poVar1 + 0x28) + 0x66) & 0xfffffffd;
    AddStatData(this,poVar1);
    UpdateObjTpl(this,poVar1,param_1,1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B7F40 */

int __thiscall d3dVBUF_MNG::AddStatData(d3dVBUF_MNG *this,objOBJ *param_1)

{
  int iVar1;
  d3dVERTEX_IDX *pdVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float local_88 [4];
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58 [3];
  undefined4 uStack_4c;
  d3dFVF_DESCR local_48 [4];
  int local_44;
  float afStack_24 [4];
  float *local_14;
  undefined8 local_10;
  float local_8;
  
  iVar9 = *(int *)(param_1 + 0x28);
  pvVar4 = apRealloc(*(void **)(iVar9 + 0x70),(*(short *)(iVar9 + 0x6e) + 1) * 0x10);
  *(void **)(iVar9 + 0x70) = pvVar4;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x70);
  if (iVar9 == 0) {
    return 0;
  }
  iVar9 = *(short *)(*(int *)(param_1 + 0x28) + 0x6e) * 0x10 + iVar9;
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4);
  }
  d3dFVF_DESCR::Init(local_48,param_1,(rendCFG *)(*(int *)(iVar5 + 0xc) + 8));
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar5 + 0x6a) == 0) {
    pvVar4 = apMalloc(*(int *)(param_1 + 0x10) * 6);
    *(void **)(iVar5 + 0x6a) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::LODEnable(*(animINST **)(param_1 + 0xbc),0);
  }
  iVar5 = d3dCreateSharedVertList
                    (param_1,&d3dIdxVert,5000,*(ushort **)(*(int *)(param_1 + 0x28) + 0x6a),local_48
                    );
  *(int *)(iVar9 + 8) = iVar5;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::LODEnable(*(animINST **)(param_1 + 0xbc),1);
  }
  if (((*(int *)(param_1 + 0xbc) != 0) && (((byte)*param_1 & 1) != 0)) &&
     (*(int *)(param_1 + 0x2c) != 0)) {
    m3dMATR::Invert((m3dMATR *)(param_1 + 0x3c),(m3dMATR *)local_88);
    iVar5 = 0;
    if (0 < *(int *)(iVar9 + 8)) {
      local_14 = local_88;
      do {
        iVar7 = local_44 * iVar5;
        pdVar2 = *(d3dVERTEX_IDX **)((int)&d3dIdxVert + iVar7);
        local_10._0_4_ = pdVar2;
        uVar3 = *(undefined4 *)(&DAT_00612624 + iVar7);
        uVar10 = *(undefined8 *)((int)&d3dIdxVert + iVar7);
        local_10._4_4_ = (float)uVar3;
        local_10 = uVar10;
        local_8 = *(float *)(&DAT_00612628 + iVar7);
        if (m3dSimdType == 0) {
          local_10._0_4_ = (d3dVERTEX_IDX *)uVar10;
          local_10._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
          if (((uint)local_88 & 0xf) == 0) {
            fVar16 = (float)(d3dVERTEX_IDX *)local_10 * local_88[0] + local_58[0] +
                     local_10._4_4_ * local_78 + local_8 * local_68;
            fVar17 = (float)(d3dVERTEX_IDX *)local_10 * local_88[1] + local_58[1] +
                     local_10._4_4_ * fStack_74 + local_8 * fStack_64;
          }
          else {
            fVar16 = (float)(d3dVERTEX_IDX *)local_10 * local_88[0] + local_10._4_4_ * local_78 +
                     local_8 * local_68 + local_58[0];
            fVar17 = (float)(d3dVERTEX_IDX *)local_10 * local_88[1] + local_10._4_4_ * fStack_74 +
                     local_8 * fStack_64 + local_58[1];
          }
          local_10 = CONCAT44(fVar17,fVar16);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar10 = PackedFloatingMUL(CONCAT44(pdVar2,pdVar2),CONCAT44(local_88[1],local_88[0]));
          uVar11 = PackedFloatingMUL(CONCAT44(uVar3,uVar3),CONCAT44(fStack_74,local_78));
          uVar12 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(fStack_64,local_68));
          uVar10 = PackedFloatingADD(uVar10,CONCAT44(local_58[1],local_58[0]));
          uVar13 = PackedFloatingMUL(CONCAT44(pdVar2,pdVar2),CONCAT44(local_88[3],local_88[2]));
          uVar11 = PackedFloatingADD(uVar11,uVar12);
          uVar14 = PackedFloatingMUL(CONCAT44(uVar3,uVar3),CONCAT44(uStack_6c,uStack_70));
          uVar15 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(uStack_5c,uStack_60));
          uVar12 = PackedFloatingADD(uVar13,CONCAT44(uStack_4c,local_58[2]));
          local_10 = PackedFloatingADD(uVar10,uVar11);
          uVar10 = PackedFloatingADD(uVar14,uVar15);
          uVar10 = PackedFloatingADD(uVar12,uVar10);
          local_8 = (float)uVar10;
          FastExitMediaState();
        }
        else {
          iVar7 = 0;
          do {
            iVar6 = 0;
            pfVar8 = local_88 + iVar7;
            afStack_24[iVar7 + 1] = 0.0;
            fVar16 = ___real_00000000;
            do {
              iVar1 = iVar6 * 4;
              fVar17 = *pfVar8;
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 4;
              fVar16 = *(float *)((int)&local_10 + iVar1) * fVar17 + fVar16;
            } while (iVar6 < 3);
            iVar6 = iVar7 + iVar6 * 4;
            iVar7 = iVar7 + 1;
            afStack_24[iVar7] = fVar16 + local_88[iVar6];
          } while (iVar7 < 3);
          local_10 = CONCAT44(afStack_24[2],afStack_24[1]);
          local_8 = afStack_24[3];
        }
        iVar7 = local_44 * iVar5;
        iVar5 = iVar5 + 1;
        *(d3dVERTEX_IDX **)((int)&d3dIdxVert + iVar7) = (d3dVERTEX_IDX *)local_10;
        *(float *)(&DAT_00612624 + iVar7) = local_10._4_4_;
        *(float *)(&DAT_00612628 + iVar7) = local_8;
      } while (iVar5 < *(int *)(iVar9 + 8));
    }
  }
  iVar9 = FitStaticObj(&d3dVBMng,param_1,&d3dIdxVert,local_48);
  if (iVar9 == 0) {
    return 0;
  }
  *(short *)(*(int *)(param_1 + 0x28) + 0x6e) = *(short *)(*(int *)(param_1 + 0x28) + 0x6e) + 1;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8250 */

int __thiscall d3dVBUF_MNG::PrepDynObj(d3dVBUF_MNG *this,objOBJ *param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  objOBJ *poVar5;
  int iVar6;
  d3dVBUF_MNG *local_4;
  
  local_4 = this;
  if (_d3dVBMng == 0) {
    CreateVBufDefault(&d3dVBMng);
  }
  iVar4 = StoreViaObjTpl(this,param_1,(objOBJ **)&local_4,0);
  if (iVar4 == 0) {
    *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
         *(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0xfffffffd;
    CreatePrepData(this,param_1);
    UpdateObjTpl(this,param_1,(objOBJ *)local_4,0);
    iVar4 = *(int *)(param_1 + 0x28);
    if ((0 < *(short *)(iVar4 + 0x78)) && ((*(byte *)(iVar4 + 0x66) & 8) == 0)) {
      if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(*(int *)(param_1 + 0x2c) + 0xf4) == 0)) {
        iVar6 = 0;
        fVar3 = *(float *)(*(int *)(param_1 + 0xbc) + 0x24);
        iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0xe0);
        if (0 < *(short *)(iVar4 + 0x78)) {
          do {
            SetVBStatFrames_AddFrame(&d3dVBMng,param_1,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(short *)(*(int *)(param_1 + 0x28) + 0x78));
        }
        animINST::SetAnimSeq(*(animINST **)(param_1 + 0xbc),iVar2,fVar3);
        *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 8;
      }
      else {
        poVar5 = param_1;
        if ((*(uint *)(param_1 + 8) & 3) != 0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
          poVar5 = (objOBJ *)0x1;
        }
        iVar6 = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0xe0);
        fVar3 = *(float *)(*(int *)(param_1 + 0xbc) + 0x24);
        if (0 < *(short *)(iVar4 + 0x78)) {
          do {
            SetVBStatFrames_AddFrame(&d3dVBMng,param_1,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(short *)(*(int *)(param_1 + 0x28) + 0x78));
        }
        animINST::SetAnimSeq(*(animINST **)(param_1 + 0xbc),iVar2,fVar3);
        *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 8;
        if (poVar5 != (objOBJ *)0x0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
        }
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + 4);
        *puVar1 = *puVar1 | 0x1000000;
      }
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B83C0 */

int __thiscall
d3dVBUF_MNG::FitStaticObj(d3dVBUF_MNG *this,objOBJ *param_1,void *param_2,d3dFVF_DESCR *param_3)

{
  uint uVar1;
  d3dVBUF_MNG *pdVar2;
  int iVar3;
  
  pdVar2 = this + 4;
  iVar3 = 0;
  while ((((uVar1 = *(uint *)pdVar2, (~uVar1 & 1) != 0 || ((uVar1 & 1) == 0)) || ((uVar1 & 2) == 0))
         || (((int)*(uint *)(pdVar2 + 0x34) <=
              (int)(*(uint *)(pdVar2 + 0x30) +
                   *(int *)(*(short *)(*(int *)(param_1 + 0x28) + 0x6e) * 0x10 +
                            *(int *)(*(int *)(param_1 + 0x28) + 0x70) + 8)) ||
             (*(uint *)(pdVar2 + 8) != *(uint *)param_3))))) {
    iVar3 = iVar3 + 1;
    pdVar2 = pdVar2 + 0x3c;
    if (99 < iVar3) {
      iVar3 = AllocVBuf(this,65000,param_3);
      if (iVar3 == -1) {
        return 0;
      }
      StoreStaticObj(this,iVar3,param_1,param_2,param_3);
      return 1;
    }
  }
  StoreStaticObj(this,iVar3,param_1,param_2,param_3);
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8480 */

int __thiscall
d3dVBUF_MNG::StoreStaticObj
          (d3dVBUF_MNG *this,int param_1,objOBJ *param_2,void *param_3,d3dFVF_DESCR *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  int unaff_retaddr;
  
  puVar4 = (undefined4 *)
           (*(short *)(*(int *)(param_2 + 0x28) + 0x6e) * 0x10 +
           *(int *)(*(int *)(param_2 + 0x28) + 0x70));
  if (*(int *)(this + param_1 * 0x3c + 0x38) < puVar4[2] + *(int *)(this + param_1 * 0x3c + 0x34)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    return 1;
  }
  iVar1 = (**(code **)(**(int **)(this + param_1 * 0x3c + 8) + 0xc))
                    (*(int **)(this + param_1 * 0x3c + 8),0x821,&param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = puVar4[2] * *(int *)(unaff_retaddr + 4);
  puVar5 = (undefined4 *)
           (*(int *)(this + param_1 * 0x3c + 0x34) * *(int *)(unaff_retaddr + 4) + unaff_EBP);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *unaff_EBX;
    unaff_EBX = unaff_EBX + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)unaff_EBX;
    unaff_EBX = (undefined4 *)((int)unaff_EBX + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (**(code **)(**(int **)(this + param_1 * 0x3c + 8) + 0x10))(*(int **)(this + param_1 * 0x3c + 8));
  puVar4[1] = *(undefined4 *)(this + param_1 * 0x3c + 0x34);
  *(int *)(this + param_1 * 0x3c + 0x34) = *(int *)(this + param_1 * 0x3c + 0x34) + puVar4[2];
  *(uint *)(this + param_1 * 0x3c + 4) = *(uint *)(this + param_1 * 0x3c + 4) | 2;
  *puVar4 = unaff_EDI;
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8550 */

int __thiscall
d3dVBUF_MNG::StoreViaObjTpl(d3dVBUF_MNG *this,objOBJ *param_1,objOBJ **param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  objOBJ *poVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  poVar3 = objGetTplObj(param_1);
  if (param_2 != (objOBJ **)0x0) {
    *param_2 = poVar3;
  }
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(poVar3 + 0x28);
  if ((*(uint *)(iVar1 + 0x66) & 1) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(short *)(iVar1 + 0x76) == -1) {
      return 0;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0x66);
    if (((uVar2 ^ *(uint *)(iVar1 + 0x66)) & 0x1f0) != 0) {
      *param_2 = (objOBJ *)0x0;
      return 0;
    }
    if (((uVar2 & 4) != 0) && ((uVar2 & 2) != 0)) {
      *param_2 = (objOBJ *)0x0;
      *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x7a) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x70) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x6a) = 0;
      return 0;
    }
  }
  else if (*(short *)(iVar1 + 0x6e) < 1) {
    return 0;
  }
  puVar5 = (undefined4 *)(iVar1 + 0x66);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x28) + 0x66);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 2;
  if ((*(uint *)(param_1 + 0x24) & 0x800) != 0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8640 */

void __thiscall
d3dVBUF_MNG::UpdateObjTpl(d3dVBUF_MNG *this,objOBJ *param_1,objOBJ *param_2,int param_3)

{
  if (param_2 != (objOBJ *)0x0) {
    *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x66) =
         *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x66);
    *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x6a) =
         *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x6a);
    if (param_3 == 0) {
      *(undefined2 *)(*(int *)(param_2 + 0x28) + 0x76) =
           *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x76);
    }
    else {
      *(undefined2 *)(*(int *)(param_2 + 0x28) + 0x6e) =
           *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x6e);
      *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x70) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x70);
      *(undefined2 *)(*(int *)(param_2 + 0x28) + 0x74) =
           *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x74);
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 2;
    *(uint *)(*(int *)(param_2 + 0x28) + 0x66) =
         *(uint *)(*(int *)(param_2 + 0x28) + 0x66) & 0xfffffffd;
    *(uint *)(*(int *)(param_2 + 0x28) + 0x66) = *(uint *)(*(int *)(param_2 + 0x28) + 0x66) | 1;
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B86D0 */

int __thiscall d3dVBUF_MNG::AllocVBuf(d3dVBUF_MNG *this,int param_1,d3dFVF_DESCR *param_2)

{
  undefined4 uVar1;
  d3dVBUF_MNG *pdVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar4 = 0;
  pdVar2 = this + 4;
  do {
    if ((~*(uint *)pdVar2 & 1) != 0) break;
    iVar4 = iVar4 + 1;
    pdVar2 = pdVar2 + 0x3c;
  } while (iVar4 < 100);
  if ((iVar4 != 100) && (iVar4 != -1)) {
    local_8 = *(undefined4 *)param_2;
    local_10 = 0x10;
    local_c = 0x10000;
    local_4 = param_1;
    iVar3 = (**(code **)(**(int **)(d3dDriver + 0x778) + 0x14))
                      (*(int **)(d3dDriver + 0x778),&local_10,this + iVar4 * 0x3c + 8,0);
    if (iVar3 != 0) {
      return -1;
    }
    *(int *)(this + iVar4 * 0x3c + 0x38) = param_1;
    *(undefined4 *)(this + iVar4 * 0x3c + 4) = 0;
    *(undefined4 *)(this + iVar4 * 0x3c + 0x34) = 0;
    pdVar2 = this + iVar4 * 0x3c + 0xc;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar2 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pdVar2 = pdVar2 + 4;
    }
    uVar1 = *(undefined4 *)(unaff_EDI + 0x2a7c0);
    *(undefined4 *)(this + iVar4 * 0x3c + 4) = 1;
    *(undefined4 *)(unaff_EDI + (iVar4 * 3 + 3) * 0x14) = uVar1;
    return iVar4;
  }
  return -1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B87C0 */

void __thiscall
d3dVBUF_MNG::RenderStatObj(d3dVBUF_MNG *this,objOBJ *param_1,objSPLIT_ENTRY *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  d3dDRIVER *pdVar7;
  int *piVar8;
  
  pdVar7 = d3dDriver;
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x6a);
  piVar8 = (int *)(*(short *)(iVar3 + 0x74) * 0x10 + *(int *)(iVar3 + 0x70));
  uVar1 = *(ushort *)(param_2 + 0x6a);
  iVar3 = piVar8[1];
  uVar2 = *(ushort *)(param_2 + 0x68);
  iVar5 = piVar8[2];
  uVar6 = *(undefined4 *)(this + *piVar8 * 0x3c + 8);
  *(uint *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + ((uint)uVar1 * 3) / 3;
  (**(code **)(**(int **)(pdVar7 + 0x77c) + 0x80))
            (*(int **)(pdVar7 + 0x77c),4,uVar6,iVar3,iVar5,iVar4 + (uint)uVar2 * 6,(uint)uVar1 * 3,0
            );
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8850 */

void __thiscall
d3dVBUF_MNG::RenderDynObj
          (d3dVBUF_MNG *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,rendCFG *param_3)

{
  d3dOBJ_FACE_SLICE *pdVar1;
  short sVar2;
  bool bVar3;
  int *piVar4;
  objSPLIT_UNSHARED *poVar5;
  int iVar6;
  objVB *poVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  d3dVBUF_MNG *pdVar14;
  void *local_c;
  int *local_8;
  d3dVBUF_MNG *local_4;
  
  local_4 = this;
  poVar5 = objOBJ::GetSplitUnshared(param_1);
  if (poVar5 == (objSPLIT_UNSHARED *)0x0) {
    poVar5 = (objSPLIT_UNSHARED *)operator_new(8);
    if (poVar5 == (objSPLIT_UNSHARED *)0x0) {
      poVar5 = (objSPLIT_UNSHARED *)0x0;
    }
    else {
      poVar5 = (objSPLIT_UNSHARED *)objSPLIT_UNSHARED::objSPLIT_UNSHARED(poVar5);
    }
    iVar6 = objOBJ::GetNSplit(param_1);
    objSPLIT_UNSHARED::Alloc(poVar5,iVar6);
    objOBJ::SetSplitUnshared(param_1,poVar5);
  }
  poVar7 = objOBJ::GetVB(param_1);
  if ((((byte)*poVar7 & 4) != 0) && (poVar7 = objOBJ::GetVB(param_1), ((byte)*poVar7 & 2) != 0)) {
    poVar7 = objOBJ::GetVB(param_1);
    *(undefined2 *)(poVar7 + 0x10) = 0xffff;
    poVar7 = objOBJ::GetVB(param_1);
    *(undefined4 *)(poVar7 + 4) = 0;
  }
  poVar7 = objOBJ::GetVB(param_1);
  if (*(short *)(poVar7 + 0x10) == -1) {
    PrepDynObj(&d3dVBMng,param_1);
  }
  poVar7 = objOBJ::GetVB(param_1);
  sVar2 = *(short *)(poVar7 + 0x10);
  iVar6 = objSPLIT_ENTRY::GetSplitNmb(param_2);
  if (6 < iVar6) {
    return;
  }
  pdVar1 = (d3dOBJ_FACE_SLICE *)(this + iVar6 * 0x18 + sVar2 * 0xa8 + 0x1774);
  iVar11 = *(int *)(pdVar1 + 0xc);
  iVar6 = ReassignFaceSlice(this,param_1,pdVar1,
                            *(int *)(this + iVar6 * 0x18 + sVar2 * 0xa8 + 0x1784),param_3);
  poVar5 = objOBJ::GetSplitUnshared(param_1);
  local_8 = (int *)(*(int *)poVar5 + *(int *)(pdVar1 + 0x14) * 8);
  if (*local_8 == *(int *)(this + (iVar11 * 3 + 3) * 0x14)) {
    if (iVar6 == 0) {
      bVar3 = true;
      pdVar14 = this + iVar11 * 0x3c + 4;
      goto LAB_004b8a4b;
    }
LAB_004b89ac:
    iVar11 = *(int *)(pdVar1 + 0xc);
  }
  else {
    if (iVar6 != 0) goto LAB_004b89ac;
    d3dUpdateVertData(param_1,*(ushort **)(pdVar1 + 8),param_2,*(void **)pdVar1,*(int *)(pdVar1 + 4)
                      ,(d3dFVF_DESCR *)(this + iVar11 * 0x3c + 0xc),0,param_3);
  }
  pdVar14 = this + iVar11 * 0x3c + 4;
  if (*(int *)(this + iVar11 * 0x3c + 0x34) + *(int *)(pdVar1 + 4) < *(int *)(pdVar14 + 0x34)) {
    iVar6 = LockNoOverwrite(this,iVar11,&local_c);
  }
  else {
    iVar6 = LockDiscard(this,iVar11,&local_c);
  }
  if (iVar6 == 0) {
    return;
  }
  iVar8 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(pdVar14 + 8));
  iVar6 = *(int *)(pdVar1 + 4);
  puVar12 = *(undefined4 **)pdVar1;
  iVar9 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(pdVar14 + 8));
  puVar13 = (undefined4 *)(iVar9 * *(int *)(pdVar14 + 0x30) + (int)local_c);
  for (uVar10 = (uint)(iVar8 * iVar6) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar10 = iVar8 * iVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  Unlock(local_4,iVar11);
  bVar3 = false;
  local_8[1] = *(int *)(pdVar14 + 0x30);
LAB_004b8a4b:
  iVar6 = objSPLIT_ENTRY::GetNFace(param_2);
  piVar4 = local_8;
  d3dDRIVER::DrawIndexedPrimitiveVB
            (d3dDriver,*(IDirect3DVertexBuffer7 **)(pdVar14 + 4),local_8[1],*(int *)(pdVar1 + 4),
             *(ushort **)(pdVar1 + 8),iVar6 * 3);
  *piVar4 = *(int *)(pdVar14 + 0x38);
  if (!bVar3) {
    *(int *)(pdVar14 + 0x30) = *(int *)(pdVar14 + 0x30) + *(int *)(pdVar1 + 4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B8AA0 */

void __fastcall
d3dUpdateVertData(objOBJ *param_1,ushort *param_2,objSPLIT_ENTRY *param_3,void *param_4,int param_5,
                 d3dFVF_DESCR *param_6,int param_7,rendCFG *param_8)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  rendMTL *prVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  txmTEXTURE *ptVar14;
  int iVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int local_3c;
  ushort *local_34;
  int local_2c;
  int local_28;
  
  if ((((*(byte *)(*(int *)(param_1 + 0x28) + 0x66) & 0x20) != 0) || (param_7 != 0)) &&
     (local_3c = 0, puVar12 = param_2, *(short *)(param_3 + 0x6a) != 0)) {
    do {
      local_2c = 3;
      local_34 = (ushort *)
                 (((uint)*(ushort *)(param_3 + 0x68) + local_3c) *
                  (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) + **(int **)(param_1 + 0x28));
      do {
        local_34 = local_34 + 1;
        puVar13 = puVar12 + 1;
        puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (uint)*local_34 * 0xc);
        puVar17 = (undefined4 *)((uint)*puVar12 * *(int *)(param_6 + 4) + (int)param_4);
        *puVar17 = *puVar1;
        puVar17[1] = puVar1[1];
        puVar17[2] = puVar1[2];
        local_2c = local_2c + -1;
        puVar12 = puVar13;
      } while (local_2c != 0);
      local_3c = local_3c + 1;
    } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
  }
  if (((*(char *)(*(int *)(param_1 + 0x28) + 0x66) < '\0') || (param_7 != 0)) &&
     ((((byte)param_1[0x24] & 0x10) != 0 &&
      (local_3c = 0, puVar12 = param_2, *(short *)(param_3 + 0x6a) != 0)))) {
    do {
      local_28 = 3;
      local_34 = (ushort *)
                 (((uint)*(ushort *)(param_3 + 0x68) + local_3c) *
                  (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) + **(int **)(param_1 + 0x28));
      do {
        local_34 = local_34 + 1;
        uVar4 = *puVar12;
        iVar15 = *(int *)(param_6 + 4);
        uVar7 = *(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) + (uint)*local_34 * 4);
        if ((((byte)param_1[0x24] & 0x40) != 0) && (uVar7 >> 0x18 != 0xff)) {
          uVar7 = ftol();
          uVar8 = ftol();
          uVar9 = ftol();
          uVar7 = ((uVar7 | 0xffffff00) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
        }
        puVar12 = puVar12 + 1;
        *(uint *)((int)param_4 + *(int *)(param_6 + 8) + (uint)uVar4 * iVar15) = uVar7;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_3c = local_3c + 1;
    } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
  }
  if (param_8 != (rendCFG *)0x0) {
    prVar10 = rendCFG::FindMtlRendMtl(param_8,6);
    if (((prVar10 != (rendMTL *)0x0) ||
        (prVar10 = rendCFG::FindMtlRendMtl(param_8,4), prVar10 != (rendMTL *)0x0)) ||
       (prVar10 = rendCFG::FindMtlRendMtl(param_8,5), prVar10 != (rendMTL *)0x0)) {
      _m3dCheckValid(*(float *)(prVar10 + 0x18));
      if (_DAT_005db7f4 < *(float *)(prVar10 + 0x18)) {
        if (*(animINST **)(param_1 + 0xbc) == (animINST *)0x0) {
          if (*(int *)(*(int *)(param_1 + 0x28) + 0x48) == 0) {
            objOBJ::CalcVertNormals(param_1);
          }
        }
        else {
          animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
        }
      }
      uVar11 = _d3dCalcObjDot3Color(param_1,param_2,param_3,param_5,*(float *)(prVar10 + 0x18));
      local_3c = 0;
      puVar12 = param_2;
      if (*(short *)(param_3 + 0x6a) != 0) {
        do {
          param_5 = 3;
          do {
            iVar15 = *(int *)(param_6 + 4) * (uint)*puVar12;
            if (uVar11 == 0) {
              *(ulong **)((int)param_4 + *(int *)(param_6 + 0xc) + iVar15) =
                   (&_d3dObjDot3Color)[*puVar12];
            }
            else {
              *(ulong *)((int)param_4 + *(int *)(param_6 + 0xc) + iVar15) = uVar11;
            }
            puVar12 = puVar12 + 1;
            param_5 = param_5 + -1;
          } while (param_5 != 0);
          local_3c = local_3c + 1;
        } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
      }
    }
    prVar10 = rendCFG::FindMtlRendMtl(param_8,6);
    if (((prVar10 != (rendMTL *)0x0) ||
        (prVar10 = rendCFG::FindMtlRendMtl(param_8,4), prVar10 != (rendMTL *)0x0)) && (param_7 != 0)
       ) {
      uVar6 = ftol();
      local_3c = 0;
      puVar12 = param_2;
      if (*(short *)(param_3 + 0x6a) != 0) {
        do {
          param_5 = 3;
          do {
            uVar4 = *puVar12;
            puVar12 = puVar12 + 1;
            *(uint *)((uint)uVar4 * *(int *)(param_6 + 4) + *(int *)(param_6 + 8) + (int)param_4) =
                 CONCAT31(CONCAT21(CONCAT11(uVar6,uVar6),uVar6),uVar6);
            param_5 = param_5 + -1;
          } while (param_5 != 0);
          local_3c = local_3c + 1;
        } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
      }
    }
    if (((*(uint *)(param_8 + 0xb8) & 0x800) != 0) &&
       ((*(uint *)(param_8 + 0xb8) & 0x40000000) == 0)) {
      if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
        animINST::Validate(*(animINST **)(param_1 + 0xbc),0x1000);
      }
      local_3c = 0;
      puVar12 = param_2;
      if (*(short *)(param_3 + 0x6a) != 0) {
        do {
          param_8 = (rendCFG *)0x3;
          puVar13 = (ushort *)
                    (((uint)*(ushort *)(param_3 + 0x68) + local_3c) *
                     (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) + **(int **)(param_1 + 0x28));
          do {
            puVar13 = puVar13 + 1;
            puVar16 = puVar12 + 1;
            puVar1 = (undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x28) + 0x48) + (uint)*puVar13 * 0xc);
            puVar17 = (undefined4 *)
                      ((int)param_4 +
                      *(int *)(param_6 + 0x10) + (uint)*puVar12 * *(int *)(param_6 + 4));
            *puVar17 = *puVar1;
            puVar17[1] = puVar1[1];
            puVar17[2] = puVar1[2];
            param_8 = param_8 + -1;
            puVar12 = puVar16;
          } while (param_8 != (rendCFG *)0x0);
          local_3c = local_3c + 1;
        } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
      }
    }
  }
  if ((((*(byte *)(*(int *)(param_1 + 0x28) + 0x66) & 0x40) != 0) || (param_7 != 0)) &&
     (local_28 = 0, 0 < *(short *)(param_3 + 100))) {
    param_8 = (rendCFG *)(param_3 + 0x18);
    do {
      ptVar14 = objOBJ::GetFaceTexMtlNmb(param_1,(uint)*(ushort *)(param_3 + 0x68),local_28);
      if (ptVar14 != (txmTEXTURE *)0x0) {
        pbVar2 = (byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6 + (char)*param_8 * 4);
        local_3c = 0;
        puVar12 = param_2;
        if (*(short *)(param_3 + 0x6a) != 0) {
          do {
            uVar4 = *(ushort *)(param_3 + 0x68);
            bVar3 = *(byte *)(*(int **)(param_1 + 0x28) + 1);
            iVar15 = **(int **)(param_1 + 0x28);
            iVar18 = 0;
            do {
              uVar7 = (uint)*(ushort *)
                             (((uint)uVar4 + local_3c) * (uint)bVar3 + iVar15 + 8 +
                             (iVar18 + (uint)*pbVar2 * 3) * 2);
              iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0xc + (uint)pbVar2[1] * 4);
              iVar19 = *(int *)(param_6 + (uint)pbVar2[3] * 4 + 0x14) +
                       (uint)*puVar12 * *(int *)(param_6 + 4);
              iVar18 = iVar18 + 1;
              *(undefined4 *)(iVar19 + (int)param_4) = *(undefined4 *)(iVar5 + uVar7 * 8);
              puVar12 = puVar12 + 1;
              *(undefined4 *)(iVar19 + 4 + (int)param_4) = *(undefined4 *)(iVar5 + 4 + uVar7 * 8);
            } while (iVar18 < 3);
            local_3c = local_3c + 1;
          } while (local_3c < (int)(uint)*(ushort *)(param_3 + 0x6a));
        }
      }
      local_28 = local_28 + 1;
      param_8 = param_8 + 0x19;
    } while (local_28 < *(short *)(param_3 + 100));
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B90B0 */

void __thiscall
d3dVBUF_MNG::RenderPrimitive(d3dVBUF_MNG *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = FindVBufDynFVF(this,param_3);
  if (*(int *)(this + iVar1 * 0x3c + 0x34) + param_2 < *(int *)(this + iVar1 * 0x3c + 0x38)) {
    iVar2 = LockNoOverwrite(this,iVar1,(void **)&param_3);
  }
  else {
    iVar2 = LockDiscard(this,iVar1,(void **)&param_3);
  }
  if (iVar2 != 0) {
    iVar2 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(this + iVar1 * 0x3c + 0xc));
    iVar3 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(this + iVar1 * 0x3c + 0xc));
    puVar5 = (undefined4 *)(iVar3 * *(int *)(this + iVar1 * 0x3c + 0x34) + param_3);
                    /* WARNING: Load size is inaccurate */
    for (uVar4 = (uint)(iVar2 * param_2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar5 = puVar5 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar4 = iVar2 * param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    Unlock(this,iVar1);
    d3dDRIVER::DrawPrimitiveVB
              (d3dDriver,*(IDirect3DVertexBuffer7 **)(this + iVar1 * 0x3c + 8),
               *(int *)(this + iVar1 * 0x3c + 0x34),param_2);
    *(int *)(this + iVar1 * 0x3c + 0x34) = *(int *)(this + iVar1 * 0x3c + 0x34) + param_2;
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9170 */

void __thiscall
d3dVBUF_MNG::RenderIndexedPrimitive
          (d3dVBUF_MNG *this,void *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_1 != (void *)0x0) {
    iVar2 = FindVBufDynFVF(this,param_5);
    if (*(int *)(this + iVar2 * 0x3c + 0x34) + param_2 < *(int *)(this + iVar2 * 0x3c + 0x38)) {
      iVar3 = LockNoOverwrite(this,iVar2,(void **)&param_5);
    }
    else {
      iVar3 = LockDiscard(this,iVar2,(void **)&param_5);
    }
    if (iVar3 == 0) {
      return;
    }
    iVar3 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(this + iVar2 * 0x3c + 0xc));
    iVar4 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)(this + iVar2 * 0x3c + 0xc));
    puVar6 = (undefined4 *)(iVar4 * *(int *)(this + iVar2 * 0x3c + 0x34) + param_5);
                    /* WARNING: Load size is inaccurate */
    for (uVar5 = (uint)(iVar3 * param_2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar6 = puVar6 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar5 = iVar3 * param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    Unlock(this,iVar2);
    *(int *)(this + 0x2a7b4) = iVar2;
    uVar1 = *(undefined4 *)(this + iVar2 * 0x3c + 0x34);
    *(int *)(this + 0x2a7bc) = param_2;
    *(undefined4 *)(this + 0x2a7b8) = uVar1;
    iVar3 = *(int *)(this + iVar2 * 0x3c + 0x34) + param_2;
    param_2 = 0;
    *(int *)(this + iVar2 * 0x3c + 0x34) = iVar3;
  }
  if (param_3 != (ushort *)0x0) {
    d3dDRIVER::DrawIndexedPrimitiveVB
              (d3dDriver,*(IDirect3DVertexBuffer7 **)(this + *(int *)(this + 0x2a7b4) * 0x3c + 8),
               *(int *)(this + 0x2a7b8) + param_2,*(int *)(this + 0x2a7bc) - param_2,param_3,
               param_4 * 3);
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9290 */

int __thiscall d3dVBUF_MNG::LockNoOverwrite(d3dVBUF_MNG *this,int param_1,void **param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(this + param_1 * 0x3c + 8) + 0xc))
                    (*(int **)(this + param_1 * 0x3c + 8),0x1820,param_2,0);
  return (uint)(iVar1 == 0);
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B92C0 */

int __thiscall d3dVBUF_MNG::LockDiscard(d3dVBUF_MNG *this,int param_1,void **param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(this + param_1 * 0x3c + 8) + 0xc))
                    (*(int **)(this + param_1 * 0x3c + 8),0x2820,param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(this + param_1 * 0x3c + 0x34) = 0;
  iVar1 = *(int *)(this + 0x2a7c0);
  *(int *)(this + 0x2a7c0) = iVar1 + 1;
  *(int *)(this + (param_1 * 3 + 3) * 0x14) = iVar1 + 1;
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9320 */

void __thiscall d3dVBUF_MNG::Unlock(d3dVBUF_MNG *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + param_1 * 0x3c + 8) + 0x10))();
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9340 */

void __thiscall d3dVBUF_MNG::FreeObjVBData(d3dVBUF_MNG *this,objOBJ *param_1)

{
  int iVar1;
  d3dVBUF_MNG *pdVar2;
  int iVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0x66) & 2) == 0) {
    apFree(*(void **)(*(int *)(param_1 + 0x28) + 0x6a));
    apFree(*(void **)(*(int *)(param_1 + 0x28) + 0x70));
    apFree(*(void **)(*(int *)(param_1 + 0x28) + 0x7a));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x70) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x6a) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x7a) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x6e) = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (-1 < *(short *)(iVar1 + 0x76)) {
    pdVar2 = this + *(short *)(iVar1 + 0x76) * 0xa8 + 0x1774;
    iVar3 = 0;
    if (**(short **)(iVar1 + 0x18) != 0) {
      do {
        if ((iVar3 < 7) && ((*(byte *)(iVar1 + 0x66) & 2) == 0)) {
          apFree(*(void **)(pdVar2 + 8));
          apFree(*(void **)pdVar2);
          *(undefined4 *)(pdVar2 + 8) = 0;
          *(undefined4 *)pdVar2 = 0;
        }
        iVar1 = *(int *)(param_1 + 0x28);
        iVar3 = iVar3 + 1;
        pdVar2 = pdVar2 + 0x18;
      } while (iVar3 < (int)(uint)**(ushort **)(iVar1 + 0x18));
    }
  }
  *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x76) = 0xffff;
  *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
       *(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0xfffffffd;
  *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
       *(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0xfffffffe;
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9430 */

void __thiscall d3dVBUF_MNG::CreateVBufDefault(d3dVBUF_MNG *this)

{
  if (*(int *)this == 0) {
    *(undefined4 *)this = 1;
    *(undefined4 *)(this + 0x2a7c4) = 0;
  }
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9450 */

void __thiscall d3dVBUF_MNG::ReleaseVBufAll(d3dVBUF_MNG *this)

{
  int *piVar1;
  d3dVBUF_MNG *pdVar2;
  int iVar3;
  
  pdVar2 = this + 8;
  iVar3 = 100;
  do {
    if ((~*(uint *)(pdVar2 + -4) & 1) == 0) {
      piVar1 = *(int **)pdVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int *)pdVar2 = 0;
      *(int *)(pdVar2 + -4) = 0;
    }
    pdVar2 = pdVar2 + 0x3c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x2a7c4) = 0;
  *(undefined4 *)this = 0;
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B94A0 */

int __thiscall d3dVBUF_MNG::FindVBufDynFVF(d3dVBUF_MNG *this,int param_1)

{
  uint uVar1;
  d3dVBUF_MNG *pdVar2;
  int iVar3;
  d3dFVF_DESCR local_28 [40];
  
  iVar3 = 0;
  pdVar2 = this + 4;
  while ((uVar1 = *(uint *)pdVar2, (~uVar1 & 1) != 0 ||
         ((((uVar1 & 1) != 0 && ((uVar1 & 2) != 0)) || (*(uint *)(pdVar2 + 8) != param_1))))) {
    iVar3 = iVar3 + 1;
    pdVar2 = pdVar2 + 0x3c;
    if (99 < iVar3) {
      d3dFVF_DESCR::Init(local_28,param_1);
      iVar3 = AllocVBuf(this,10000,local_28);
      *(int *)(this + 0x2a7c4) = *(int *)(this + 0x2a7c4) + 1;
      return iVar3;
    }
  }
  return iVar3;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9510 */

void __thiscall d3dVBUF_MNG::DiscardDynVBufAll(d3dVBUF_MNG *this)

{
  d3dVBUF_MNG *pdVar1;
  int iVar2;
  
  pdVar1 = this + 4;
  iVar2 = 100;
  do {
    if (((~*(uint *)pdVar1 & 1) == 0) &&
       (((*(uint *)pdVar1 & 1) == 0 || ((*(uint *)pdVar1 & 2) == 0)))) {
      *(uint *)(pdVar1 + 0x30) = *(uint *)(pdVar1 + 0x34) + 1;
    }
    pdVar1 = pdVar1 + 0x3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9540 */

int __thiscall d3dVBUF_MNG::CreatePrepData(d3dVBUF_MNG *this,objOBJ *param_1)

{
  short sVar1;
  objOBJ *poVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  d3dVBUF_MNG *pdVar7;
  int iVar8;
  int iVar9;
  int local_58;
  d3dFVF_DESCR local_50 [40];
  undefined4 local_28;
  uint local_24;
  
  poVar2 = param_1;
  iVar8 = 0;
  if (*(short *)(*(int *)(param_1 + 0x28) + 0x76) < 0) {
    d3dFVF_DESCR::Init(local_50,0x342);
    iVar3 = 0;
    pdVar7 = this + 0x1774;
    do {
      if (*(int *)pdVar7 == 0) break;
      iVar3 = iVar3 + 1;
      pdVar7 = pdVar7 + 0xa8;
    } while (iVar3 < 1000);
    if (iVar3 == 1000) {
      iVar3 = -1;
    }
    *(short *)(*(int *)(param_1 + 0x28) + 0x76) = (short)iVar3;
    iVar3 = *(int *)(param_1 + 0x28);
    sVar1 = *(short *)(iVar3 + 0x76);
    if (*(int *)(iVar3 + 0x6a) == 0) {
      pvVar4 = apMalloc(*(int *)(param_1 + 0x10) * 6);
      *(void **)(iVar3 + 0x6a) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
    }
    iVar3 = d3dCreateSharedVertList
                      (param_1,&d3dIdxVert,5000,*(ushort **)(*(int *)(param_1 + 0x28) + 0x6a),
                       local_50);
    if (*(int *)(param_1 + 0xe8) == 0) {
      param_1 = (objOBJ *)0x0;
    }
    else {
      param_1 = *(objOBJ **)(*(int *)(param_1 + 0xe8) + *(int *)(rendDrv + 0x78) * 4);
    }
    if (**(short **)(*(int *)(poVar2 + 0x28) + 0x18) != 0) {
      pdVar7 = this + sVar1 * 0xa8 + 0x1784;
      local_58 = 0;
      do {
        if (local_58 < 0x310) {
          *(int *)(pdVar7 + 4) = iVar8;
          iVar9 = *(int *)(*(int *)(*(int *)(poVar2 + 0x28) + 0x18) + 2) + local_58;
          d3dFVF_DESCR::Init((d3dFVF_DESCR *)&local_28,poVar2,
                             (rendCFG *)
                             ((uint)*(ushort *)(iVar9 + 0x66) * *(int *)(param_1 + 8) + 8 +
                             *(int *)(param_1 + 0xc)));
          *(undefined4 *)(pdVar7 + -4) = 0xffffffff;
          *(undefined4 *)pdVar7 = local_28;
          puVar5 = (ushort *)apCalloc((uint)*(ushort *)(iVar9 + 0x6a) * 3,2);
          *(ushort **)(pdVar7 + -8) = puVar5;
          uVar6 = d3dPrepareFaceIndSlice
                            (poVar2,(uint)*(ushort *)(iVar9 + 0x68),(uint)*(ushort *)(iVar9 + 0x6a),
                             *(ushort **)(*(int *)(poVar2 + 0x28) + 0x6a),iVar3,local_50,puVar5);
          *(uint *)(pdVar7 + -0xc) = uVar6;
          pvVar4 = apCalloc(uVar6,local_24);
          *(void **)(pdVar7 + -0x10) = pvVar4;
        }
        iVar8 = iVar8 + 1;
        pdVar7 = pdVar7 + 0x18;
        local_58 = local_58 + 0x70;
      } while (iVar8 < (int)(uint)**(ushort **)(*(int *)(poVar2 + 0x28) + 0x18));
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9700 */

int __thiscall
d3dVBUF_MNG::ReassignFaceSlice
          (d3dVBUF_MNG *this,objOBJ *param_1,d3dOBJ_FACE_SLICE *param_2,int param_3,rendCFG *param_4
          )

{
  uint uVar1;
  int iVar2;
  d3dVBUF_MNG *pdVar3;
  d3dFVF_DESCR local_50 [40];
  d3dFVF_DESCR local_28 [40];
  
  if ((-1 < *(int *)(param_2 + 0xc)) &&
     (*(int *)(this + *(int *)(param_2 + 0xc) * 0x3c + 0xc) == param_3)) {
    return 0;
  }
  iVar2 = 0;
  pdVar3 = this + 4;
  do {
    uVar1 = *(uint *)pdVar3;
    if (((~uVar1 & 1) == 0) &&
       ((((uVar1 & 1) == 0 || ((uVar1 & 2) == 0)) && (*(uint *)(pdVar3 + 8) == param_3))))
    goto LAB_004b9778;
    iVar2 = iVar2 + 1;
    pdVar3 = pdVar3 + 0x3c;
  } while (iVar2 < 100);
  d3dFVF_DESCR::Init(local_50,param_3);
  iVar2 = AllocVBuf(this,10000,local_50);
  *(int *)(this + 0x2a7c4) = *(int *)(this + 0x2a7c4) + 1;
LAB_004b9778:
  *(int *)(param_2 + 0xc) = iVar2;
  d3dFVF_DESCR::Init(local_28,param_3);
  d3dUpdateVertData(param_1,*(ushort **)(param_2 + 8),
                    (objSPLIT_ENTRY *)
                    (*(int *)(param_2 + 0x14) * 0x70 +
                    *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2)),*(void **)param_2,
                    *(int *)(param_2 + 4),local_28,1,param_4);
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B97D0 */

int __thiscall d3dVBUF_MNG::SetVBStatFrames_AddAllFrames(d3dVBUF_MNG *this,objOBJ *param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  d3dVBUF_MNG *local_4;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(*(int *)(param_1 + 0x2c) + 0xf4) == 0)) {
    iVar4 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0xe0);
    fVar3 = *(float *)(*(int *)(param_1 + 0xbc) + 0x24);
    if (0 < *(short *)(*(int *)(param_1 + 0x28) + 0x78)) {
      do {
        SetVBStatFrames_AddFrame(this,param_1,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(short *)(*(int *)(param_1 + 0x28) + 0x78));
    }
    animINST::SetAnimSeq(*(animINST **)(param_1 + 0xbc),iVar2,fVar3);
    *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 8;
  }
  else {
    local_4 = this;
    if ((*(uint *)(param_1 + 8) & 3) != 0) {
      local_4 = (d3dVBUF_MNG *)0x1;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
    }
    iVar4 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0xe0);
    fVar3 = *(float *)(*(int *)(param_1 + 0xbc) + 0x24);
    if (0 < *(short *)(*(int *)(param_1 + 0x28) + 0x78)) {
      do {
        SetVBStatFrames_AddFrame(this,param_1,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(short *)(*(int *)(param_1 + 0x28) + 0x78));
    }
    animINST::SetAnimSeq(*(animINST **)(param_1 + 0xbc),iVar2,fVar3);
    *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 8;
    if (local_4 != (d3dVBUF_MNG *)0x0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
    }
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + 4);
    *puVar1 = *puVar1 | 0x1000000;
  }
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B98D0 */

int __thiscall d3dVBUF_MNG::SetVBStatFrames_AddFrame(d3dVBUF_MNG *this,objOBJ *param_1,int param_2)

{
  objOBJ *poVar1;
  int iVar2;
  
  poVar1 = objGetTplObj(param_1);
  if (poVar1 == (objOBJ *)0x0) {
    return 0;
  }
  iVar2 = StoreViaObjTpl(this,param_1,(objOBJ **)0x0,1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 * 0xc + *(int *)(*(int *)(param_1 + 0x28) + 0x7a)) =
         *(undefined4 *)(param_2 * 0xc + *(int *)(*(int *)(poVar1 + 0x28) + 0x7a));
    return 1;
  }
  iVar2 = param_2 * 0xc;
  animINST::SetAnimSeq
            (*(animINST **)(param_1 + 0xbc),
             *(int *)(*(int *)(*(int *)(poVar1 + 0x28) + 0x7a) + 4 + iVar2),
             *(float *)(*(int *)(*(int *)(poVar1 + 0x28) + 0x7a) + 8 + iVar2));
  animINST::Validate(*(animINST **)(param_1 + 0xbc),0x6201);
  *(undefined4 *)(iVar2 + *(int *)(*(int *)(poVar1 + 0x28) + 0x7a)) =
       *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0xe4);
  iVar2 = StoreViaObjTpl(this,param_1,(objOBJ **)&param_2,1);
  if (iVar2 == 0) {
    *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
         *(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0xfffffffd;
    AddStatData(this,param_1);
    UpdateObjTpl(this,param_1,(objOBJ *)param_2,1);
  }
  return 1;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9A20 */

void __thiscall
d3dDRIVER::DrawIndexedPrimitiveVB
          (d3dDRIVER *this,IDirect3DVertexBuffer7 *param_1,int param_2,int param_3,ushort *param_4,
          int param_5)

{
  *(int *)(this + 0x228) = *(int *)(this + 0x228) + param_5 / 3;
  (**(code **)(**(int **)(this + 0x77c) + 0x80))
            (*(int **)(this + 0x77c),4,param_1,param_2,param_3,param_4,param_5,0);
  return;
}




/* from: drv:D3d_rnd_vbuf.cpp
   addr: 004B9A70 */

void __thiscall
d3dDRIVER::DrawPrimitiveVB(d3dDRIVER *this,IDirect3DVertexBuffer7 *param_1,int param_2,int param_3)

{
  *(int *)(this + 0x228) = *(int *)(this + 0x228) + param_3 / 3;
  (**(code **)(**(int **)(this + 0x77c) + 0x7c))
            (*(int **)(this + 0x77c),4,param_1,param_2,param_3,0);
  return;
}

