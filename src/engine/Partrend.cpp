
/* from: engine:Partrend.cpp
   addr: 004C51E0 */

void __fastcall partUpdate(camCAMERA *param_1,float param_2)

{
  partEMITTER_PHYS **pppVar1;
  partEMITTER_PHYS *ppVar2;
  partEMITTER_PHYS ***ppppVar3;
  partEMITTER_PHYS ***ppppVar4;
  
  ppppVar4 = &_partEmitList;
  do {
    pppVar1 = *ppppVar4;
    if (pppVar1 != (partEMITTER_PHYS **)0x0) {
      if (((((uint)pppVar1[2] & 0x40) != 0) || (((uint)pppVar1[1] & 0x8000000) == 0)) &&
         (((uint)pppVar1[1] & 0x800) == 0)) {
        (**(code **)(*pppVar1 + 0xc))(param_1);
      }
      (*ppppVar4)[2] = (partEMITTER_PHYS *)((uint)(*ppppVar4)[2] & 0xffffffbf);
      pppVar1 = *ppppVar4;
      if (((pppVar1[0x12] == (partEMITTER_PHYS *)0x0) && (((uint)pppVar1[2] & 1) == 0)) &&
         (((uint)pppVar1[1] & 0x200) != 0)) {
        pppVar1[2] = (partEMITTER_PHYS *)((uint)pppVar1[2] | 0x20);
      }
      if (((uint)(*ppppVar4)[2] & 0x20) != 0) {
        ppVar2 = (*ppppVar4)[0x97];
        if (ppVar2 != (partEMITTER_PHYS *)0x0) {
          *(uint *)(ppVar2 + 4) = *(uint *)(ppVar2 + 4) & 0xfffff7ff;
        }
        ppppVar3 = &_partEmitList;
        do {
          pppVar1 = *ppppVar3;
          if ((pppVar1 != (partEMITTER_PHYS **)0x0) &&
             (pppVar1[0x97] == (partEMITTER_PHYS *)*ppppVar4)) {
            pppVar1[0x97] = (partEMITTER_PHYS *)0x0;
          }
          ppppVar3 = ppppVar3 + 1;
        } while ((int)ppppVar3 < 0x8b78f0);
        if (*ppppVar4 != (partEMITTER_PHYS **)0x0) {
          (**(code **)**ppppVar4)(1);
        }
      }
    }
    ppppVar4 = ppppVar4 + 1;
  } while ((int)ppppVar4 < 0x8b78f0);
  return;
}




/* from: engine:Partrend.cpp
   addr: 004C52C0 */

void __fastcall partDestroyEmitters(void)

{
  partEMITTER_PHYS **pppVar1;
  partEMITTER_PHYS ***ppppVar2;
  
  ppppVar2 = &_partEmitList;
  do {
    pppVar1 = *ppppVar2;
    if (((pppVar1 != (partEMITTER_PHYS **)0x0) && (((uint)pppVar1[1] & 0x200) != 0)) &&
       (pppVar1 != (partEMITTER_PHYS **)0x0)) {
      (**(code **)*pppVar1)(1);
    }
    ppppVar2 = ppppVar2 + 1;
  } while ((int)ppppVar2 < 0x8b78f0);
  return;
}




/* from: engine:Partrend.cpp
   addr: 004C52F0 */

int __fastcall partGetNEmit(void)

{
  int iVar1;
  partEMITTER_PHYS ***ppppVar2;
  
  iVar1 = 0;
  ppppVar2 = &_partEmitList;
  do {
    if (*ppppVar2 != (partEMITTER_PHYS **)0x0) {
      iVar1 = iVar1 + 1;
    }
    ppppVar2 = ppppVar2 + 1;
  } while ((int)ppppVar2 < 0x8b78f0);
  return iVar1;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Partrend.cpp
   addr: 004C5310 */

void __fastcall partRender(camCAMERA *param_1,int param_2,partEMITTER_VIS *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  partEMITTER_PHYS **pppVar4;
  bool bVar5;
  d3dDRIVER *pdVar6;
  camCAMERA *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  float *pfVar16;
  m2dMATR *pmVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  undefined4 *puVar21;
  partEMITTER_PHYS ***ppppVar22;
  partEMITTER_VIS *ppVar23;
  short sVar24;
  partEMITTER_VIS *ppVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined8 extraout_MM1;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 local_808 [4];
  undefined4 local_804 [95];
  float local_688 [60];
  float fStack_598;
  float local_594 [41];
  m2dPOLY local_4f0 [4];
  undefined4 auStack_4ec [40];
  int local_44c [3];
  undefined4 local_440;
  undefined4 local_394;
  int local_388 [3];
  undefined4 local_37c;
  undefined4 local_2d0;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  float local_2a4;
  float local_220 [4];
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  m3dV local_12c [12];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  uint local_fc;
  undefined4 uStack_f8;
  uint local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  uint local_e4;
  undefined4 uStack_e0;
  float local_dc [3];
  m3dV local_d0 [8];
  float afStack_c8 [3];
  m2dMATR local_bc [32];
  float afStack_9c [9];
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
  float *local_48;
  int local_44;
  int *local_40;
  float local_3c;
  camCAMERA *local_38;
  float local_34;
  int local_30;
  float *local_2c;
  float local_28;
  float local_24;
  float *local_20;
  int *local_1c;
  partEMITTER_VIS *local_18;
  int local_14;
  partEMITTER_VIS *local_10;
  float local_c;
  int *local_8;
  
  ppppVar22 = &_partEmitList;
  local_38 = param_1;
  do {
    pppVar4 = *ppppVar22;
    if (pppVar4 != (partEMITTER_PHYS **)0x0) {
      if (param_2 == 0) {
        if (((uint)pppVar4[1] & 0x10000000) == 0) {
LAB_004c5348:
          (**(code **)(*pppVar4 + 0x18))(param_1,param_3);
        }
      }
      else if ((param_2 != 1) || (((uint)pppVar4[1] & 0x10000000) != 0)) goto LAB_004c5348;
    }
    ppppVar22 = ppppVar22 + 1;
    if (0x8b78ef < (int)ppppVar22) {
      if (DAT_00912620 != 0) {
        qsort(&DAT_0090b8c0,DAT_00912620,4,_partCompareParticleZ);
        local_44 = 0;
        if (0 < (int)DAT_00912620 / 1000 + 1) {
          do {
            local_30 = DAT_00912620 + local_44 * -1000;
            if (1000 < local_30) {
              local_30 = 1000;
            }
            DAT_00912628 = (partEMITTER_VIS *)0x0;
            if (0 < local_30) {
              local_14 = local_30;
              local_1c = &DAT_0090b8c0 + local_44 * 1000;
              local_8 = &DAT_0090b8c0 + local_44 * 1000;
              do {
                ppVar25 = DAT_00912628;
                local_40 = (int *)*local_8;
                local_48 = (float *)*local_40;
                local_c = (float)local_40[1];
                pfVar18 = (float *)(&DAT_00912630 + (int)DAT_00912628 * 7);
                uVar11 = *(uint *)(local_40[1] + 4);
                local_20 = pfVar18;
                if ((uVar11 & 0x1000000) == 0) {
                  fVar38 = ((*(float *)(local_38 + 0x138) - (float)local_40[8]) +
                           *(float *)(local_38 + 0x130)) * *(float *)(local_38 + 0x15c) +
                           *(float *)(local_38 + 0x140);
                  local_34 = ((float)local_40[7] - *(float *)(local_38 + 300)) *
                             *(float *)(local_38 + 0x158) + *(float *)(local_38 + 0x13c);
                  local_3c = ((*(float *)(local_38 + 0x138) - (float)local_40[9]) +
                             *(float *)(local_38 + 0x130)) * *(float *)(local_38 + 0x15c) +
                             *(float *)(local_38 + 0x140);
                  fVar39 = ((float)local_40[6] - *(float *)(local_38 + 300)) *
                           *(float *)(local_38 + 0x158) + *(float *)(local_38 + 0x13c);
                  fVar3 = (float)local_40[4];
                }
                else {
                  fVar38 = -local_48[2];
                  local_34 = local_48[2];
                  local_3c = local_48[2];
                  fVar39 = fVar38;
                  fVar3 = ___real_00000000;
                }
                iVar8 = local_40[5];
                (&DAT_00912658)[(int)DAT_00912628 * 7] = iVar8;
                (&DAT_00912674)[(int)ppVar25 * 7] = iVar8;
                pfVar19 = (float *)(&DAT_00912638 + (int)ppVar25 * 7);
                if ((uVar11 & 0x400) == 0) {
                  (&DAT_0091263c)[(int)ppVar25 * 7] = iVar8;
                  (&DAT_00912670)[(int)ppVar25 * 7] = fVar3;
                  (&DAT_00912654)[(int)ppVar25 * 7] = fVar3;
                  *pfVar19 = fVar3;
                  (&DAT_00912650)[(int)ppVar25 * 7] = local_3c;
                  (&DAT_00912668)[(int)ppVar25 * 7] = local_34;
                  (&DAT_0091266c)[(int)ppVar25 * 7] = local_3c;
                  local_18 = (partEMITTER_VIS *)0x3;
                  fVar3 = (local_34 + fVar39) * ___real_3f000000;
                }
                else {
                  (&DAT_00912690)[(int)ppVar25 * 7] = iVar8;
                  (&DAT_0091263c)[(int)ppVar25 * 7] = iVar8;
                  (&DAT_0091268c)[(int)ppVar25 * 7] = fVar3;
                  (&DAT_00912670)[(int)ppVar25 * 7] = fVar3;
                  (&DAT_00912654)[(int)ppVar25 * 7] = fVar3;
                  *pfVar19 = fVar3;
                  (&DAT_00912650)[(int)ppVar25 * 7] = local_3c;
                  (&DAT_0091266c)[(int)ppVar25 * 7] = local_3c;
                  (&DAT_00912668)[(int)ppVar25 * 7] = local_34;
                  (&DAT_00912684)[(int)ppVar25 * 7] = local_34;
                  (&DAT_00912688)[(int)ppVar25 * 7] = fVar38;
                  local_18 = (partEMITTER_VIS *)0x4;
                  fVar3 = fVar39;
                }
                *pfVar18 = fVar3;
                (&DAT_00912634)[(int)ppVar25 * 7] = fVar38;
                (&DAT_0091264c)[(int)ppVar25 * 7] = fVar39;
                if (((*(uint *)(local_40[1] + 4) & 0x1000000) != 0) &&
                   (local_18 != (partEMITTER_VIS *)0x0)) {
                  local_10 = local_18;
                  do {
                    pfVar1 = pfVar19 + -2;
                    iVar8 = local_40[1];
                    local_2c = (float *)(iVar8 + 0x27c);
                    if (m3dSimdType == 0) {
                      if (((uint)local_2c & 0xf) == 0) {
                        fVar38 = *pfVar1;
                        fVar39 = pfVar19[-1];
                        fVar3 = *pfVar19;
                        fVar35 = fVar38 * *local_2c + fVar39 * *(float *)(iVar8 + 0x28c) +
                                 fVar3 * *(float *)(iVar8 + 0x29c);
                        fVar36 = fVar38 * *(float *)(iVar8 + 0x280) +
                                 fVar39 * *(float *)(iVar8 + 0x290) +
                                 fVar3 * *(float *)(iVar8 + 0x2a0);
                        fVar38 = fVar38 * *(float *)(iVar8 + 0x284) +
                                 fVar39 * *(float *)(iVar8 + 0x294) +
                                 fVar3 * *(float *)(iVar8 + 0x2a4);
                      }
                      else {
                        fVar38 = *pfVar1;
                        fVar39 = pfVar19[-1];
                        fVar3 = *pfVar19;
                        fVar35 = fVar38 * (float)*(undefined8 *)local_2c +
                                 fVar39 * (float)*(undefined8 *)(iVar8 + 0x28c) +
                                 fVar3 * (float)*(undefined8 *)(iVar8 + 0x29c);
                        fVar36 = fVar38 * (float)((ulonglong)*(undefined8 *)local_2c >> 0x20) +
                                 fVar39 * (float)((ulonglong)*(undefined8 *)(iVar8 + 0x28c) >> 0x20)
                                 + fVar3 * (float)((ulonglong)*(undefined8 *)(iVar8 + 0x29c) >> 0x20
                                                  );
                        fVar38 = fVar38 * (float)*(undefined8 *)(iVar8 + 0x284) +
                                 fVar39 * (float)*(undefined8 *)(iVar8 + 0x294) +
                                 fVar3 * (float)*(undefined8 *)(iVar8 + 0x2a4);
                      }
                      *(ulonglong *)pfVar1 = CONCAT44(fVar36,fVar35);
                      *pfVar19 = fVar38;
                    }
                    else if (m3dSimdType == 1) {
                      FastExitMediaState();
                      uVar26 = (undefined4)*(undefined8 *)pfVar1;
                      uVar29 = CONCAT44(uVar26,uVar26);
                      uVar26 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
                      uVar34 = CONCAT44(uVar26,uVar26);
                      uVar31 = CONCAT44(*pfVar19,*pfVar19);
                      uVar30 = PackedFloatingMUL(uVar29,*(undefined8 *)local_2c);
                      uVar28 = PackedFloatingMUL(uVar34,*(undefined8 *)(iVar8 + 0x28c));
                      uVar32 = PackedFloatingMUL(uVar31,*(undefined8 *)(iVar8 + 0x29c));
                      uVar33 = PackedFloatingMUL(uVar29,*(undefined8 *)(iVar8 + 0x284));
                      uVar29 = PackedFloatingADD(uVar28,uVar32);
                      uVar34 = PackedFloatingMUL(uVar34,*(undefined8 *)(iVar8 + 0x294));
                      uVar28 = PackedFloatingMUL(uVar31,*(undefined8 *)(iVar8 + 0x2a4));
                      uVar29 = PackedFloatingADD(uVar30,uVar29);
                      uVar30 = PackedFloatingADD(uVar34,uVar28);
                      *(undefined8 *)pfVar1 = uVar29;
                      uVar29 = PackedFloatingADD(uVar33,uVar30);
                      *pfVar19 = (float)uVar29;
                      FastExitMediaState();
                    }
                    else {
                      pfVar18 = local_dc;
                      local_2c = (float *)((int)local_2c - (int)local_dc);
                      param_3 = (partEMITTER_VIS *)0x3;
                      do {
                        pfVar16 = local_2c;
                        iVar8 = 0;
                        *pfVar18 = 0.0;
                        pfVar16 = (float *)((int)pfVar16 + (int)pfVar18);
                        fVar38 = ___real_00000000;
                        do {
                          pfVar2 = pfVar1 + iVar8;
                          fVar39 = *pfVar16;
                          iVar8 = iVar8 + 1;
                          pfVar16 = pfVar16 + 4;
                          fVar38 = *pfVar2 * fVar39 + fVar38;
                        } while (iVar8 < 3);
                        *pfVar18 = fVar38;
                        pfVar18 = pfVar18 + 1;
                        param_3 = param_3 + -1;
                      } while (param_3 != (partEMITTER_VIS *)0x0);
                      *pfVar1 = local_dc[0];
                      pfVar19[-1] = local_dc[1];
                      *pfVar19 = local_dc[2];
                      pfVar18 = local_20;
                    }
                    *pfVar1 = (float)local_40[2] + *pfVar1;
                    pfVar19[-1] = pfVar19[-1] + (float)local_40[3];
                    *pfVar19 = *pfVar19 + (float)local_40[4];
                    fVar38 = *(float *)(local_38 + 0x80);
                    pfVar19[1] = fVar38 / *pfVar19;
                    *pfVar1 = ((fVar38 / *pfVar19) * *pfVar1 - *(float *)(local_38 + 300)) *
                              *(float *)(local_38 + 0x158) + *(float *)(local_38 + 0x13c);
                    local_10 = local_10 + -1;
                    pfVar19[-1] = ((*(float *)(local_38 + 0x138) - pfVar19[-1] * pfVar19[1]) +
                                  *(float *)(local_38 + 0x130)) * *(float *)(local_38 + 0x15c) +
                                  *(float *)(local_38 + 0x140);
                    pfVar19 = pfVar19 + 7;
                  } while (local_10 != (partEMITTER_VIS *)0x0);
                }
                if (local_18 == (partEMITTER_VIS *)0x4) {
                  afStack_9c[1] = 0.0;
                  afStack_9c[2] = 0.0;
                  afStack_9c[3] = 0.0;
                  afStack_9c[4] = 1.0;
                  afStack_9c[5] = 1.0;
                  afStack_9c[6] = 1.0;
                  afStack_9c[7] = 1.0;
                  afStack_9c[8] = 0.0;
                }
                else {
                  afStack_9c[1] = 0.5;
                  afStack_9c[2] =
                       *(float *)((int)local_c + 0x54) + *(float *)((int)local_c + 0x54) +
                       ___real_3f000000;
                  fVar38 = *(float *)((int)local_c + 0x54) * ___real_3fdd70a4;
                  afStack_9c[3] = ___real_3f000000 + fVar38;
                  afStack_9c[4] = ___real_3f000000 - *(float *)((int)local_c + 0x54);
                  afStack_9c[5] = ___real_3f000000 - fVar38;
                  afStack_9c[6] = afStack_9c[4];
                }
                param_3 = (partEMITTER_VIS *)
                          (uint)(ABS(local_48[10] - ___real_3f800000) < DAT_005dba98);
                afStack_9c[4] = afStack_9c[6];
                if (((((float)(int)param_3 == ___real_00000000) ||
                     (param_3 = (partEMITTER_VIS *)
                                (uint)(ABS(local_48[0xb] - ___real_3f800000) < DAT_005dba98),
                     (float)(int)param_3 == ___real_00000000)) ||
                    ((*(uint *)((int)local_c + 4) & 6) != 0)) ||
                   (ppVar25 = local_18, (*(uint *)((int)local_c + 4) & 0x100000) != 0)) {
                  m2dMATR::Identity(local_bc);
                  m2dMATR::Translate(local_bc,-0.5,-0.5,2);
                  pfVar19 = local_48;
                  if ((((uint)local_48[0xe] & 8) == 0) && ((*(byte *)((int)local_c + 4) & 4) != 0))
                  {
                    m2dMATR::Rotate(local_bc,local_48[0xc],2);
                  }
                  pcVar7 = local_38;
                  if ((*(uint *)((int)local_c + 4) & 0x100000) != 0) {
                    local_78 = pfVar19[7] + pfVar19[4];
                    local_74 = pfVar19[5] + pfVar19[8];
                    local_70 = pfVar19[6] + pfVar19[9];
                    camCAMERA::TransformPoint(local_38,(m3dV *)&local_78,local_d0);
                    camCAMERA::ProjPoint(pcVar7,(m3dV *)(local_40 + 2),(m2dV *)&local_5c);
                    camCAMERA::ProjPoint(pcVar7,local_d0,(m2dV *)&local_64);
                    local_28 = local_64 - local_5c;
                    local_24 = local_60 - local_58;
                    fVar38 = local_28 * local_28 + local_24 * local_24;
                    if (m3dSimdType == 0) {
                      fVar38 = fVar38 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                      auVar37 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
                      fVar39 = auVar37._0_4_;
                      param_3 = (partEMITTER_VIS *)
                                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar39 *
                                 (`float___cdecl_m3dSqrt(float)'::__l2::three -
                                 fVar38 * fVar39 * fVar39) * fVar38);
                    }
                    else if (m3dSimdType == 1) {
                      FastExitMediaState();
                      uVar27 = (ulonglong)(uint)fVar38;
                      uVar29 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar27);
                      uVar30 = PackedFloatingMUL(uVar29,uVar29);
                      uVar30 = PackedFloatingReciprocalSQRIter1(uVar30,uVar27);
                      uVar29 = PackedFloatingReciprocalIter2(uVar30,uVar29);
                      uVar29 = PackedFloatingMUL(uVar29,uVar27);
                      param_3 = (partEMITTER_VIS *)uVar29;
                      FastExitMediaState();
                    }
                    else {
                      param_3 = (partEMITTER_VIS *)SQRT(fVar38);
                    }
                    param_3 = (partEMITTER_VIS *)(uint)(ABS((float)param_3) < DAT_005dba98);
                    if ((float)(int)param_3 == ___real_00000000) {
                      fVar38 = m2dAngleVector((m2dV *)&local_28,&m2dVUnitY);
                      m2dMATR::Rotate(local_bc,___real_43340000 - fVar38,2);
                    }
                  }
                  param_3 = (partEMITTER_VIS *)
                            (uint)(ABS(pfVar19[10] - ___real_3f800000) < DAT_005dba98);
                  if (((float)(int)param_3 == ___real_00000000) ||
                     (param_3 = (partEMITTER_VIS *)
                                (uint)(ABS(pfVar19[0xb] - ___real_3f800000) < DAT_005dba98),
                     (float)(int)param_3 == ___real_00000000)) {
                    m2dMATR::Scale(local_bc,___real_3f800000 / pfVar19[10],
                                   ___real_3f800000 / pfVar19[0xb],2);
                  }
                  if ((*(byte *)((int)local_c + 4) & 2) == 0) {
                    fVar38 = 0.5;
                    fVar39 = 0.5;
                  }
                  else {
                    local_50 = *pfVar19;
                    local_4c = DAT_005dba98;
                    if (___real_3f800000 - DAT_005dba98 < DAT_005dba98) {
                      local_4c = ___real_3f800000 - DAT_005dba98;
                    }
                    iVar8 = *(int *)((int)local_c + 0x80);
                    iVar10 = *(int *)((int)local_c + 0x7c);
                    local_10 = (partEMITTER_VIS *)(float)iVar8;
                    local_20 = (float *)(uint)*(ushort *)((int)local_48 + 0x3a);
                    iVar9 = ftol();
                    local_c = ___real_3f800000 / (float)iVar10;
                    iVar9 = iVar9 % (iVar10 * iVar8);
                    fVar38 = ___real_3f800000 / (float)local_10;
                    local_10 = (partEMITTER_VIS *)(iVar9 / iVar10);
                    local_2c = (float *)((float)(iVar9 % iVar10) * local_c);
                    local_20 = (float *)((float)(int)local_10 * fVar38);
                    m2dMATR::Scale(local_bc,local_c,fVar38,2);
                    fVar38 = fVar38 * ___real_3f000000 + (float)local_20;
                    fVar39 = local_c * ___real_3f000000 + (float)local_2c;
                  }
                  m2dMATR::Translate(local_bc,fVar39,fVar38,2);
                  ppVar25 = local_18;
                  if (0 < (int)local_18) {
                    pfVar19 = afStack_9c + 1;
                    param_3 = local_18;
                    do {
                      iVar8 = 0;
                      do {
                        iVar10 = 0;
                        pmVar17 = local_bc + iVar8 * 4;
                        afStack_c8[iVar8 + 1] = 0.0;
                        fVar38 = ___real_00000000;
                        do {
                          pfVar1 = pfVar19 + iVar10;
                          fVar39 = *(float *)pmVar17;
                          iVar10 = iVar10 + 1;
                          pmVar17 = pmVar17 + 0xc;
                          fVar38 = *pfVar1 * fVar39 + fVar38;
                        } while (iVar10 < 2);
                        iVar10 = iVar8 + iVar10 * 3;
                        iVar8 = iVar8 + 1;
                        afStack_c8[iVar8] = fVar38 + *(float *)(local_bc + iVar10 * 4);
                      } while (iVar8 < 2);
                      pfVar19[1] = afStack_c8[2];
                      *pfVar19 = afStack_c8[1];
                      pfVar19 = pfVar19 + 2;
                      param_3 = param_3 + -1;
                    } while (param_3 != (partEMITTER_VIS *)0x0);
                  }
                }
                iVar8 = 0;
                if (0 < (int)ppVar25) {
                  pfVar19 = pfVar18 + 6;
                  do {
                    iVar10 = iVar8 * 2;
                    iVar8 = iVar8 + 1;
                    pfVar19[-1] = afStack_9c[iVar10 + 1];
                    *pfVar19 = afStack_9c[iVar8 * 2];
                    pfVar19 = pfVar19 + 7;
                  } while (iVar8 < (int)ppVar25);
                }
                if (((uint)local_48[0xe] & 1) == 0) {
                  fVar38 = local_48[3];
                  pfVar18[0x19] = fVar38;
                  pfVar18[0x12] = fVar38;
                  pfVar18[0xb] = fVar38;
                  pfVar18[4] = fVar38;
                }
                else {
                  fVar38 = local_48[3];
                  if ((uint)fVar38 >> 0x18 != 0xff) {
                    uStack_f8 = 0;
                    local_ec = (uint)fVar38 >> 0x10 & 0xff;
                    uStack_e8 = 0;
                    local_fc = (uint)fVar38 >> 0x18;
                    uVar11 = ftol();
                    uStack_e0 = 0;
                    local_e4 = (uint)fVar38 >> 8 & 0xff;
                    uVar12 = ftol();
                    local_f4 = (uint)fVar38 & 0xff;
                    uStack_f0 = 0;
                    uVar13 = ftol();
                    fVar38 = (float)(((uVar11 | 0xffffff00) << 8 | uVar12 & 0xff) << 8 |
                                    uVar13 & 0xff);
                    ppVar25 = local_18;
                  }
                  pfVar18[0x19] = fVar38;
                  pfVar18[0x12] = fVar38;
                  pfVar18[0xb] = fVar38;
                  pfVar18[4] = fVar38;
                }
                local_40[10] = (int)DAT_00912628;
                local_40[0xb] = (int)ppVar25;
                DAT_00912628 = DAT_00912628 + (int)ppVar25;
                local_14 = local_14 + -1;
                local_8 = local_8 + 1;
              } while (local_14 != 0);
              if (0 < local_30) {
                if (((*(uint *)(vidDriver + 4) & 0x2000) == 0) ||
                   ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x400000) == 0)) {
                  local_394 = 0x104000bf;
                  rendCFG::InitMtl1((rendCFG *)local_44c,
                                    *(txmTEXTURE **)(*(int *)(DAT_0090b8c0 + 4) + 0x68));
                  (**(code **)(*(int *)rendDrv + 0x50))(local_44c,0);
                  bVar5 = false;
                  local_8 = local_1c;
                  local_14 = local_30;
                  do {
                    piVar14 = (int *)*local_8;
                    iVar8 = piVar14[10];
                    iVar10 = *piVar14;
                    if (local_44c[0] != *(int *)(piVar14[1] + 0x68)) {
                      local_440 = 0;
                      local_44c[0] = *(int *)(piVar14[1] + 0x68);
                      (**(code **)(*(int *)rendDrv + 0x50))(local_44c,0);
                      bVar5 = false;
                    }
                    if ((*(byte *)(iVar10 + 0x38) & 1) == 0) {
                      if (bVar5) {
                        (**(code **)(*(int *)rendDrv + 0x54))(0xa0);
                        bVar5 = false;
                      }
                    }
                    else if (!bVar5) {
                      (**(code **)(*(int *)rendDrv + 0x54))(0x60);
                      bVar5 = true;
                    }
                    if ((*(byte *)(iVar10 + 0x38) & 2) == 0) {
                      iVar10 = 0;
                      if (0 < piVar14[0xb]) {
                        puVar15 = local_804;
                        puVar21 = &DAT_00912638 + iVar8 * 7;
                        do {
                          iVar10 = iVar10 + 1;
                          puVar15[-1] = puVar21[-2];
                          *puVar15 = puVar21[-1];
                          puVar15[1] = *puVar21;
                          puVar15[2] = puVar21[1];
                          puVar15[3] = puVar21[2];
                          puVar15[5] = puVar21[3];
                          puVar15[6] = puVar21[4];
                          puVar21 = puVar21 + 7;
                          puVar15 = puVar15 + 0xc;
                        } while (iVar10 < piVar14[0xb]);
                      }
                      (**(code **)(*(int *)rendDrv + 0x40))(piVar14[0xb],local_808,local_44c);
                    }
                    else {
                      local_594[0] = (float)piVar14[0xb];
                      iVar10 = 0;
                      if (0 < (int)local_594[0]) {
                        pfVar19 = local_220 + 2;
                        pfVar18 = (float *)(&DAT_00912634 + iVar8 * 7);
                        do {
                          iVar10 = iVar10 + 1;
                          pfVar19[-1] = pfVar18[-1];
                          *pfVar19 = *pfVar18;
                          pfVar19[1] = pfVar18[1];
                          (&fStack_598)[iVar10 * 2] = pfVar18[-1];
                          local_594[iVar10 * 2] = *pfVar18;
                          pfVar19 = pfVar19 + 3;
                          pfVar18 = pfVar18 + 7;
                        } while (iVar10 < (int)local_594[0]);
                      }
                      local_2c0 = *(undefined4 *)(local_38 + 0x13c);
                      local_2bc = *(undefined4 *)(local_38 + 0x140);
                      local_2b8 = *(float *)(local_38 + 0x144) + *(float *)(local_38 + 0x13c);
                      local_2c4 = 4;
                      local_2b4 = *(undefined4 *)(local_38 + 0x140);
                      local_2ac = *(float *)(local_38 + 0x148) + *(float *)(local_38 + 0x140);
                      local_2a8 = *(undefined4 *)(local_38 + 0x13c);
                      local_2b0 = local_2b8;
                      local_2a4 = local_2ac;
                      local_220[0] = local_594[0];
                      iVar10 = m2dClipPolyRect((m2dPOLY *)local_594,(m2dPOLY *)&local_2c4,local_4f0)
                      ;
                      if (iVar10 != 1) {
                        if (iVar10 == 0) {
                          m3dGetPolyNormal((m3dPOLY *)local_220,local_12c);
                          iVar10 = camCAMERA::BackProjPolyOrtho
                                             (local_4f0,(m3dPOLY *)local_220,(m3dPOLY *)local_688,
                                              local_12c,1);
                          if (iVar10 != 0) goto LAB_004c6235;
                          fVar38 = 1.4013e-45;
                        }
                        else {
                          pfVar18 = local_220;
                          pfVar19 = local_688;
                          for (iVar10 = 0x3d; iVar10 != 0; iVar10 = iVar10 + -1) {
                            *pfVar19 = *pfVar18;
                            pfVar18 = pfVar18 + 1;
                            pfVar19 = pfVar19 + 1;
                          }
LAB_004c6235:
                          local_1c = (int *)0x0;
                          local_120 = local_210 - local_220[1];
                          local_11c = local_20c - local_220[2];
                          local_118 = local_208 - local_220[3];
                          local_108 = local_204 - local_220[1];
                          local_104 = local_200 - local_220[2];
                          local_100 = local_1fc - local_220[3];
                          fVar38 = local_688[0];
                          if (0 < (int)local_688[0]) {
                            pfVar18 = local_688;
                            puVar15 = local_804;
                            do {
                              piVar14 = local_1c;
                              pfVar18 = (float *)((int)pfVar18 + 0xc);
                              puVar15[-1] = auStack_4ec[(int)local_1c * 2];
                              pcVar7 = local_38;
                              *puVar15 = auStack_4ec[(int)piVar14 * 2 + 1];
                              puVar15[1] = *pfVar18;
                              puVar15[2] = *(float *)(pcVar7 + 0x80) / *pfVar18;
                              local_114 = pfVar18[-2] - local_220[1];
                              local_110 = pfVar18[-1] - local_220[2];
                              local_10c = *pfVar18 - local_220[3];
                              m3dBasisCoord((m3dV *)&local_120,(m3dV *)&local_108,(m3dV *)&local_114
                                            ,&local_6c,&local_68);
                              fVar39 = *(float *)(&DAT_0091267c + iVar8 * 0x1c);
                              fVar3 = (float)(&DAT_00912644)[iVar8 * 7];
                              puVar15[3] = (&DAT_00912640)[iVar8 * 7];
                              fVar38 = local_688[0];
                              piVar14 = (int *)((int)local_1c + 1);
                              local_1c = piVar14;
                              puVar15[5] = ((float)(&DAT_00912660)[iVar8 * 7] -
                                           (float)(&DAT_00912644)[iVar8 * 7]) * local_6c +
                                           (fVar39 - fVar3) * local_68 +
                                           (float)(&DAT_00912644)[iVar8 * 7];
                              puVar15[6] = ((float)(&DAT_00912664)[iVar8 * 7] -
                                           (float)(&DAT_00912648)[iVar8 * 7]) * local_6c +
                                           (*(float *)(&DAT_00912680 + iVar8 * 0x1c) -
                                           (float)(&DAT_00912648)[iVar8 * 7]) * local_68 +
                                           (float)(&DAT_00912648)[iVar8 * 7];
                              puVar15 = puVar15 + 0xc;
                            } while ((int)piVar14 < (int)fVar38);
                          }
                          if ((int)fVar38 < 1) goto LAB_004c6417;
                        }
                        (**(code **)(*(int *)rendDrv + 0x40))(fVar38,local_808,local_44c);
                      }
                    }
LAB_004c6417:
                    local_8 = local_8 + 1;
                    local_14 = local_14 + -1;
                  } while (local_14 != 0);
                }
                else {
                  local_2d0 = 0x104000bf;
                  rendCFG::InitMtl1((rendCFG *)local_388,
                                    *(txmTEXTURE **)(*(int *)(*local_1c + 4) + 0x68));
                  (**(code **)(*(int *)rendDrv + 0x50))(local_388,0);
                  ppVar25 = DAT_00912628;
                  pdVar6 = d3dDriver;
                  if (0 < (int)DAT_00912628) {
                    pfVar18 = (float *)&DAT_00912638;
                    ppVar23 = DAT_00912628;
                    do {
                      local_54 = pfVar18[1];
                      fVar38 = ___real_00000000;
                      if ((local_54 <= *(float *)(pdVar6 + 0x1da0)) &&
                         (fVar38 = ___real_3f7fff58, *(float *)(pdVar6 + 0x1da4) <= local_54)) {
                        fVar38 = local_54 * *(float *)(pdVar6 + 0x1da8) +
                                 *(float *)(pdVar6 + 0x1dac);
                      }
                      *pfVar18 = fVar38;
                      pfVar18 = pfVar18 + 7;
                      ppVar23 = ppVar23 + -1;
                    } while (ppVar23 != (partEMITTER_VIS *)0x0);
                  }
                  iVar8 = 0;
                  (**(code **)(*(int *)rendDrv + 0x4c))(&DAT_00912630,ppVar25,0,0,local_388);
                  bVar5 = false;
                  iVar10 = 0;
                  local_8 = (int *)0x0;
                  do {
                    piVar14 = (int *)local_1c[(int)local_8];
                    local_10 = (partEMITTER_VIS *)*piVar14;
                    local_14 = piVar14[1];
                    if (((byte)((partEMITTER_VIS *)*piVar14)[0x38] & 1) == 0) {
                      if (!bVar5) goto LAB_004c5f06;
                      bVar5 = false;
LAB_004c5f0a:
                      (**(code **)(*(int *)rendDrv + 0x4c))(0,iVar8,&DAT_0092dbb0,iVar10,local_388);
                      iVar8 = piVar14[10];
                      (**(code **)(*(int *)txmManager + 0x10))(*(undefined4 *)(local_14 + 0x68));
                      local_388[0] = *(int *)(local_14 + 0x68);
                      local_37c = 0;
                      (**(code **)(*(int *)rendDrv + 0x54))
                                ((-(uint)(((byte)local_10[0x38] & 1) != 0) & 0xffffffc0) + 0x80 |
                                 0x20);
                      iVar9 = 0;
                    }
                    else {
                      if (!bVar5) {
                        bVar5 = true;
                        goto LAB_004c5f0a;
                      }
LAB_004c5f06:
                      iVar9 = iVar10;
                      if (local_388[0] != *(int *)(local_14 + 0x68)) goto LAB_004c5f0a;
                    }
                    sVar24 = (short)iVar8;
                    (&DAT_0092dbb0)[iVar9 * 3] = (short)piVar14[10] - sVar24;
                    (&DAT_0092dbb2)[iVar9 * 3] = ((short)piVar14[10] - sVar24) + 1;
                    iVar20 = iVar9 + 1;
                    (&DAT_0092dbb4)[iVar9 * 3] = ((short)piVar14[10] - sVar24) + 2;
                    iVar10 = iVar20;
                    if (piVar14[0xb] == 4) {
                      (&DAT_0092dbb0)[iVar20 * 3] = (short)piVar14[10] - sVar24;
                      (&DAT_0092dbb2)[iVar20 * 3] = ((short)piVar14[10] - sVar24) + 2;
                      iVar10 = iVar9 + 2;
                      (&DAT_0092dbb4)[iVar20 * 3] = ((short)piVar14[10] - sVar24) + 3;
                    }
                    local_8 = (int *)((int)local_8 + 1);
                  } while ((int)local_8 < local_30);
                  if (0 < iVar10) {
                    (**(code **)(*(int *)rendDrv + 0x4c))(0,iVar8,&DAT_0092dbb0,iVar10,local_388);
                  }
                }
              }
            }
            local_44 = local_44 + 1;
          } while (local_44 < (int)DAT_00912620 / 1000 + 1);
        }
        DAT_00912620 = 0;
      }
      return;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Partrend.cpp
   addr: 004C6470 */

int __thiscall
partEMITTER_PHYS::RegisterPart
          (partEMITTER_PHYS *this,int param_1,partPART **param_2,camCAMERA *param_3)

{
  m3dV *pmVar1;
  partPART *ppVar2;
  partPART *ppVar3;
  partPART *ppVar4;
  partPART pVar5;
  float *pfVar6;
  int iVar7;
  m3dV *pmVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 extraout_MM1;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 local_44;
  float local_3c;
  partPART *local_38;
  partEMITTER_PHYS *local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  m3dV *local_1c;
  partEMITTER_PHYS *local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined8 *local_8;
  
  local_34 = this;
  local_30 = 0;
  iVar11 = DAT_00912620;
  if (0 < param_1) {
    do {
      local_38 = param_2[local_30];
      if ((float)*(partPART **)local_38 <= ___real_3f800000) {
        if (6999 < iVar11) {
          return 1;
        }
        if (1999 < _partNTmp) {
          return 1;
        }
        pmVar8 = (m3dV *)(local_38 + 0x10);
        iVar10 = iVar11 * 0x30;
        (&DAT_0090b8c0)[iVar11] = &DAT_008b9840 + iVar10;
        if ((*(uint *)(this + 4) & 0x800000) != 0) {
          local_1c = pmVar8;
          local_8 = &local_44;
          local_18 = this + 0x148;
          if (m3dSimdType == 0) {
            if (((uint)local_18 & 0xf) == 0) {
              ppVar2 = *(partPART **)pmVar8;
              ppVar3 = *(partPART **)(local_38 + 0x14);
              ppVar4 = *(partPART **)(local_38 + 0x18);
              fVar23 = (float)ppVar2 * *(float *)local_18 + *(float *)(this + 0x178) +
                       (float)ppVar3 * *(float *)(this + 0x158) +
                       (float)ppVar4 * *(float *)(this + 0x168);
              fVar22 = (float)ppVar2 * *(float *)(this + 0x14c) + *(float *)(this + 0x17c) +
                       (float)ppVar3 * *(float *)(this + 0x15c) +
                       (float)ppVar4 * *(float *)(this + 0x16c);
              local_3c = (float)ppVar2 * *(float *)(this + 0x150) + *(float *)(this + 0x180) +
                         (float)ppVar3 * *(float *)(this + 0x160) +
                         (float)ppVar4 * *(float *)(this + 0x170);
            }
            else {
              ppVar2 = *(partPART **)pmVar8;
              ppVar3 = *(partPART **)(local_38 + 0x14);
              ppVar4 = *(partPART **)(local_38 + 0x18);
              fVar23 = (float)ppVar2 * (float)*(undefined8 *)local_18 +
                       (float)ppVar3 * (float)*(undefined8 *)(this + 0x158) +
                       (float)ppVar4 * (float)*(undefined8 *)(this + 0x168) +
                       (float)*(undefined8 *)(this + 0x178);
              fVar22 = (float)ppVar2 * (float)((ulonglong)*(undefined8 *)local_18 >> 0x20) +
                       (float)ppVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x158) >> 0x20) +
                       (float)ppVar4 * (float)((ulonglong)*(undefined8 *)(this + 0x168) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(this + 0x178) >> 0x20);
              local_3c = (float)ppVar2 * (float)*(undefined8 *)(this + 0x150) +
                         (float)ppVar3 * (float)*(undefined8 *)(this + 0x160) +
                         (float)ppVar4 * (float)*(undefined8 *)(this + 0x170) +
                         (float)*(undefined8 *)(this + 0x180);
            }
            local_44 = CONCAT44(fVar22,fVar23);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (undefined4)*(undefined8 *)pmVar8;
            uVar16 = CONCAT44(uVar13,uVar13);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)pmVar8 >> 0x20);
            uVar20 = CONCAT44(uVar13,uVar13);
            uVar21 = CONCAT44(*(partPART **)(local_38 + 0x18),*(partPART **)(local_38 + 0x18));
            uVar17 = PackedFloatingMUL(uVar16,*(undefined8 *)local_18);
            uVar15 = PackedFloatingMUL(uVar20,*(undefined8 *)(this + 0x158));
            uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x168));
            uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0x178));
            uVar19 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x150));
            uVar16 = PackedFloatingADD(uVar15,uVar18);
            uVar15 = PackedFloatingMUL(uVar20,*(undefined8 *)(this + 0x160));
            uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x170));
            uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(this + 0x180));
            local_44 = PackedFloatingADD(uVar17,uVar16);
            uVar16 = PackedFloatingADD(uVar15,uVar21);
            uVar16 = PackedFloatingADD(uVar20,uVar16);
            local_3c = (float)uVar16;
            FastExitMediaState();
          }
          else {
            iVar11 = 0;
            local_28 = (float)((int)local_18 - (int)&local_44);
            pfVar6 = (float *)&local_44;
            do {
              fVar23 = local_28;
              iVar7 = 0;
              *pfVar6 = 0.0;
              pfVar9 = (float *)((int)fVar23 + (int)pfVar6);
              do {
                iVar7 = iVar7 + 1;
                *pfVar6 = *(float *)(local_1c + iVar7 * 4 + -4) * *pfVar9 + *pfVar6;
                pfVar9 = pfVar9 + 4;
              } while (iVar7 < 3);
              iVar7 = iVar11 + iVar7 * 4;
              iVar11 = iVar11 + 1;
              *pfVar6 = *(float *)(local_18 + iVar7 * 4) + *pfVar6;
              pfVar6 = pfVar6 + 1;
              this = local_34;
            } while (iVar11 < 3);
          }
          pmVar8 = (m3dV *)&local_44;
        }
        pmVar1 = (m3dV *)(&DAT_008b9848 + iVar10);
        camCAMERA::TransformPoint(param_3,pmVar8,pmVar1);
        iVar7 = m3dSimdType;
        iVar11 = DAT_00912620;
        if (*(float *)(param_3 + 0x80) < *(float *)(&DAT_008b9850 + iVar10)) {
          fVar23 = *(float *)(param_3 + 0x80) / *(float *)(&DAT_008b9850 + iVar10);
          bVar12 = m3dSimdType == 0;
          *(float *)(&DAT_008b9854 + iVar10) = fVar23;
          local_18 = (partEMITTER_PHYS *)(fVar23 * *(float *)pmVar1);
          local_1c = (m3dV *)(fVar23 * *(float *)(&DAT_008b984c + iVar10));
          fVar23 = *(float *)pmVar1 * *(float *)pmVar1 +
                   *(float *)(&DAT_008b984c + iVar10) * *(float *)(&DAT_008b984c + iVar10) +
                   *(float *)(&DAT_008b9850 + iVar10) * *(float *)(&DAT_008b9850 + iVar10);
          if (bVar12) {
            fVar23 = fVar23 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar24 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
            fVar22 = auVar24._0_4_;
            local_8 = (undefined8 *)
                      (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar22 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar23 * fVar22 * fVar22) *
                      fVar23);
          }
          else if (iVar7 == 1) {
            FastExitMediaState();
            uVar14 = (ulonglong)(uint)fVar23;
            uVar16 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar14);
            uVar17 = PackedFloatingMUL(uVar16,uVar16);
            uVar17 = PackedFloatingReciprocalSQRIter1(uVar17,uVar14);
            uVar16 = PackedFloatingReciprocalIter2(uVar17,uVar16);
            uVar16 = PackedFloatingMUL(uVar16,uVar14);
            local_8 = (undefined8 *)uVar16;
            FastExitMediaState();
          }
          else {
            local_8 = (undefined8 *)SQRT(fVar23);
          }
          fVar23 = *(float *)(this + 0x98);
          local_10 = 0.0;
          local_c = fVar23;
          local_14 = 1.0;
          fVar22 = *(float *)(this + 0x9c);
          if (___real_00000000 < fVar23) {
            local_c = 0.0;
            local_10 = fVar23;
            local_14 = *(float *)(this + 0x9c);
            fVar22 = ___real_3f800000;
          }
          fVar23 = local_14;
          if ((local_c <= (float)local_8) && (fVar23 = fVar22, (float)local_8 <= local_10)) {
            local_24 = local_14;
            local_2c = local_10;
            local_20 = local_c;
            local_28 = fVar22;
            if (local_10 < local_c) {
              local_20 = local_10;
              local_24 = fVar22;
              local_2c = local_c;
              local_28 = local_14;
            }
            fVar23 = (((float)local_8 - local_20) * (local_28 - local_24)) / (local_2c - local_20) +
                     local_24;
          }
          fVar23 = fVar23 * (float)*(partPART **)(local_38 + 8) * *(float *)(&DAT_008b9854 + iVar10)
          ;
          if ((*(uint *)(this + 4) & 0x400) == 0) {
            fVar22 = ___real_3fdd70a4 * fVar23;
            *(float *)(&DAT_008b9858 + iVar10) = (float)local_18 - fVar22;
            *(float *)(&DAT_008b985c + iVar10) = fVar22 + (float)local_18;
            *(float *)(&DAT_008b9860 + iVar10) =
                 (float)local_1c -
                 (fVar23 * *(float *)(this + 0x2c) + fVar23 * *(float *)(this + 0x2c));
            local_8 = (undefined8 *)(fVar23 * *(float *)(this + 0x2c) + (float)local_1c);
            *(undefined8 **)(&DAT_008b9864 + iVar10) = local_8;
          }
          else {
            *(float *)(&DAT_008b9858 + iVar10) = (float)local_18 - fVar23;
            *(float *)(&DAT_008b985c + iVar10) = (float)local_18 + fVar23;
            *(float *)(&DAT_008b9860 + iVar10) = (float)local_1c - fVar23 * *(float *)(this + 0x2c);
            local_8 = (undefined8 *)(fVar23 * *(float *)(this + 0x2c) + (float)local_1c);
            *(undefined8 **)(&DAT_008b9864 + iVar10) = local_8;
          }
          iVar11 = DAT_00912620;
          if ((((*(float *)(this + 0x26c) <= *(float *)(&DAT_008b985c + iVar10)) &&
               (*(float *)(&DAT_008b9858 + iVar10) <= *(float *)(this + 0x270))) &&
              (*(float *)(this + 0x274) <= (float)local_8)) &&
             (*(float *)(&DAT_008b9860 + iVar10) <= *(float *)(this + 0x278))) {
            if (((*(float *)(&DAT_008b9858 + iVar10) < *(float *)(this + 0x26c)) ||
                (*(float *)(this + 0x270) < *(float *)(&DAT_008b985c + iVar10))) ||
               ((*(float *)(&DAT_008b9860 + iVar10) < *(float *)(this + 0x274) ||
                (*(float *)(this + 0x278) < (float)local_8)))) {
              if (((byte)this[4] & 8) == 0) goto LAB_004c6953;
              pVar5 = (partPART)((byte)local_38[0x38] | 2);
            }
            else {
              pVar5 = (partPART)((byte)local_38[0x38] & 0xfd);
            }
            local_38[0x38] = pVar5;
            *(partPART **)(&DAT_008b9840 + iVar10) = local_38;
            *(partEMITTER_PHYS **)(&DAT_008b9844 + iVar10) = this;
            (&_partTmpList)[_partNTmp] = (partPART **)local_38;
            _partNTmp = _partNTmp + 1;
            DAT_00912620 = DAT_00912620 + 1;
            iVar11 = DAT_00912620;
          }
        }
      }
LAB_004c6953:
      local_30 = local_30 + 1;
    } while (local_30 < param_1);
  }
  return 1;
}




/* from: engine:Partrend.cpp
   addr: 004C6980 */

void __thiscall
partEMITTER_PHYS::Register(partEMITTER_PHYS *this,camCAMERA *param_1,partEMITTER_VIS *param_2)

{
  m3dMATR *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  partPART **pppVar4;
  undefined **local_60;
  undefined4 local_5c;
  m3dMATR local_40 [64];
  
  local_5c = 1;
  local_60 = &m3dBOX::_vftable_;
  if ((*(uint *)(this + 4) & 0x8000000) == 0) {
    if (*(int *)(this + 0x48) == 0) {
      return;
    }
    if ((*(uint *)(this + 4) & 0x400000) != 0) {
      return;
    }
  }
  iVar2 = partIsOwnerInstHidden(this);
  if (iVar2 != 0) {
    return;
  }
  if ((*(int *)(this + 700) == 0) || ((*(uint *)(this + 4) & 0x20000000) != 0)) {
    CalcBBox(this,(m3dBOX *)&local_60);
    iVar2 = camCAMERA::QualBoxPOV(param_1,(m3dBOX *)&local_60);
    if (iVar2 == 1) {
      return;
    }
  }
  if (*(int *)(this + 700) == 0) {
    if ((*(uint *)(this + 4) & 0x40000000) != 0) goto LAB_004c6a2d;
    iVar2 = (*(code *)**(undefined4 **)param_2)();
    if ((iVar2 != 0) || ((*(uint *)(this + 8) & 0x200) != 0)) {
      iVar2 = (**(code **)(*(int *)param_2 + 8))(this + 0x100);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(this + 8) & 0xffffff7f;
      }
      else {
        uVar3 = *(uint *)(this + 8) | 0x80;
      }
      *(uint *)(this + 8) = uVar3;
      uVar3 = uVar3 & 0xfffffdff;
      goto LAB_004c6a81;
    }
  }
  else {
    if ((*(uint *)(this + 4) & 0x40000000) == 0) {
      iVar2 = partIsOwnerInstVisible(this);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_004c6a8f;
    }
LAB_004c6a2d:
    iVar2 = (**(code **)(*(int *)param_2 + 4))(&local_60);
    if (iVar2 == 0) {
      uVar3 = *(uint *)(this + 8) & 0xffffff7f;
    }
    else {
      uVar3 = *(uint *)(this + 8) | 0x80;
    }
LAB_004c6a81:
    *(uint *)(this + 8) = uVar3;
  }
  if (-1 < (char)this[8]) {
    return;
  }
LAB_004c6a8f:
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x40;
  if ((*(int *)(this + 0x48) != 0) && ((*(uint *)(this + 4) & 0x400000) == 0)) {
    *(undefined4 *)(this + 0x26c) = *(undefined4 *)(param_1 + 300);
    *(float *)(this + 0x270) = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 300);
    *(undefined4 *)(this + 0x274) = *(undefined4 *)(param_1 + 0x130);
    *(float *)(this + 0x278) = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x130);
    _partNTmp = 0;
    iVar2 = *(int *)(this + 0x48);
    iVar1 = *(int *)(this + 0x44);
    if (*(int *)(this + 0x40) < iVar1 + iVar2) {
      iVar2 = *(int *)(this + 0x40) - iVar1;
      RegisterPart(this,iVar2,(partPART **)(*(int *)(this + 0x4c) + iVar1 * 4),param_1);
      pppVar4 = *(partPART ***)(this + 0x4c);
      iVar2 = *(int *)(this + 0x48) - iVar2;
    }
    else {
      pppVar4 = (partPART **)(*(int *)(this + 0x4c) + iVar1 * 4);
    }
    RegisterPart(this,iVar2,pppVar4,param_1);
    if (0 < _partNTmp) {
      (**(code **)(*(int *)this + 0x24))(_partNTmp,&_partTmpList);
    }
    if ((*(uint *)(this + 4) & 0x1000000) != 0) {
      m3dMATR::Invert((m3dMATR *)(this + 0x188),local_40);
      this_00 = (m3dMATR *)(this + 0x27c);
      m3dMATR::Identity(this_00);
      m3dMATR::Transform(this_00,(m3dMATR *)param_1,2);
      m3dMATR::Transform(this_00,local_40,2);
      m3dMATR::Scale(this_00,*(float *)(this + 0x1c8),*(float *)(this + 0x1cc),
                     *(float *)(this + 0x1d0),2);
      m3dMATR::Transform(this_00,(m3dMATR *)(this + 0x188),2);
      m3dMATR::Transform(this_00,(m3dMATR *)(param_1 + 0x40),2);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Partrend.cpp
   addr: 004C6BF0 */

void __thiscall partEMITTER_PHYS::CalcBBox(partEMITTER_PHYS *this,m3dBOX *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  partEMITTER_PHYS *ppVar7;
  int iVar8;
  partEMITTER_PHYS *ppVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_2c;
  float local_24;
  int local_20;
  partEMITTER_PHYS *local_1c;
  float *local_18;
  partEMITTER_PHYS *local_14;
  undefined8 *local_10;
  partEMITTER_PHYS *local_c;
  partEMITTER_PHYS *local_8;
  
  local_c = this;
  m3dBOX::CalcStart(param_1);
  if (((*(uint *)(this + 8) & 1) != 0) && ((*(uint *)(this + 8) & 2) == 0)) {
    iVar8 = *(int *)(this + 0x1d4);
    if ((iVar8 < 1) || ((*(uint *)(this + 4) & 0x2000) == 0)) {
      if ((*(uint *)(this + 4) & 0x800000) == 0) {
        m3dBOX::CalcUpdate(param_1,(m3dV *)(this + 0x100));
      }
      else {
        ppVar9 = this + 0x100;
        local_8 = this + 0x148;
        local_10 = &local_2c;
        local_14 = ppVar9;
        if (m3dSimdType == 0) {
          if (((uint)local_8 & 0xf) == 0) {
            fVar4 = *(float *)ppVar9;
            fVar2 = *(float *)(this + 0x104);
            fVar3 = *(float *)(this + 0x108);
            fVar20 = fVar4 * *(float *)local_8 + *(float *)(this + 0x178) +
                     fVar2 * *(float *)(this + 0x158) + fVar3 * *(float *)(this + 0x168);
            fVar21 = fVar4 * *(float *)(this + 0x14c) + *(float *)(this + 0x17c) +
                     fVar2 * *(float *)(this + 0x15c) + fVar3 * *(float *)(this + 0x16c);
            local_24 = fVar4 * *(float *)(this + 0x150) + *(float *)(this + 0x180) +
                       fVar2 * *(float *)(this + 0x160) + fVar3 * *(float *)(this + 0x170);
          }
          else {
            fVar4 = *(float *)ppVar9;
            fVar2 = *(float *)(this + 0x104);
            fVar3 = *(float *)(this + 0x108);
            fVar20 = fVar4 * (float)*(undefined8 *)local_8 +
                     fVar2 * (float)*(undefined8 *)(this + 0x158) +
                     fVar3 * (float)*(undefined8 *)(this + 0x168) +
                     (float)*(undefined8 *)(this + 0x178);
            fVar21 = fVar4 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)(this + 0x158) >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x168) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(this + 0x178) >> 0x20);
            local_24 = fVar4 * (float)*(undefined8 *)(this + 0x150) +
                       fVar2 * (float)*(undefined8 *)(this + 0x160) +
                       fVar3 * (float)*(undefined8 *)(this + 0x170) +
                       (float)*(undefined8 *)(this + 0x180);
          }
          local_2c = CONCAT44(fVar21,fVar20);
          m3dBOX::CalcUpdate(param_1,(m3dV *)&local_2c);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar12 = (undefined4)*(undefined8 *)ppVar9;
          uVar15 = CONCAT44(uVar12,uVar12);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)ppVar9 >> 0x20);
          uVar18 = CONCAT44(uVar12,uVar12);
          uVar19 = CONCAT44(*(undefined4 *)(this + 0x108),*(undefined4 *)(this + 0x108));
          uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_8);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x158));
          uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x168));
          uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0x178));
          uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x150));
          uVar15 = PackedFloatingADD(uVar14,uVar16);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x160));
          uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x170));
          uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0x180));
          local_2c = PackedFloatingADD(uVar13,uVar15);
          uVar15 = PackedFloatingADD(uVar14,uVar19);
          uVar15 = PackedFloatingADD(uVar18,uVar15);
          local_24 = (float)uVar15;
          FastExitMediaState();
          m3dBOX::CalcUpdate(param_1,(m3dV *)&local_2c);
        }
        else {
          iVar8 = 0;
          local_20 = (int)local_8 - (int)&local_2c;
          pfVar5 = (float *)&local_2c;
          do {
            iVar11 = local_20;
            iVar10 = 0;
            *pfVar5 = 0.0;
            pfVar6 = (float *)(iVar11 + (int)pfVar5);
            fVar4 = ___real_00000000;
            do {
              iVar11 = iVar10 * 4;
              fVar2 = *pfVar6;
              iVar10 = iVar10 + 1;
              pfVar6 = pfVar6 + 4;
              fVar4 = *(float *)(ppVar9 + iVar11) * fVar2 + fVar4;
            } while (iVar10 < 3);
            *pfVar5 = fVar4;
            iVar11 = iVar8 + iVar10 * 4;
            iVar8 = iVar8 + 1;
            *pfVar5 = fVar4 + *(float *)(local_8 + iVar11 * 4);
            pfVar5 = pfVar5 + 1;
          } while (iVar8 < 3);
          m3dBOX::CalcUpdate(param_1,(m3dV *)&local_2c);
        }
      }
      if (*(float *)(this + 0xe8) <= *(float *)(this + 0xf4)) {
        local_14 = *(partEMITTER_PHYS **)(this + 0xf4);
        (**(code **)(*(int *)param_1 + 0x2c))(local_14);
      }
      else {
        local_14 = *(partEMITTER_PHYS **)(this + 0xe8);
        (**(code **)(*(int *)param_1 + 0x2c))(local_14);
      }
    }
    else {
      local_8 = (partEMITTER_PHYS *)(iVar8 / 10);
      if ((int)local_8 < 1) {
        local_8 = (partEMITTER_PHYS *)0x1;
      }
      iVar11 = 0;
      if (0 < iVar8) {
        iVar10 = 0;
        iVar8 = (int)local_8 * 0x24;
        do {
          m3dBOX::CalcUpdate(param_1,(m3dV *)(*(int *)(local_c + 0x1d8) + iVar10));
          iVar10 = iVar10 + iVar8;
          iVar11 = iVar11 + (int)local_8;
          this = local_c;
        } while (iVar11 < *(int *)(local_c + 0x1d4));
      }
    }
  }
  local_10 = (undefined8 *)0x0;
  iVar8 = *(int *)(this + 0x48) / 0x1e;
  local_8 = (partEMITTER_PHYS *)0x1;
  if (0 < iVar8) {
    local_8 = (partEMITTER_PHYS *)iVar8;
  }
  local_20 = 0;
  if (0 < *(int *)(this + 0x48)) {
    do {
      iVar11 = local_20;
      iVar8 = *(int *)(*(int *)(this + 0x4c) +
                      ((*(int *)(this + 0x44) + local_20) % *(int *)(this + 0x40)) * 4);
      if ((float)local_10 <= *(float *)(iVar8 + 8)) {
        local_10 = (undefined8 *)*(float *)(iVar8 + 8);
      }
      if ((*(uint *)(this + 4) & 0x800000) == 0) {
        m3dBOX::CalcUpdate(param_1,(m3dV *)(iVar8 + 0x10));
      }
      else {
        pfVar5 = (float *)(iVar8 + 0x10);
        ppVar9 = this + 0x148;
        local_14 = (partEMITTER_PHYS *)&local_2c;
        local_18 = pfVar5;
        local_1c = ppVar9;
        if (m3dSimdType == 0) {
          if (((uint)ppVar9 & 0xf) == 0) {
            fVar4 = *pfVar5;
            fVar2 = *(float *)(iVar8 + 0x14);
            fVar3 = *(float *)(iVar8 + 0x18);
            fVar20 = fVar4 * *(float *)ppVar9 + *(float *)(this + 0x178) +
                     fVar2 * *(float *)(this + 0x158) + fVar3 * *(float *)(this + 0x168);
            fVar21 = fVar4 * *(float *)(this + 0x14c) + *(float *)(this + 0x17c) +
                     fVar2 * *(float *)(this + 0x15c) + fVar3 * *(float *)(this + 0x16c);
            local_24 = fVar4 * *(float *)(this + 0x150) + *(float *)(this + 0x180) +
                       fVar2 * *(float *)(this + 0x160) + fVar3 * *(float *)(this + 0x170);
          }
          else {
            fVar4 = *pfVar5;
            fVar2 = *(float *)(iVar8 + 0x14);
            fVar3 = *(float *)(iVar8 + 0x18);
            fVar20 = fVar4 * (float)*(undefined8 *)ppVar9 +
                     fVar2 * (float)*(undefined8 *)(this + 0x158) +
                     fVar3 * (float)*(undefined8 *)(this + 0x168) +
                     (float)*(undefined8 *)(this + 0x178);
            fVar21 = fVar4 * (float)((ulonglong)*(undefined8 *)ppVar9 >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)(this + 0x158) >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x168) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(this + 0x178) >> 0x20);
            local_24 = fVar4 * (float)*(undefined8 *)(this + 0x150) +
                       fVar2 * (float)*(undefined8 *)(this + 0x160) +
                       fVar3 * (float)*(undefined8 *)(this + 0x170) +
                       (float)*(undefined8 *)(this + 0x180);
          }
          local_2c = CONCAT44(fVar21,fVar20);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar12 = (undefined4)*(undefined8 *)pfVar5;
          uVar15 = CONCAT44(uVar12,uVar12);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
          uVar18 = CONCAT44(uVar12,uVar12);
          uVar19 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x18));
          uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)ppVar9);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x158));
          uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x168));
          uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0x178));
          uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x150));
          uVar15 = PackedFloatingADD(uVar14,uVar16);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x160));
          uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x170));
          uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0x180));
          local_2c = PackedFloatingADD(uVar13,uVar15);
          uVar15 = PackedFloatingADD(uVar14,uVar19);
          uVar15 = PackedFloatingADD(uVar18,uVar15);
          local_24 = (float)uVar15;
          FastExitMediaState();
        }
        else {
          iVar8 = 0;
          local_1c = ppVar9 + -(int)&local_2c;
          pfVar6 = (float *)&local_2c;
          do {
            ppVar7 = local_1c;
            iVar11 = 0;
            *pfVar6 = 0.0;
            ppVar7 = ppVar7 + (int)pfVar6;
            do {
              pfVar1 = pfVar5 + iVar11;
              fVar4 = *(float *)ppVar7;
              iVar11 = iVar11 + 1;
              ppVar7 = ppVar7 + 0x10;
              *pfVar6 = *pfVar1 * fVar4 + *pfVar6;
            } while (iVar11 < 3);
            iVar11 = iVar8 + iVar11 * 4;
            iVar8 = iVar8 + 1;
            *pfVar6 = *(float *)(ppVar9 + iVar11 * 4) + *pfVar6;
            pfVar6 = pfVar6 + 1;
          } while (iVar8 < 3);
        }
        iVar11 = local_20;
        m3dBOX::CalcUpdate(param_1,(m3dV *)&local_2c);
        this = local_c;
      }
      local_20 = iVar11 + (int)local_8;
    } while (iVar11 + (int)local_8 < *(int *)(this + 0x48));
  }
  (**(code **)(*(int *)param_1 + 0x2c))(local_10);
  return;
}




/* from: engine:Partrend.cpp
   addr: 004C70D0 */

int __cdecl _partCompareParticleZ(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*(float *)(*param_2 + 0x10) < *(float *)(*param_1 + 0x10)) {
    return -1;
  }
  if (*(float *)(*param_1 + 0x10) < *(float *)(*param_2 + 0x10)) {
    return 1;
  }
  return 0;
}

