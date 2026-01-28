
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: m3d:cam_qual.cpp
   addr: 00564160 */

void __thiscall camCAMERA::CalcPOVQual(camCAMERA *this)

{
  float *pfVar1;
  m3dV *pmVar2;
  camCAMERA *pcVar3;
  int iVar4;
  m3dV *pmVar5;
  camCAMERA *pcVar6;
  int iVar7;
  camCAMERA *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 in_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float local_24 [3];
  int local_18;
  float *local_14;
  m3dV *local_10;
  camCAMERA *local_c;
  camCAMERA *local_8;
  
  fVar19 = *(float *)(this + 0x134) * ___real_3f000000 * *(float *)(this + 0x134) * ___real_3f000000
           + *(float *)(this + 0x138) * ___real_3f000000 *
             *(float *)(this + 0x138) * ___real_3f000000 +
             *(float *)(this + 0x80) * *(float *)(this + 0x80);
  if (m3dSimdType == 0) {
    fVar19 = fVar19 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar23 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
    fVar21 = auVar23._0_4_;
    local_8 = (camCAMERA *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar21 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar19 * fVar21 * fVar21) * fVar19);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar10 = (ulonglong)(uint)fVar19;
    uVar11 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar10);
    uVar12 = PackedFloatingMUL(uVar11,uVar11);
    uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar10);
    uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
    uVar11 = PackedFloatingMUL(uVar11,uVar10);
    local_8 = (camCAMERA *)uVar11;
    FastExitMediaState();
  }
  else {
    local_8 = (camCAMERA *)SQRT(fVar19);
  }
  *(camCAMERA **)(this + 0x16c) = local_8;
  local_c = this;
  GetOrigin(this,(m3dV *)(this + 0x1f0));
  local_8 = this + 0x90;
  local_14 = local_24;
  pcVar8 = this + 0x184;
  iVar7 = -0x184;
  local_18 = 4;
  do {
    local_24[0] = *(float *)(local_8 + -4);
    local_24[2] = (float)*(undefined4 *)(this + 0x80);
    local_24[1] = (float)*(undefined4 *)local_8;
    local_10 = (m3dV *)pcVar8;
    if (m3dSimdType == 0) {
      if (((uint)local_c & 0xf) == 0) {
        fVar19 = *local_14;
        fVar21 = local_14[1];
        fVar22 = local_14[2];
        fVar18 = fVar19 * *(float *)local_c + fVar21 * *(float *)(local_c + 0x10) +
                 fVar22 * *(float *)(local_c + 0x20);
        fVar20 = fVar19 * *(float *)(local_c + 4) + fVar21 * *(float *)(local_c + 0x14) +
                 fVar22 * *(float *)(local_c + 0x24);
        fVar19 = fVar19 * *(float *)(local_c + 8) + fVar21 * *(float *)(local_c + 0x18) +
                 fVar22 * *(float *)(local_c + 0x28);
      }
      else {
        fVar19 = *local_14;
        fVar21 = local_14[1];
        fVar22 = local_14[2];
        fVar18 = fVar19 * (float)*(undefined8 *)local_c +
                 fVar21 * (float)*(undefined8 *)(local_c + 0x10) +
                 fVar22 * (float)*(undefined8 *)(local_c + 0x20);
        fVar20 = fVar19 * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
                 fVar21 * (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) +
                 fVar22 * (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20);
        fVar19 = fVar19 * (float)*(undefined8 *)(local_c + 8) +
                 fVar21 * (float)*(undefined8 *)(local_c + 0x18) +
                 fVar22 * (float)*(undefined8 *)(local_c + 0x28);
      }
      *(ulonglong *)pcVar8 = CONCAT44(fVar20,fVar18);
      *(float *)((m3dV *)pcVar8 + 8) = fVar19;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (undefined4)*(undefined8 *)local_14;
      uVar11 = CONCAT44(uVar9,uVar9);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)local_14 >> 0x20);
      uVar14 = CONCAT44(uVar9,uVar9);
      uVar17 = CONCAT44(local_14[2],local_14[2]);
      uVar12 = PackedFloatingMUL(uVar11,*(undefined8 *)local_c);
      uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_c + 0x10));
      uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_c + 0x20));
      uVar15 = PackedFloatingMUL(uVar11,*(undefined8 *)(local_c + 8));
      uVar11 = PackedFloatingADD(uVar16,uVar13);
      uVar14 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_c + 0x18));
      uVar16 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_c + 0x28));
      uVar11 = PackedFloatingADD(uVar12,uVar11);
      uVar12 = PackedFloatingADD(uVar14,uVar16);
      *(undefined8 *)pcVar8 = uVar11;
      uVar11 = PackedFloatingADD(uVar15,uVar12);
      *(int *)((m3dV *)pcVar8 + 8) = (int)uVar11;
      FastExitMediaState();
    }
    else {
      local_10 = (m3dV *)0x3;
      pmVar2 = (m3dV *)pcVar8;
      do {
        *(float *)pmVar2 = 0.0;
        iVar4 = 0;
        pmVar5 = pmVar2 + iVar7;
        do {
          pfVar1 = local_24 + iVar4;
          fVar19 = *(float *)pmVar5;
          iVar4 = iVar4 + 1;
          pmVar5 = pmVar5 + 0x10;
          *(float *)pmVar2 = *pfVar1 * fVar19 + *(float *)pmVar2;
        } while (iVar4 < 3);
        pmVar2 = pmVar2 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != (m3dV *)0x0);
    }
    m3dNormalize((m3dV *)pcVar8);
    local_8 = local_8 + 8;
    pcVar8 = (camCAMERA *)((m3dV *)pcVar8 + 0xc);
    iVar7 = iVar7 + -0xc;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  iVar7 = 3;
  pcVar8 = this + 0x198;
  do {
    iVar7 = iVar7 + -1;
    *(float *)(pcVar8 + 0x1c) =
         *(float *)(pcVar8 + -0x10) * *(float *)pcVar8 -
         *(float *)(pcVar8 + -0xc) * *(float *)(pcVar8 + -4);
    *(float *)(pcVar8 + 0x20) =
         *(float *)(pcVar8 + -0xc) * *(float *)(pcVar8 + -8) -
         *(float *)pcVar8 * *(float *)(pcVar8 + -0x14);
    *(float *)(pcVar8 + 0x24) =
         *(float *)(pcVar8 + -4) * *(float *)(pcVar8 + -0x14) -
         *(float *)(pcVar8 + -0x10) * *(float *)(pcVar8 + -8);
    pcVar8 = pcVar8 + 0xc;
  } while (iVar7 != 0);
  pcVar8 = this + 0x1e4;
  local_14 = local_24;
  local_24[1] = 0.0;
  local_24[0] = 0.0;
  local_24[2] = -1.0;
  *(float *)(this + 0x1d8) =
       *(float *)(this + 0x18c) * *(float *)(this + 0x1ac) -
       *(float *)(this + 0x188) * *(float *)(this + 0x1b0);
  *(float *)(this + 0x1dc) =
       *(float *)(this + 0x1b0) * *(float *)(this + 0x184) -
       *(float *)(this + 0x18c) * *(float *)(this + 0x1a8);
  *(float *)(this + 0x1e0) =
       *(float *)(this + 0x188) * *(float *)(this + 0x1a8) -
       *(float *)(this + 0x1ac) * *(float *)(this + 0x184);
  if (m3dSimdType == 0) {
    if (((uint)local_c & 0xf) == 0) {
      fVar19 = *(float *)local_c * 0.0 + *(float *)(local_c + 0x10) * 0.0 +
               *(float *)(local_c + 0x20) * -1.0;
      fVar21 = *(float *)(local_c + 4) * 0.0 + *(float *)(local_c + 0x14) * 0.0 +
               *(float *)(local_c + 0x24) * -1.0;
      fVar22 = *(float *)(local_c + 8) * 0.0 + *(float *)(local_c + 0x18) * 0.0 +
               *(float *)(local_c + 0x28) * -1.0;
    }
    else {
      fVar19 = (float)*(undefined8 *)local_c * 0.0 + (float)*(undefined8 *)(local_c + 0x10) * 0.0 +
               (float)*(undefined8 *)(local_c + 0x20) * -1.0;
      fVar21 = (float)((ulonglong)*(undefined8 *)local_c >> 0x20) * 0.0 +
               (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) * 0.0 +
               (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20) * -1.0;
      fVar22 = (float)*(undefined8 *)(local_c + 8) * 0.0 +
               (float)*(undefined8 *)(local_c + 0x18) * 0.0 +
               (float)*(undefined8 *)(local_c + 0x28) * -1.0;
    }
    *(ulonglong *)pcVar8 = CONCAT44(fVar21,fVar19);
    *(float *)(this + 0x1ec) = fVar22;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar11 = PackedFloatingMUL(0,*(undefined8 *)local_c);
    uVar12 = PackedFloatingMUL(0,*(undefined8 *)(local_c + 0x10));
    uVar14 = PackedFloatingMUL(0xbf800000bf800000,*(undefined8 *)(local_c + 0x20));
    uVar16 = PackedFloatingMUL(0,*(undefined8 *)(local_c + 8));
    uVar12 = PackedFloatingADD(uVar12,uVar14);
    uVar14 = PackedFloatingMUL(0,*(undefined8 *)(local_c + 0x18));
    uVar17 = PackedFloatingMUL(0xbf800000bf800000,*(undefined8 *)(local_c + 0x28));
    uVar11 = PackedFloatingADD(uVar11,uVar12);
    uVar12 = PackedFloatingADD(uVar14,uVar17);
    *(undefined8 *)pcVar8 = uVar11;
    uVar11 = PackedFloatingADD(uVar16,uVar12);
    *(int *)(this + 0x1ec) = (int)uVar11;
    FastExitMediaState();
  }
  else {
    local_18 = 3;
    pcVar3 = pcVar8;
    do {
      *(float *)pcVar3 = 0.0;
      iVar7 = 0;
      pcVar6 = pcVar3 + ((int)this - (int)pcVar8);
      do {
        pfVar1 = local_24 + iVar7;
        fVar19 = *(float *)pcVar6;
        iVar7 = iVar7 + 1;
        pcVar6 = pcVar6 + 0x10;
        *(float *)pcVar3 = *pfVar1 * fVar19 + *(float *)pcVar3;
      } while (iVar7 < 3);
      pcVar3 = pcVar3 + 4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(float *)(this + 0x180) =
       (*(float *)pcVar8 * *(float *)(this + 0x184) +
       *(float *)(this + 0x188) * *(float *)(this + 0x1e8) +
       *(float *)(this + 0x18c) * *(float *)(this + 0x1ec)) * *(float *)(this + 0x16c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 00564650 */

int __thiscall camCAMERA::QualBoxPOV(camCAMERA *this,m3dBOX *param_1)

{
  camPOV_QUAL *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  m3dBOX *pmVar7;
  m3dV *pmVar8;
  camCAMERA *pcVar9;
  float *pfVar10;
  int local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar7 = (m3dBOX *)0x0;
  DAT_00963a10 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 8)) * ___real_3f000000;
  pcVar1 = (camPOV_QUAL *)(this + 0x16c);
  iVar6 = 4;
  iVar5 = 0x48;
  DAT_00963a20 = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc)) * ___real_3f000000;
  _DAT_00963a30 = (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10)) * ___real_3f000000;
  local_c = (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x14)) * ___real_3f000000;
  local_8 = (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18)) * ___real_3f000000;
  local_4 = (*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x1c)) * ___real_3f000000;
  do {
    local_18 = *(float *)(pcVar1 + iVar5);
    local_14 = *(float *)(pcVar1 + iVar5 + 4);
    local_10 = *(float *)(pcVar1 + iVar5 + 8);
    fVar2 = local_14 * *(float *)(this + 500) +
            local_18 * *(float *)(this + 0x1f0) + local_10 * *(float *)(this + 0x1f8) +
            *(float *)(pcVar1 + iVar6);
    fVar3 = local_18 * local_c + local_14 * local_8 + local_10 * local_4;
    fVar4 = ABS(_DAT_00963a30 * local_10) + ABS(DAT_00963a20 * local_14) +
            ABS(DAT_00963a10 * local_18);
    if (fVar2 < fVar3 - fVar4) {
      return 1;
    }
    if (fVar4 + fVar3 < fVar2) {
      pmVar7 = pmVar7 + 1;
    }
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + 4;
  } while (iVar5 < 0x84);
  if (pmVar7 != (m3dBOX *)0x5) {
    pmVar8 = (m3dV *)&DAT_00963a10;
    param_1 = pmVar7;
    do {
      iVar5 = _camSeparateBBoxPOV(pcVar1,pmVar8,(m3dV *)&local_c,(m3dV *)&DAT_00963a10,
                                  (m3dV *)(this + 0x1f0),(m3dV *)(this + 0x184),*(float *)pcVar1);
      if (iVar5 == 1) {
        return 1;
      }
      if (iVar5 == -1) {
        param_1 = param_1 + 1;
      }
      pmVar8 = pmVar8 + 0xc;
    } while ((int)pmVar8 < 0x963a34);
    pfVar10 = (float *)&DAT_00963a14;
    do {
      local_20 = 0;
      pcVar9 = this + 0x1b8;
      do {
        local_18 = *(float *)(pcVar9 + 4) * *pfVar10 - pfVar10[1] * *(float *)pcVar9;
        local_14 = pfVar10[1] * *(float *)(pcVar9 + -4) - *(float *)(pcVar9 + 4) * pfVar10[-1];
        local_10 = *(float *)pcVar9 * pfVar10[-1] - *(float *)(pcVar9 + -4) * *pfVar10;
        iVar5 = _camSeparateBBoxPOV(pcVar1,(m3dV *)&local_18,(m3dV *)&local_c,(m3dV *)&DAT_00963a10,
                                    (m3dV *)(this + 0x1f0),(m3dV *)(this + 0x184),*(float *)pcVar1);
        if (iVar5 == 1) {
          return 1;
        }
        if (iVar5 == -1) {
          param_1 = param_1 + 1;
        }
        pcVar9 = pcVar9 + 0xc;
        local_20 = local_20 + 1;
      } while (local_20 < 5);
      pfVar10 = pfVar10 + 3;
    } while ((int)pfVar10 < 0x963a38);
    return (param_1 != (m3dBOX *)0x17) - 1;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 005648E0 */

int __fastcall
_camSeparateBBoxPOV(camPOV_QUAL *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,
                   m3dV *param_6,float param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_14;
  
  local_14 = *(float *)param_2 * *(float *)param_2 +
             *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
             *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  if (m3dSimdType == 0) {
    local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
    fVar10 = auVar11._0_4_;
    local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar10 * fVar10) * local_14
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)local_14;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_14 = (float)uVar8;
    FastExitMediaState();
  }
  else {
    local_14 = SQRT(local_14);
  }
  local_14 = (float)(uint)(ABS(local_14) < ___real_3a83126f);
  if ((float)(int)local_14 != ___real_00000000) {
    return -1;
  }
  fVar10 = *(float *)param_2 * *(float *)param_6 +
           *(float *)(param_6 + 4) * *(float *)(param_2 + 4) +
           *(float *)(param_6 + 8) * *(float *)(param_2 + 8);
  bVar1 = _DAT_005de648 < fVar10;
  fVar3 = *(float *)(param_6 + 0xc) * *(float *)param_2 +
          *(float *)(param_6 + 0x10) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x14) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar3 != bVar1) {
    return -1;
  }
  fVar5 = *(float *)param_2 * *(float *)(param_6 + 0x18) +
          *(float *)(param_6 + 0x1c) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x20) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar5 != bVar1) {
    return -1;
  }
  fVar4 = *(float *)param_2 * *(float *)(param_6 + 0x24) +
          *(float *)(param_6 + 0x28) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x2c) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar4 != bVar1) {
    return -1;
  }
  fVar2 = *(float *)param_2 * *(float *)param_5 +
          *(float *)(param_5 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_5 + 8) * *(float *)(param_2 + 8);
  if (fVar10 <= _DAT_005de648) {
    if (fVar4 < fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 < fVar3) {
      fVar4 = fVar3;
    }
    if (fVar4 < fVar10) {
      fVar4 = fVar10;
    }
    fVar2 = fVar4 * param_7 + fVar2;
    fVar3 = *(float *)param_2 * *(float *)param_3 +
            *(float *)(param_3 + 4) * *(float *)(param_2 + 4) +
            *(float *)(param_3 + 8) * *(float *)(param_2 + 8);
    fVar10 = ABS(*(float *)(param_4 + 0x20) * *(float *)(param_2 + 8)) +
             ABS(*(float *)(param_4 + 0x10) * *(float *)(param_2 + 4)) +
             ABS(*(float *)param_2 * *(float *)param_4);
    if (fVar2 < fVar3 - fVar10) {
      return 1;
    }
    fVar10 = fVar10 + fVar3;
    uVar6 = (ushort)(fVar2 < fVar10) << 8 | (ushort)(fVar2 == fVar10) << 0xe;
  }
  else {
    if (fVar5 < fVar4) {
      fVar4 = fVar5;
    }
    if (fVar3 < fVar4) {
      fVar4 = fVar3;
    }
    if (fVar10 < fVar4) {
      fVar4 = fVar10;
    }
    fVar2 = fVar4 * param_7 + fVar2;
    fVar10 = *(float *)param_2 * *(float *)param_3 +
             *(float *)(param_3 + 4) * *(float *)(param_2 + 4) +
             *(float *)(param_3 + 8) * *(float *)(param_2 + 8);
    fVar3 = ABS(*(float *)(param_4 + 0x20) * *(float *)(param_2 + 8)) +
            ABS(*(float *)(param_4 + 0x10) * *(float *)(param_2 + 4)) +
            ABS(*(float *)param_2 * *(float *)param_4);
    if (fVar3 + fVar10 < fVar2) {
      return 1;
    }
    fVar10 = fVar10 - fVar3;
    uVar6 = (ushort)(fVar10 < fVar2) << 8 | (ushort)(fVar10 == fVar2) << 0xe;
  }
  if (uVar6 == 0) {
    return -1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 00564CA0 */

int __thiscall camCAMERA::QualOBBPOV(camCAMERA *this,m3dOBB *param_1)

{
  camPOV_QUAL *pcVar1;
  int iVar2;
  int iVar3;
  m3dV *pmVar4;
  camCAMERA *pcVar5;
  m3dOBB *pmVar6;
  float *pfVar7;
  int local_4c;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24 = *(float *)(param_1 + 0x14) * ___real_3f000000;
  pmVar6 = (m3dOBB *)0x0;
  iVar3 = 0;
  local_20 = *(float *)(param_1 + 0x18) * ___real_3f000000;
  pcVar1 = (camPOV_QUAL *)(this + 0x16c);
  local_1c = *(float *)(param_1 + 0x1c) * ___real_3f000000;
  local_18 = *(float *)(param_1 + 0x20) * ___real_3f000000;
  local_14 = *(float *)(param_1 + 0x24) * ___real_3f000000;
  local_10 = *(float *)(param_1 + 0x28) * ___real_3f000000;
  local_c = *(float *)(param_1 + 0x2c) * ___real_3f000000;
  local_8 = *(float *)(param_1 + 0x30) * ___real_3f000000;
  local_4 = *(float *)(param_1 + 0x34) * ___real_3f000000;
  local_3c = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x14))
             * ___real_3f000000 + *(float *)(param_1 + 8);
  local_38 = (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x18))
             * ___real_3f000000 + *(float *)(param_1 + 0xc);
  local_34 = (*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1c))
             * ___real_3f000000 + *(float *)(param_1 + 0x10);
  do {
    iVar2 = _camSeparateOBBPOV_AxisPOV(pcVar1,iVar3,(m3dV *)&local_3c,(m3dV *)&local_24);
    if (iVar2 == 1) {
      return 1;
    }
    if (iVar2 == -1) {
      pmVar6 = pmVar6 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if (pmVar6 != (m3dOBB *)0x5) {
    local_4c = 0;
    pmVar4 = (m3dV *)&local_24;
    param_1 = pmVar6;
    do {
      iVar3 = _camSeparateOBBPOV(pcVar1,pmVar4,(m3dV *)&local_3c,(m3dV *)&local_24,
                                 (m3dV *)(this + 0x1f0),(m3dV *)(this + 0x184),*(float *)pcVar1);
      if (iVar3 == 1) {
        return 1;
      }
      if (iVar3 == -1) {
        param_1 = param_1 + 1;
      }
      pmVar4 = pmVar4 + 0xc;
      local_4c = local_4c + 1;
    } while (local_4c < 3);
    local_4c = 0;
    pfVar7 = &local_20;
    do {
      iVar3 = 0;
      pcVar5 = this + 0x1b8;
      do {
        local_30 = *pfVar7 * *(float *)(pcVar5 + 4) - pfVar7[1] * *(float *)pcVar5;
        local_2c = pfVar7[1] * *(float *)(pcVar5 + -4) - pfVar7[-1] * *(float *)(pcVar5 + 4);
        local_28 = pfVar7[-1] * *(float *)pcVar5 - *pfVar7 * *(float *)(pcVar5 + -4);
        iVar2 = _camSeparateOBBPOV(pcVar1,(m3dV *)&local_30,(m3dV *)&local_3c,(m3dV *)&local_24,
                                   (m3dV *)(this + 0x1f0),(m3dV *)(this + 0x184),*(float *)pcVar1);
        if (iVar2 == 1) {
          return 1;
        }
        if (iVar2 == -1) {
          param_1 = param_1 + 1;
        }
        iVar3 = iVar3 + 1;
        pcVar5 = pcVar5 + 0xc;
      } while (iVar3 < 5);
      pfVar7 = pfVar7 + 3;
      local_4c = local_4c + 1;
    } while (local_4c < 3);
    return (param_1 != (m3dOBB *)0x17) - 1;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 00564EE0 */

int __fastcall
_camSeparateOBBPOV(camPOV_QUAL *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,
                  m3dV *param_6,float param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_14;
  
  local_14 = *(float *)param_2 * *(float *)param_2 +
             *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
             *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  if (m3dSimdType == 0) {
    local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
    fVar10 = auVar11._0_4_;
    local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar10 * fVar10) * local_14
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)local_14;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_14 = (float)uVar8;
    FastExitMediaState();
  }
  else {
    local_14 = SQRT(local_14);
  }
  local_14 = (float)(uint)(ABS(local_14) < ___real_3a83126f);
  if ((float)(int)local_14 != ___real_00000000) {
    return -1;
  }
  fVar10 = *(float *)param_2 * *(float *)param_6 +
           *(float *)(param_6 + 4) * *(float *)(param_2 + 4) +
           *(float *)(param_6 + 8) * *(float *)(param_2 + 8);
  bVar1 = _DAT_005de648 < fVar10;
  fVar3 = *(float *)(param_6 + 0xc) * *(float *)param_2 +
          *(float *)(param_6 + 0x10) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x14) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar3 != bVar1) {
    return -1;
  }
  fVar5 = *(float *)param_2 * *(float *)(param_6 + 0x18) +
          *(float *)(param_6 + 0x1c) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x20) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar5 != bVar1) {
    return -1;
  }
  fVar4 = *(float *)param_2 * *(float *)(param_6 + 0x24) +
          *(float *)(param_6 + 0x28) * *(float *)(param_2 + 4) +
          *(float *)(param_6 + 0x2c) * *(float *)(param_2 + 8);
  if (_DAT_005de648 < fVar4 != bVar1) {
    return -1;
  }
  fVar2 = *(float *)param_2 * *(float *)param_5 +
          *(float *)(param_5 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_5 + 8) * *(float *)(param_2 + 8);
  if (fVar10 <= _DAT_005de648) {
    if (fVar4 < fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 < fVar3) {
      fVar4 = fVar3;
    }
    if (fVar4 < fVar10) {
      fVar4 = fVar10;
    }
    fVar2 = fVar4 * param_7 + fVar2;
    fVar3 = *(float *)param_2 * *(float *)param_3 +
            *(float *)(param_3 + 4) * *(float *)(param_2 + 4) +
            *(float *)(param_3 + 8) * *(float *)(param_2 + 8);
    fVar10 = ABS(*(float *)(param_4 + 0x18) * *(float *)param_2 +
                 *(float *)(param_4 + 0x1c) * *(float *)(param_2 + 4) +
                 *(float *)(param_4 + 0x20) * *(float *)(param_2 + 8)) +
             ABS(*(float *)param_2 * *(float *)(param_4 + 0xc) +
                 *(float *)(param_4 + 0x10) * *(float *)(param_2 + 4) +
                 *(float *)(param_4 + 0x14) * *(float *)(param_2 + 8)) +
             ABS(*(float *)param_2 * *(float *)param_4 +
                 *(float *)(param_4 + 4) * *(float *)(param_2 + 4) +
                 *(float *)(param_4 + 8) * *(float *)(param_2 + 8));
    if (fVar2 < fVar3 - fVar10) {
      return 1;
    }
    fVar10 = fVar10 + fVar3;
    uVar6 = (ushort)(fVar2 < fVar10) << 8 | (ushort)(fVar2 == fVar10) << 0xe;
  }
  else {
    if (fVar5 < fVar4) {
      fVar4 = fVar5;
    }
    if (fVar3 < fVar4) {
      fVar4 = fVar3;
    }
    if (fVar10 < fVar4) {
      fVar4 = fVar10;
    }
    fVar2 = fVar4 * param_7 + fVar2;
    fVar10 = *(float *)param_2 * *(float *)param_3 +
             *(float *)(param_3 + 4) * *(float *)(param_2 + 4) +
             *(float *)(param_3 + 8) * *(float *)(param_2 + 8);
    fVar3 = ABS(*(float *)param_2 * *(float *)(param_4 + 0x18) +
                *(float *)(param_4 + 0x1c) * *(float *)(param_2 + 4) +
                *(float *)(param_4 + 0x20) * *(float *)(param_2 + 8)) +
            ABS(*(float *)param_2 * *(float *)(param_4 + 0xc) +
                *(float *)(param_4 + 0x10) * *(float *)(param_2 + 4) +
                *(float *)(param_4 + 0x14) * *(float *)(param_2 + 8)) +
            ABS(*(float *)param_2 * *(float *)param_4 +
                *(float *)(param_4 + 4) * *(float *)(param_2 + 4) +
                *(float *)(param_4 + 8) * *(float *)(param_2 + 8));
    if (fVar3 + fVar10 < fVar2) {
      return 1;
    }
    fVar10 = fVar10 - fVar3;
    uVar6 = (ushort)(fVar10 < fVar2) << 8 | (ushort)(fVar10 == fVar2) << 0xe;
  }
  if (uVar6 == 0) {
    return -1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 00565310 */

int __fastcall
_camSeparateOBBPOV_AxisPOV(camPOV_QUAL *param_1,int param_2,m3dV *param_3,m3dV *param_4)

{
  camPOV_QUAL *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 in_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_10;
  
  pcVar1 = param_1 + (param_2 * 3 + 0x12) * 4;
  fVar2 = *(float *)pcVar1;
  fVar3 = *(float *)(pcVar1 + 4);
  fVar4 = *(float *)(pcVar1 + 8);
  local_10 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (m3dSimdType == 0) {
    local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
    fVar9 = auVar10._0_4_;
    local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar9 * fVar9) * local_10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)local_10;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar6);
    local_10 = (float)uVar7;
    FastExitMediaState();
  }
  else {
    local_10 = SQRT(local_10);
  }
  local_10 = (float)(uint)(ABS(local_10) < ___real_3a83126f);
  if ((float)(int)local_10 != ___real_00000000) {
    return -1;
  }
  fVar9 = fVar2 * *(float *)(param_1 + 0x84) +
          fVar3 * *(float *)(param_1 + 0x88) +
          fVar4 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + param_2 * 4 + 4);
  fVar5 = fVar2 * *(float *)param_3 +
          fVar3 * *(float *)(param_3 + 4) + fVar4 * *(float *)(param_3 + 8);
  fVar2 = ABS(fVar2 * *(float *)(param_4 + 0x18) +
              fVar3 * *(float *)(param_4 + 0x1c) + fVar4 * *(float *)(param_4 + 0x20)) +
          ABS(fVar2 * *(float *)(param_4 + 0xc) +
              fVar3 * *(float *)(param_4 + 0x10) + fVar4 * *(float *)(param_4 + 0x14)) +
          ABS(fVar2 * *(float *)param_4 +
              fVar3 * *(float *)(param_4 + 4) + fVar4 * *(float *)(param_4 + 8));
  if (fVar9 < fVar5 - fVar2) {
    return 1;
  }
  if (fVar2 + fVar5 < fVar9) {
    return -1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 00565540 */

int __thiscall camCAMERA::QualPrismPOV(camCAMERA *this,m3dPRISM *param_1)

{
  camPOV_QUAL *pcVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  m3dV *pmVar5;
  camCAMERA *pcVar6;
  int local_b0;
  int local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  m3dV *local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  float local_14;
  float local_10;
  
  m3dPRISM::GetVertices(param_1,(m3dV *)&local_60);
  iVar4 = 3;
  local_90 = local_54 - local_60;
  local_8c = local_50 - local_5c;
  local_88 = local_4c - local_58;
  local_84 = local_48 - local_54;
  local_80 = local_44 - local_50;
  local_7c = local_40 - local_4c;
  local_78 = local_30 - local_60;
  local_74 = local_2c - local_5c;
  local_70 = local_28 - local_58;
  pfVar2 = &local_88;
  do {
    iVar4 = iVar4 + -1;
    pfVar2[-2] = pfVar2[-2] * ___real_3f000000;
    pfVar2[-1] = pfVar2[-1] * ___real_3f000000;
    *pfVar2 = *pfVar2 * ___real_3f000000;
    pfVar2 = pfVar2 + 3;
  } while (iVar4 != 0);
  local_b0 = 0;
  iVar4 = 0;
  pcVar1 = (camPOV_QUAL *)(this + 0x16c);
  local_a0 = (local_18 + local_60) * ___real_3f000000;
  local_9c = (local_14 + local_5c) * ___real_3f000000;
  local_98 = (local_10 + local_58) * ___real_3f000000;
  do {
    iVar3 = _camSeparateOBBPOV_AxisPOV(pcVar1,iVar4,(m3dV *)&local_a0,(m3dV *)&local_90);
    if (iVar3 == 1) {
      return 1;
    }
    if (iVar3 == -1) {
      local_b0 = local_b0 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  if (local_b0 != 5) {
    iVar4 = 0;
    pmVar5 = (m3dV *)&local_90;
    local_94 = (m3dV *)(this + 0x184);
    do {
      iVar3 = _camSeparateOBBPOV(pcVar1,pmVar5,(m3dV *)&local_a0,(m3dV *)&local_90,
                                 (m3dV *)(this + 0x1f0),(m3dV *)(this + 0x184),*(float *)pcVar1);
      if (iVar3 == 1) {
        return 1;
      }
      if (iVar3 == -1) {
        local_b0 = local_b0 + 1;
      }
      iVar4 = iVar4 + 1;
      pmVar5 = (m3dV *)(extraout_EDX + 0xc);
    } while (iVar4 < 3);
    local_a8 = 0;
    pfVar2 = &local_8c;
    do {
      iVar4 = 0;
      pcVar6 = this + 0x1b8;
      do {
        local_6c = *(float *)(pcVar6 + 4) * *pfVar2 - pfVar2[1] * *(float *)pcVar6;
        local_68 = pfVar2[1] * *(float *)(pcVar6 + -4) - pfVar2[-1] * *(float *)(pcVar6 + 4);
        local_64 = pfVar2[-1] * *(float *)pcVar6 - *(float *)(pcVar6 + -4) * *pfVar2;
        iVar3 = _camSeparateOBBPOV(pcVar1,(m3dV *)&local_6c,(m3dV *)&local_a0,(m3dV *)&local_90,
                                   (m3dV *)(this + 0x1f0),local_94,*(float *)pcVar1);
        if (iVar3 == 1) {
          return 1;
        }
        if (iVar3 == -1) {
          local_b0 = local_b0 + 1;
        }
        iVar4 = iVar4 + 1;
        pcVar6 = pcVar6 + 0xc;
      } while (iVar4 < 5);
      pfVar2 = pfVar2 + 3;
      local_a8 = local_a8 + 1;
    } while (local_a8 < 3);
    return (local_b0 != 0x17) - 1;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_qual.cpp
   addr: 005657C0 */

int __thiscall camCAMERA::QualSpherePOV(camCAMERA *this,m3dSPHERE *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_17c;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  m2dPOLY local_a4 [164];
  
  fVar1 = *(float *)(param_1 + 0x14);
  TransformPoint(this,(m3dV *)(param_1 + 8),(m3dV *)&local_174);
  if (local_16c + fVar1 < *(float *)(this + 0x80)) {
    return 1;
  }
  if (local_16c - fVar1 < _DAT_005de648 * ___real_42c80000 + *(float *)(this + 0x80)) {
    return 0;
  }
  local_17c = local_16c * local_16c + local_174 * local_174 + local_170 * local_170;
  if (m3dSimdType == 0) {
    local_17c = local_17c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)local_17c),ZEXT416((uint)local_17c));
    fVar7 = auVar8._0_4_;
    local_17c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_17c * fVar7 * fVar7) *
                local_17c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)local_17c;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    local_17c = (float)uVar5;
    FastExitMediaState();
  }
  else {
    local_17c = SQRT(local_17c);
  }
  fVar2 = ___real_3f800000 - (fVar1 / local_17c) * (fVar1 / local_17c);
  m3dNormalize((m3dV *)&local_174);
  fVar1 = *(float *)(this + 0x80);
  local_14c = local_174;
  local_158 = local_170;
  fVar7 = (local_170 * local_170 + local_174 * local_174) - fVar2;
  local_154 = fVar1 * local_16c + fVar1 * local_16c;
  fVar2 = local_16c * local_16c - fVar2;
  local_150 = fVar7;
  m3dSolveQuadraticEq((float)&local_160,(float)&local_164,fVar7,(float *)(local_154 * local_170),
                      (float *)((local_174 * local_174 + fVar2) * fVar1 * fVar1));
  m3dSolveQuadraticEq((float)&local_168,(float)&local_15c,fVar7,(float *)(local_154 * local_14c),
                      (float *)((local_158 * local_158 + fVar2) * fVar1 * fVar1));
  local_144 = local_15c;
  local_140 = local_160;
  local_13c = local_15c;
  local_138 = local_164;
  local_134 = local_168;
  local_130 = local_164;
  local_148 = 4;
  local_12c = local_168;
  local_128 = local_160;
  iVar3 = m2dClipPolyRect((m2dPOLY *)&local_148,(m2dPOLY *)(this + 0x88),local_a4);
  return iVar3;
}

