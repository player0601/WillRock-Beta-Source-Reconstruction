
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_effect.cpp
   addr: 005000E0 */

ulong __fastcall gsEffEnvirColor(cdtINFO *param_1,m3dCOLOR *param_2,m3dCOLOR *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  objOBJ *this;
  txmTEXTURE *ptVar9;
  ulong uVar10;
  pteSHADER *ppVar11;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_2 == (m3dCOLOR *)0x0) {
    param_2 = (m3dCOLOR *)&local_10;
  }
  *(undefined4 *)param_2 = 0x437f0000;
  *(undefined4 *)(param_2 + 8) = 0x437f0000;
  *(undefined4 *)(param_2 + 4) = 0x437f0000;
  *(undefined4 *)(param_2 + 0xc) = 0x437f0000;
  if (param_3 != (m3dCOLOR *)0x0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if ((vidDriver != (vidDRIVER *)0x0) &&
     ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x4000) == 0)) {
    return 0xffffffff;
  }
  if (((byte)*param_1 & 2) == 0) {
    return 0xffffffff;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 4) & 0x48) == 0)) {
    if (*(entENTITY **)(iVar6 + 0x13c) != (entENTITY *)0x0) {
      entENTITY::GetColor(*(entENTITY **)(iVar6 + 0x13c),param_2,(m3dCOLOR *)0x0,0);
    }
    uVar5 = ftol();
    iVar6 = ftol();
    uVar7 = ftol();
    uVar8 = ftol();
    return uVar8 & 0xff | ((uVar5 & 0xff | iVar6 << 8) << 8 | uVar7 & 0xff) << 8;
  }
  if (*(int *)(param_1 + 8) == -1) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 0xffffffff;
  }
  this = scnSCENE::GetCDTObj(gsScenePtr,param_1);
  if ((this == (objOBJ *)0x0) ||
     (ptVar9 = objOBJ::GetFaceTexRendMtl(this,*(int *)(param_1 + 0xc),1),
     ptVar9 == (txmTEXTURE *)0x0)) {
    *(undefined4 *)param_2 = 0x437f0000;
    *(undefined4 *)(param_2 + 8) = 0x437f0000;
    *(undefined4 *)(param_2 + 4) = 0x437f0000;
    *(undefined4 *)(param_2 + 0xc) = 0x437f0000;
  }
  else {
    uVar10 = gsEffGetTexColor(param_1,1);
    *(float *)param_2 = (float)(uVar10 >> 0x10 & 0xff);
    *(float *)(param_2 + 4) = (float)(uVar10 >> 8 & 0xff);
    *(float *)(param_2 + 8) = (float)(uVar10 & 0xff);
    *(float *)(param_2 + 0xc) = (float)(uVar10 >> 0x18);
    gsEffColor2CharLightColor(param_2);
    if (param_3 == (m3dCOLOR *)0x0) goto LAB_0050063d;
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    for (ppVar11 = pteMANAGER::FindNextShader(pteManager,(pteSHADER *)0x0);
        ppVar11 != (pteSHADER *)0x0; ppVar11 = pteMANAGER::FindNextShader(pteManager,ppVar11)) {
      if (((byte)ppVar11[4] & 1) != 0) {
        (**(code **)(*(int *)ppVar11 + 0xc))(param_1 + 0x10,0,&local_20);
      }
    }
    bVar1 = ftol();
    bVar2 = ftol();
    bVar3 = ftol();
    bVar4 = ftol();
    *(float *)param_3 = (float)bVar1;
    *(float *)(param_3 + 4) = (float)bVar3;
    *(float *)(param_3 + 8) = (float)bVar4;
    *(float *)(param_3 + 0xc) = (float)bVar2;
    gsEffColor2CharLightColor(param_3);
  }
  if (param_3 != (m3dCOLOR *)0x0) {
    local_14 = *(float *)(param_3 + 0xc) + *(float *)(param_2 + 0xc);
    local_20 = *(float *)param_2 + *(float *)param_3;
    local_1c = *(float *)(param_3 + 4) + *(float *)(param_2 + 4);
    local_18 = *(float *)(param_3 + 8) + *(float *)(param_2 + 8);
  }
LAB_0050063d:
  iVar6 = ftol();
  uVar5 = ftol();
  uVar7 = ftol();
  uVar8 = ftol();
  return uVar8 & 0xff | ((iVar6 << 8 | uVar5 & 0xff) << 8 | uVar7 & 0xff) << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_effect.cpp
   addr: 00500690 */

void __fastcall gsEffColor2CharLightColor(m3dCOLOR *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)CIpow();
  *(float *)param_1 = (float)(fVar1 * (float10)___real_437f0000);
  fVar1 = (float10)CIpow();
  *(float *)(param_1 + 4) = (float)(fVar1 * (float10)___real_437f0000);
  fVar2 = (float10)CIpow();
  fVar1 = (float10)___real_437f0000;
  *(undefined4 *)(param_1 + 0xc) = 0x437f0000;
  *(float *)(param_1 + 8) = (float)(fVar2 * fVar1);
  return;
}




/* from: gs:gs_effect.cpp
   addr: 00500810 */

ulong __fastcall gsEffGetTexColor(cdtINFO *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  objOBJ *this;
  objFACE *poVar5;
  objOBJ *poVar6;
  m3dV *pmVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  objOBJ *poVar11;
  int iVar12;
  uint uVar13;
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
  float local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  txmTEXTURE *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  objOBJ *local_2c;
  int local_28;
  cdtINFO *local_24;
  float local_20;
  float *local_1c;
  objOBJ *local_18;
  objOBJ *local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  if (((((byte)*param_1 & 2) != 0) && (*(int *)(param_1 + 8) != -1)) &&
     (*(int *)(param_1 + 0xc) != -1)) {
    local_30 = param_2;
    local_24 = param_1;
    this = scnSCENE::GetCDTObj(gsScenePtr,param_1);
    local_20 = (float)((uint)*(byte *)(*(int **)(this + 0x28) + 1) * *(int *)(param_1 + 0xc) +
                      **(int **)(this + 0x28));
    local_58 = objOBJ::GetFaceTexRendMtl(this,*(int *)(param_1 + 0xc),param_2);
    iVar12 = 0;
    if (local_58 == (txmTEXTURE *)0x0) {
      return 0xffffffff;
    }
    local_28 = *(int *)(param_1 + 0xc);
    if (((byte)*this & 1) == 0) {
      local_8 = (float *)0x0;
      local_14 = this + 0x3c;
      poVar6 = (objOBJ *)&local_148;
      do {
        local_2c = poVar6;
        poVar5 = objOBJ::GetFace(this,local_28);
        local_1c = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) +
                            (uint)*(ushort *)(poVar5 + (int)local_8 * 2 + 2) * 0xc);
        local_18 = poVar6;
        if (m3dSimdType == 0) {
          if (((uint)local_14 & 0xf) == 0) {
            fVar24 = *local_1c;
            fVar3 = local_1c[1];
            fVar4 = local_1c[2];
            fVar22 = fVar24 * *(float *)local_14 + *(float *)(local_14 + 0x30) +
                     fVar3 * *(float *)(local_14 + 0x10) + fVar4 * *(float *)(local_14 + 0x20);
            fVar23 = fVar24 * *(float *)(local_14 + 4) + *(float *)(local_14 + 0x34) +
                     fVar3 * *(float *)(local_14 + 0x14) + fVar4 * *(float *)(local_14 + 0x24);
            fVar24 = fVar24 * *(float *)(local_14 + 8) + *(float *)(local_14 + 0x38) +
                     fVar3 * *(float *)(local_14 + 0x18) + fVar4 * *(float *)(local_14 + 0x28);
          }
          else {
            fVar24 = *local_1c;
            fVar3 = local_1c[1];
            fVar4 = local_1c[2];
            fVar22 = fVar24 * (float)*(undefined8 *)local_14 +
                     fVar3 * (float)*(undefined8 *)(local_14 + 0x10) +
                     fVar4 * (float)*(undefined8 *)(local_14 + 0x20) +
                     (float)*(undefined8 *)(local_14 + 0x30);
            fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x10) >> 0x20) +
                     fVar4 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x20) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(local_14 + 0x30) >> 0x20);
            fVar24 = fVar24 * (float)*(undefined8 *)(local_14 + 8) +
                     fVar3 * (float)*(undefined8 *)(local_14 + 0x18) +
                     fVar4 * (float)*(undefined8 *)(local_14 + 0x28) +
                     (float)*(undefined8 *)(local_14 + 0x38);
          }
          *(ulonglong *)poVar6 = CONCAT44(fVar23,fVar22);
          *(float *)(poVar6 + 8) = fVar24;
          local_2c = poVar6;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar14 = (undefined4)*(undefined8 *)local_1c;
          uVar17 = CONCAT44(uVar14,uVar14);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)local_1c >> 0x20);
          uVar20 = CONCAT44(uVar14,uVar14);
          uVar21 = CONCAT44(local_1c[2],local_1c[2]);
          uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_14);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_14 + 0x10));
          uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 0x20));
          uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_14 + 0x30));
          uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_14 + 8));
          uVar17 = PackedFloatingADD(uVar16,uVar18);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_14 + 0x18));
          uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 0x28));
          uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(local_14 + 0x38));
          uVar17 = PackedFloatingADD(uVar15,uVar17);
          uVar15 = PackedFloatingADD(uVar16,uVar21);
          *(undefined8 *)poVar6 = uVar17;
          uVar17 = PackedFloatingADD(uVar20,uVar15);
          *(float *)(poVar6 + 8) = (float)uVar17;
          FastExitMediaState();
          local_2c = poVar6;
        }
        else {
          iVar12 = 0;
          local_18 = local_14 + -(int)poVar6;
          do {
            poVar11 = local_18;
            *(float *)poVar6 = 0.0;
            iVar9 = 0;
            poVar11 = poVar11 + (int)poVar6;
            do {
              iVar10 = iVar9 + 1;
              *(float *)poVar6 = local_1c[iVar9] * *(float *)poVar11 + *(float *)poVar6;
              iVar9 = iVar10;
              poVar11 = poVar11 + 0x10;
            } while (iVar10 < 3);
            iVar9 = iVar12 + iVar10 * 4;
            iVar12 = iVar12 + 1;
            *(float *)poVar6 = *(float *)(local_14 + iVar9 * 4) + *(float *)poVar6;
            poVar6 = poVar6 + 4;
            param_1 = local_24;
          } while (iVar12 < 3);
        }
        local_8 = (float *)((int)local_8 + 1);
        poVar6 = local_2c + 0xc;
        local_2c = poVar6;
      } while ((int)local_8 < 3);
    }
    else {
      local_8 = &local_148;
      do {
        pmVar7 = objOBJ::GetFaceVertPtr(this,local_28,iVar12);
        iVar12 = iVar12 + 1;
        *local_8 = *(float *)pmVar7;
        local_8[1] = *(float *)(pmVar7 + 4);
        local_8[2] = *(float *)(pmVar7 + 8);
        local_8 = local_8 + 3;
      } while (iVar12 < 3);
    }
    local_3c = *(float *)(param_1 + 0x10) - local_148;
    local_38 = *(float *)(param_1 + 0x14) - fStack_144;
    local_34 = *(float *)(param_1 + 0x18) - local_140;
    local_54 = local_13c - local_148;
    local_50 = local_138 - fStack_144;
    local_4c = local_134 - local_140;
    local_48 = local_130 - local_148;
    local_44 = local_12c - fStack_144;
    local_40 = local_128 - local_140;
    m3dBasisCoord((m3dV *)&local_54,(m3dV *)&local_48,(m3dV *)&local_3c,&local_10,&local_c);
    iVar10 = objOBJ::GetTCIndIDRendMtl(this,local_30);
    iVar12 = objOBJ::GetTCCoordIDRendMtl(this,local_30);
    iVar9 = *(int *)(*(int *)(this + 0x28) + 0xc + iVar12 * 4);
    iVar12 = (int)local_20 + iVar10 * 6;
    pfVar1 = (float *)(iVar9 + (uint)*(ushort *)((int)local_20 + (iVar10 * 3 + 6) * 2) * 8);
    uVar13 = (uint)*(ushort *)(iVar12 + 10);
    pfVar2 = (float *)(iVar9 + (uint)*(ushort *)(iVar12 + 8) * 8);
    local_24 = (cdtINFO *)
               ((*pfVar1 - *pfVar2) * local_c +
                (*(float *)(iVar9 + uVar13 * 8) - *pfVar2) * local_10 + *pfVar2);
    local_20 = (pfVar1[1] - pfVar2[1]) * local_c +
               (*(float *)(iVar9 + uVar13 * 8 + 4) - pfVar2[1]) * local_10 + pfVar2[1];
    uVar8 = txmTEXTURE::GetColorUV(local_58,(float)local_24,local_20);
    return uVar8;
  }
  return 0;
}

