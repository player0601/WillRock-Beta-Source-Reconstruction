
/* from: plw_stg.cpp
   addr: 00412B60 */

int __fastcall pwpSTGInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_stg,0x50535447,0x50,pwpSTG::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_00602ca0 = txmMANAGER::Add(txmManager,s_sfx_egg_glow,0x40003,1);
  if (DAT_00602ca0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(7,(sncSOUND_DESCR_3D *)&DAT_00602ea0);
  return (uint)(iVar1 != 0);
}




/* from: plw_stg.cpp
   addr: 00412BC0 */

void __thiscall pwpSTG::Anim2Sound(pwpSTG *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  }
  return;
}




/* from: plw_stg.cpp
   addr: 00412C10 */

void __thiscall pwpSTG::UpdateSound(pwpSTG *this)

{
  if ((*(uint *)(this + 0xf8) & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00603040,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((*(uint *)(this + 0xf8) & 2) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006030a8,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_stg.cpp
   addr: 00412C60 */

int __thiscall pwpSTG::ProcessINIT(pwpSTG *this)

{
  int iVar1;
  undefined4 uVar2;
  pwpSTG_SPARKLE_1 *this_00;
  pwpSTG_SPARKLE_2 *this_01;
  objOBJ *poVar3;
  
  iVar1 = pwpBULLET_WPN::ProcessINIT((pwpBULLET_WPN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x197) = 0;
  *(undefined4 *)(this + 0x18b) = 5;
  *(undefined4 *)(this + 399) = 5;
  *(undefined4 *)(this + 0x19b) = 1;
  iVar1 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90);
  uVar2 = ftol();
  *(undefined4 *)(iVar1 + 0x414) = uVar2;
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 3;
  (**(code **)(*(int *)this + 0xa0))(0x3fb33333);
  *(undefined4 *)(this + 0x15b) = 0x40800000;
  *(undefined4 *)(this + 0x157) = 0x43480000;
  (**(code **)(*(int *)this + 0xd4))(0x3f800000);
  (**(code **)(*(int *)this + 0xdc))(0x3f800000);
  (**(code **)(*(int *)this + 0xd8))(0x3f800000,0x3ba3d70a,0);
  *(undefined4 *)(this + 0x1bf) = 0x3e800000;
  this_00 = (pwpSTG_SPARKLE_1 *)operator_new(0x2c0);
  if (this_00 == (pwpSTG_SPARKLE_1 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = pwpSTG_SPARKLE_1::pwpSTG_SPARKLE_1(this_00);
  }
  *(int *)(this + 0x1c3) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  this_01 = (pwpSTG_SPARKLE_2 *)operator_new(0x2c0);
  if (this_01 == (pwpSTG_SPARKLE_2 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = pwpSTG_SPARKLE_2::pwpSTG_SPARKLE_2(this_01);
  }
  *(int *)(this + 0x1c7) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_spark_source);
  *(objOBJ **)(this + 0x1cb) = poVar3;
  return (uint)(poVar3 != (objOBJ *)0x0);
}




/* from: plw_stg.cpp
   addr: 00412DA0 */

void __thiscall pwpSTG::ProcessFRAME(pwpSTG *this)

{
  partEMITTER_PHYS *this_00;
  pwpSTG *ppVar1;
  int iVar2;
  pwpSTG *ppVar3;
  
  pwpBULLET_WPN::ProcessFRAME((pwpBULLET_WPN *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    ppVar1 = this + 0x1c3;
    iVar2 = 2;
    ppVar3 = ppVar1;
    do {
      partEMITTER_PHYS::SetCS
                (*(partEMITTER_PHYS **)ppVar3,(m3dMATR *)(*(int *)(this + 0x1cb) + 0x3c));
      ppVar3 = ppVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 7) {
      if ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 2) != 0) {
        iVar2 = 2;
        do {
          this_00 = *(partEMITTER_PHYS **)ppVar1;
          partEMITTER_PHYS::StopEmission(this_00);
          partEMITTER_PHYS::StartEmission(this_00);
          ppVar1 = ppVar1 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 4) != 0) {
        (**(code **)(*(int *)this + 0xe0))(1);
      }
    }
  }
  return;
}




/* from: plw_stg.cpp
   addr: 00412E30 */

void __thiscall pwpSTG::ProcessTERM(pwpSTG *this)

{
  pwpSTG *ppVar1;
  int iVar2;
  
  pwpBULLET_WPN::ProcessTERM((pwpBULLET_WPN *)this);
  ppVar1 = this + 0x1c3;
  iVar2 = 2;
  do {
    if (*(undefined4 **)ppVar1 != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)ppVar1)(1);
    }
    ppVar1 = ppVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_stg.cpp
   addr: 00412E60 */

int __thiscall
pwpSTG::FillCDTShootList(pwpSTG *this,m3dV *param_1,cdtINFO *param_2,cdtINFO *param_3,int param_4)

{
  m3dV **ppmVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float extraout_ECX;
  m3dMATR *pmVar7;
  float extraout_EDX;
  int iVar8;
  cdtINFO *pcVar9;
  cdtINFO *pcVar10;
  cdtINFO *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined8 in_MM1;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float10 fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  unkbyte10 in_ST2;
  undefined8 uVar21;
  undefined8 uVar22;
  unkbyte10 Var23;
  unkbyte10 Var24;
  float fVar25;
  m3dV *pmVar26;
  undefined1 auVar27 [16];
  float fVar28;
  m3dMATR local_94 [64];
  m3dV *local_54;
  float local_50;
  cdtINFO *local_4c;
  float local_48;
  m3dMATR *local_44;
  m3dV **local_40;
  int local_3c;
  cdtINFO *local_38;
  m3dV **local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  m3dV *local_10 [2];
  cdtINFO *local_8;
  
  pcVar10 = param_2;
  local_28 = *(undefined4 *)(plrPlayer + 0xbc);
  local_2c = 0;
  local_24 = 0;
  pcVar9 = param_2;
  pcVar11 = param_3;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  local_30 = &entCDT_REFINE_EXCL::_vftable_;
  fVar28 = (*(float *)param_1 - *(float *)(param_2 + 0x10)) *
           (*(float *)param_1 - *(float *)(param_2 + 0x10)) +
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) *
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) +
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14)) *
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14));
  if (m3dSimdType == 0) {
    fVar28 = fVar28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar27 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
    fVar25 = auVar27._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar25 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar28 * fVar25 * fVar25) * fVar28);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar14 = (ulonglong)(uint)fVar28;
    uVar16 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar14);
    uVar17 = PackedFloatingMUL(uVar16,uVar16);
    uVar17 = PackedFloatingReciprocalSQRIter1(uVar17,uVar14);
    uVar16 = PackedFloatingReciprocalIter2(uVar17,uVar16);
    in_MM1 = PackedFloatingMUL(uVar16,uVar14);
    param_2 = (cdtINFO *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar28);
  }
  if (___real_40a00000 <= (float)param_2) {
    if ((float)param_2 <= ___real_42a00000) {
      local_20 = ((float)param_2 - ___real_40a00000) * ___real_3d5242e7 + ___real_3e19999a;
    }
    else {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.15;
  }
  local_1c = *(float *)(pcVar10 + 0x10) - *(float *)param_1;
  local_18 = *(float *)(pcVar10 + 0x14) - *(float *)(param_1 + 4);
  local_14 = *(float *)(pcVar10 + 0x18) - *(float *)(param_1 + 8);
  fVar28 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    fVar28 = fVar28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar27 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
    fVar25 = auVar27._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar25 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar28 * fVar25 * fVar25) * fVar28);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar14 = (ulonglong)(uint)fVar28;
    uVar16 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar14);
    uVar17 = PackedFloatingMUL(uVar16,uVar16);
    uVar17 = PackedFloatingReciprocalSQRIter1(uVar17,uVar14);
    uVar16 = PackedFloatingReciprocalIter2(uVar17,uVar16);
    uVar16 = PackedFloatingMUL(uVar16,uVar14);
    param_2 = (cdtINFO *)uVar16;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar28);
  }
  local_38 = param_2;
  Var23 = in_ST2;
  m3dNormalize((m3dV *)&local_1c);
  m3dMATR::MakeLCS2WCS_VZ(local_94,param_1,(m3dV *)&local_1c);
  fVar18 = (float10)fpatan((float10)local_20 / (float10)(float)local_38,(float10)1);
  Var24 = Var23;
  iVar6 = (**(code **)(*(int *)this + 0xf0))
                    (param_1,&local_1c,(float)local_38 + ___real_41200000,
                     (float)(((float10)___real_43340000 / (float10)_DAT_005cfda4) * fVar18),
                     param_3 + 0x20,param_4 + -1);
  iVar6 = iVar6 + 1;
  if ((*(uint *)(plrPlayer + 0x29b) & 0x800) != 0) {
    local_24 = local_24 | 1;
  }
  if (iVar6 < 10) {
    local_40 = local_10;
    local_44 = local_94;
    local_34 = &PP + iVar6 * 3;
    param_4 = (int)(param_3 + iVar6 * 0x20);
    local_48 = -local_20;
    local_3c = 10 - iVar6;
    pmVar26 = (m3dV *)param_3;
    do {
      uVar16 = (undefined8)in_ST2;
      local_8 = local_38;
      in_ST2 = Var23;
      Var23 = Var24;
      local_10[0] = (m3dV *)m3dRandRange((float)local_38,(float)pmVar26);
      fVar28 = m3dRandRange(extraout_ECX,extraout_EDX);
      local_10[1] = (m3dV *)(fVar28 * ___real_3f333333);
      if (m3dSimdType == 0) {
        if (((uint)local_44 & 0xf) == 0) {
          pmVar26 = *local_40;
          pmVar2 = local_40[1];
          pmVar3 = local_40[2];
          fVar28 = (float)pmVar26 * *(float *)local_44 + (float)pmVar2 * *(float *)(local_44 + 0x10)
                   + (float)pmVar3 * *(float *)(local_44 + 0x20);
          fVar25 = (float)pmVar26 * *(float *)(local_44 + 4) +
                   (float)pmVar2 * *(float *)(local_44 + 0x14) +
                   (float)pmVar3 * *(float *)(local_44 + 0x24);
          pmVar26 = (m3dV *)((float)pmVar26 * *(float *)(local_44 + 8) +
                             (float)pmVar2 * *(float *)(local_44 + 0x18) +
                            (float)pmVar3 * *(float *)(local_44 + 0x28));
        }
        else {
          pmVar26 = *local_40;
          pmVar2 = local_40[1];
          pmVar3 = local_40[2];
          fVar28 = (float)pmVar26 * (float)*(undefined8 *)local_44 +
                   (float)pmVar2 * (float)*(undefined8 *)(local_44 + 0x10) +
                   (float)pmVar3 * (float)*(undefined8 *)(local_44 + 0x20);
          fVar25 = (float)pmVar26 * (float)((ulonglong)*(undefined8 *)local_44 >> 0x20) +
                   (float)pmVar2 * (float)((ulonglong)*(undefined8 *)(local_44 + 0x10) >> 0x20) +
                   (float)pmVar3 * (float)((ulonglong)*(undefined8 *)(local_44 + 0x20) >> 0x20);
          pmVar26 = (m3dV *)((float)pmVar26 * (float)*(undefined8 *)(local_44 + 8) +
                             (float)pmVar2 * (float)*(undefined8 *)(local_44 + 0x18) +
                            (float)pmVar3 * (float)*(undefined8 *)(local_44 + 0x28));
        }
        *(ulonglong *)local_40 = CONCAT44(fVar25,fVar28);
        local_40[2] = pmVar26;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar13 = (undefined4)*(undefined8 *)local_40;
        uVar16 = CONCAT44(uVar13,uVar13);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)local_40 >> 0x20);
        uVar22 = CONCAT44(uVar13,uVar13);
        uVar19 = CONCAT44(local_40[2],local_40[2]);
        uVar17 = PackedFloatingMUL(uVar16,*(undefined8 *)local_44);
        uVar15 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_44 + 0x10));
        uVar20 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_44 + 0x20));
        uVar21 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_44 + 8));
        uVar16 = PackedFloatingADD(uVar15,uVar20);
        uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_44 + 0x18));
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_44 + 0x28));
        uVar17 = PackedFloatingADD(uVar17,uVar16);
        uVar22 = PackedFloatingADD(uVar22,uVar15);
        Var23 = CONCAT28((short)((unkuint10)Var23 >> 0x40),uVar22);
        *(undefined8 *)local_40 = uVar17;
        uVar17 = PackedFloatingADD(uVar21,uVar22);
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar17);
        local_40[2] = (m3dV *)uVar17;
        FastExitMediaState();
      }
      else {
        iVar8 = 0;
        do {
          *(undefined4 *)((int)&local_54 + iVar8) = 0;
          iVar5 = 0;
          pmVar7 = local_94 + iVar8;
          fVar28 = ___real_00000000;
          do {
            ppmVar1 = local_10 + iVar5;
            fVar25 = *(float *)pmVar7;
            iVar5 = iVar5 + 1;
            pmVar7 = pmVar7 + 0x10;
            fVar28 = (float)*ppmVar1 * fVar25 + fVar28;
          } while (iVar5 < 3);
          *(float *)((int)&local_54 + iVar8) = fVar28;
          iVar8 = iVar8 + 4;
        } while (iVar8 < 0xc);
        local_10[0] = local_54;
        local_10[1] = (m3dV *)local_50;
        local_8 = local_4c;
      }
      fVar28 = (float)local_8 * (float)local_8 +
               (float)local_10[0] * (float)local_10[0] + (float)local_10[1] * (float)local_10[1];
      if (m3dSimdType == 0) {
        fVar28 = fVar28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar27 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
        fVar25 = auVar27._0_4_;
        param_2 = (cdtINFO *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar25 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar28 * fVar25 * fVar25) * fVar28
                  );
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = (ulonglong)(uint)fVar28;
        uVar16 = PackedFloatingReciprocalSQRAprox(uVar16,uVar14);
        uVar17 = PackedFloatingMUL(uVar16,uVar16);
        uVar17 = PackedFloatingReciprocalSQRIter1(uVar17,uVar14);
        uVar16 = PackedFloatingReciprocalIter2(uVar17,uVar16);
        uVar16 = PackedFloatingMUL(uVar16,uVar14);
        param_2 = (cdtINFO *)uVar16;
        FastExitMediaState();
      }
      else {
        param_2 = (cdtINFO *)SQRT(fVar28);
      }
      fVar28 = ___real_3f800000 / (float)param_2;
      local_10[0] = (m3dV *)((float)local_10[0] * fVar28);
      local_10[1] = (m3dV *)((float)local_10[1] * fVar28);
      local_8 = (cdtINFO *)(fVar28 * (float)local_8);
      pfVar4 = (float *)((float)param_2 + ___real_41200000);
      Var24 = Var23;
      iVar8 = scnSCENE::ShootRay(gsScenePtr,param_1,(m3dV *)local_10,(float)pfVar4,0,
                                 (cdtREFINE *)&local_30,(cdtINFO *)param_4);
      if (iVar8 == 0) {
        pcVar10 = param_3;
        puVar12 = (undefined4 *)param_4;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          puVar12 = puVar12 + 1;
        }
        *local_34 = local_10[0];
        local_34[1] = local_10[1];
        local_34[2] = (m3dV *)local_8;
        local_8 = (cdtINFO *)(param_4 + 0x20);
      }
      else {
        *local_34 = local_10[0];
        local_34[1] = local_10[1];
        local_34[2] = (m3dV *)local_8;
      }
      param_4 = param_4 + 0x20;
      (&DIST)[iVar6] = pfVar4;
      local_34 = local_34 + 3;
      iVar6 = iVar6 + 1;
      local_3c = local_3c + -1;
      pmVar26 = (m3dV *)local_8;
    } while (local_3c != 0);
  }
  _orgTIP = *(undefined4 *)param_1;
  _DAT_00602e94 = *(undefined4 *)(param_1 + 4);
  NN = iVar6;
  _DAT_00602e98 = *(undefined4 *)(param_1 + 8);
  return iVar6;
}




/* from: plw_stg.cpp
   addr: 00413400 */

void __thiscall pwpSTG::PlayShootSound(pwpSTG *this)

{
  int iVar1;
  
  if (*(int *)(this + 399) == 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602fd8,0);
    return;
  }
  iVar1 = m3dRandIntRange(0,2);
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602ea0 + iVar1 * 0x68,0);
  return;
}




/* from: plw_stg.cpp
   addr: 00413470 */

pwpSTG_SPARKLE_1 * __thiscall pwpSTG_SPARKLE_1::pwpSTG_SPARKLE_1(pwpSTG_SPARKLE_1 *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,0.2);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,0.7,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.03611111,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  *(undefined4 *)(this + 0xb4) = 0x3e800000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00602ca0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x800408;
  return this;
}




/* from: plw_stg.cpp
   addr: 00413640 */

pwpSTG_SPARKLE_2 * __thiscall pwpSTG_SPARKLE_2::pwpSTG_SPARKLE_2(pwpSTG_SPARKLE_2 *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,0.2);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,0.7,0.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.10833333);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.041666664,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  *(undefined4 *)(this + 0xb4) = 0x3dcccccd;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00602ca0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,0.15,0.05);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x800000;
  return this;
}




/* from: plw_stg.cpp
   addr: 00413830 */

entENTITY * __fastcall pwpSTG::Create(animINST *param_1)

{
  pwpBULLET_WPN *this;
  
  this = (pwpBULLET_WPN *)operator_new(0x1cf);
  if (this != (pwpBULLET_WPN *)0x0) {
    pwpBULLET_WPN::pwpBULLET_WPN(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 2;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

