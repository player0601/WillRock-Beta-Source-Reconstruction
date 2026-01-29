/* from: plw_mcg.cpp
   addr: 0040E5D0 */

int __fastcall pwpMCGInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_mcg,0x504d4347,0x50,pwpMACHINEGUN::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: plw_mcg.cpp
   addr: 0040E600 */

int __thiscall pwpMACHINEGUN::ProcessINIT(pwpMACHINEGUN *this)

{
  int iVar1;
  m3dSPL *this_00;
  
  iVar1 = pwpBULLET_WPN::ProcessINIT((pwpBULLET_WPN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x18b) = 0xffffffff;
  *(undefined4 *)(this + 399) = 0xffffffff;
  *(undefined4 *)(this + 0x197) = 0;
  (**(code **)(*(int *)this + 0xa0))(0x41200000);
  *(undefined4 *)(this + 0x15b) = 0x40c00000;
  *(undefined4 *)(this + 0x157) = 0x447a0000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  *(undefined4 *)(this + 0x1c3) = 0;
  *(undefined4 *)(this + 0x1cb) = 0;
  (**(code **)(*(int *)this + 0xd4))(0x3f666666);
  (**(code **)(*(int *)this + 0xdc))(0x3f4ccccd);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0018400002);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.4,0.025);
  (**(code **)(*(int *)this + 0xd8))(0x3f19999a,0,this_00);
  *(undefined4 *)(this + 0x1bf) = 0x3ecccccd;
  return 1;
}




/* from: plw_mcg.cpp
   addr: 0040E710 */

void __thiscall pwpMACHINEGUN::ProcessFRAME(pwpMACHINEGUN *this)

{
  int iVar1;
  float extraout_EDX;
  
  pwpBULLET_WPN::ProcessFRAME((pwpBULLET_WPN *)this);
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0) {
    iVar1 = m3dUpdateTimeField((float *)(this + 0x1c7),extraout_EDX);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x1c3) = 0;
      *(undefined4 *)(this + 0x1cb) = 0;
    }
  }
  return;
}




/* from: plw_mcg.cpp
   addr: 0040E750 */

void __thiscall pwpMACHINEGUN::ProcessDESTROY_ENT(pwpMACHINEGUN *this,entENTITY *param_1)

{
  if (*(entENTITY **)(this + 0x1c3) == param_1) {
    *(undefined4 *)(this + 0x1c3) = 0;
  }
  return;
}




/* from: plw_mcg.cpp
   addr: 0040E770 */

void __thiscall pwpMACHINEGUN::ShowSFX(pwpMACHINEGUN *this,pwpMCG_SHOOT *param_1)

{
  pwpBULLET_WPN::ShowSFX((pwpBULLET_WPN *)this,param_1);
  (**(code **)(*(int *)this + 0xe0))(1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mcg.cpp
   addr: 0040E790 */

int __thiscall
pwpMACHINEGUN::FillCDTShootList
          (pwpMACHINEGUN *this,m3dV *param_1,cdtINFO *param_2,cdtINFO *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  m3dV *pmVar3;
  int iVar4;
  int iVar5;
  float extraout_ECX;
  m3dMATR *pmVar6;
  m3dMATR *extraout_EDX;
  cdtINFO *pcVar7;
  cdtINFO *pcVar8;
  cdtINFO *pcVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 in_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float10 fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  unkbyte10 in_ST2;
  undefined8 uVar18;
  undefined8 uVar19;
  unkbyte10 Var20;
  unkbyte10 Var21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  m3dMATR local_8c [64];
  float local_4c [2];
  cdtINFO *local_44;
  float *local_40;
  float local_3c;
  m3dMATR *local_38;
  int local_34;
  int local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  cdtINFO *local_8;
  
  pcVar7 = param_2;
  pmVar3 = param_1;
  local_24 = *(undefined4 *)(plrPlayer + 0xbc);
  local_28 = 0;
  local_20 = 0;
  pcVar8 = param_2;
  pcVar9 = param_3;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_2c = &entCDT_REFINE_EXCL::_vftable_;
  fVar26 = (*(float *)param_1 - *(float *)(param_2 + 0x10)) *
           (*(float *)param_1 - *(float *)(param_2 + 0x10)) +
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) *
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) +
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14)) *
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14));
  if (m3dSimdType == 0) {
    fVar26 = fVar26 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar25 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar24 = auVar25._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar24 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar26 * fVar24 * fVar24) * fVar26);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar11 = (ulonglong)(uint)fVar26;
    uVar13 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar11);
    uVar14 = PackedFloatingMUL(uVar13,uVar13);
    uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar11);
    uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
    in_MM1 = PackedFloatingMUL(uVar13,uVar11);
    param_2 = (cdtINFO *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar26);
  }
  if (___real_40400000 <= (float)param_2) {
    if ((float)param_2 <= ___real_42a00000) {
      param_1 = (m3dV *)(((float)param_2 - ___real_40400000) * ___real_3baa392f + ___real_3dcccccd);
    }
    else {
      param_1 = (m3dV *)0x3f000000;
    }
  }
  else {
    param_1 = (m3dV *)0x3dcccccd;
  }
  local_1c = *(float *)(pcVar7 + 0x10) - *(float *)pmVar3;
  local_18 = *(float *)(pcVar7 + 0x14) - *(float *)(pmVar3 + 4);
  local_14 = *(float *)(pcVar7 + 0x18) - *(float *)(pmVar3 + 8);
  fVar26 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    fVar26 = fVar26 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar25 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar24 = auVar25._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar24 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar26 * fVar24 * fVar24) * fVar26);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar11 = (ulonglong)(uint)fVar26;
    uVar13 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar11);
    uVar14 = PackedFloatingMUL(uVar13,uVar13);
    uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar11);
    uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
    uVar13 = PackedFloatingMUL(uVar13,uVar11);
    param_2 = (cdtINFO *)uVar13;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar26);
  }
  Var20 = in_ST2;
  m3dNormalize((m3dV *)&local_1c);
  m3dMATR::MakeLCS2WCS_VZ(local_8c,pmVar3,(m3dV *)&local_1c);
  fVar15 = (float10)fpatan((float10)(float)param_1 / (float10)(float)param_2,(float10)1);
  Var21 = Var20;
  local_30 = (**(code **)(*(int *)this + 0xf0))
                       (pmVar3,&local_1c,(float)param_2 + ___real_41200000,
                        (float)(((float10)___real_43340000 / (float10)_DAT_005cf828) * fVar15),
                        param_3,1);
  if ((*(uint *)(plrPlayer + 0x29b) & 0x800) != 0) {
    local_20 = local_20 | 1;
  }
  if (local_30 < 1) {
    local_40 = local_10;
    pcVar7 = param_3 + local_30 * 0x20;
    pmVar6 = local_8c;
    local_3c = -(float)param_1;
    local_34 = 1 - local_30;
    local_38 = pmVar6;
    do {
      uVar13 = (undefined8)in_ST2;
      local_8 = param_2;
      in_ST2 = Var20;
      Var20 = Var21;
      local_10[0] = m3dRandRange(local_3c,(float)pmVar6);
      fVar26 = m3dRandRange(extraout_ECX,local_3c);
      local_10[1] = fVar26 * ___real_3f333333;
      if (m3dSimdType == 0) {
        if (((uint)local_38 & 0xf) == 0) {
          fVar26 = *local_40;
          fVar24 = local_40[1];
          fVar2 = local_40[2];
          fVar22 = fVar26 * *(float *)local_38 + fVar24 * *(float *)(local_38 + 0x10) +
                   fVar2 * *(float *)(local_38 + 0x20);
          fVar23 = fVar26 * *(float *)(local_38 + 4) + fVar24 * *(float *)(local_38 + 0x14) +
                   fVar2 * *(float *)(local_38 + 0x24);
          fVar26 = fVar26 * *(float *)(local_38 + 8) + fVar24 * *(float *)(local_38 + 0x18) +
                   fVar2 * *(float *)(local_38 + 0x28);
        }
        else {
          fVar26 = *local_40;
          fVar24 = local_40[1];
          fVar2 = local_40[2];
          fVar22 = fVar26 * (float)*(undefined8 *)local_38 +
                   fVar24 * (float)*(undefined8 *)(local_38 + 0x10) +
                   fVar2 * (float)*(undefined8 *)(local_38 + 0x20);
          fVar23 = fVar26 * (float)((ulonglong)*(undefined8 *)local_38 >> 0x20) +
                   fVar24 * (float)((ulonglong)*(undefined8 *)(local_38 + 0x10) >> 0x20) +
                   fVar2 * (float)((ulonglong)*(undefined8 *)(local_38 + 0x20) >> 0x20);
          fVar26 = fVar26 * (float)*(undefined8 *)(local_38 + 8) +
                   fVar24 * (float)*(undefined8 *)(local_38 + 0x18) +
                   fVar2 * (float)*(undefined8 *)(local_38 + 0x28);
        }
        *(ulonglong *)local_40 = CONCAT44(fVar23,fVar22);
        local_40[2] = fVar26;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)local_40;
        uVar13 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)local_40 >> 0x20);
        uVar19 = CONCAT44(uVar10,uVar10);
        uVar16 = CONCAT44(local_40[2],local_40[2]);
        uVar14 = PackedFloatingMUL(uVar13,*(undefined8 *)local_38);
        uVar12 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_38 + 0x10));
        uVar17 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_38 + 0x20));
        uVar18 = PackedFloatingMUL(uVar13,*(undefined8 *)(local_38 + 8));
        uVar13 = PackedFloatingADD(uVar12,uVar17);
        uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_38 + 0x18));
        uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_38 + 0x28));
        uVar14 = PackedFloatingADD(uVar14,uVar13);
        uVar19 = PackedFloatingADD(uVar19,uVar12);
        Var20 = CONCAT28((short)((unkuint10)Var20 >> 0x40),uVar19);
        *(undefined8 *)local_40 = uVar14;
        uVar14 = PackedFloatingADD(uVar18,uVar19);
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar14);
        local_40[2] = (float)uVar14;
        FastExitMediaState();
      }
      else {
        iVar5 = 0;
        do {
          *(undefined4 *)((int)local_4c + iVar5) = 0;
          iVar4 = 0;
          pmVar6 = local_8c + iVar5;
          fVar26 = ___real_00000000;
          do {
            pfVar1 = local_10 + iVar4;
            fVar24 = *(float *)pmVar6;
            iVar4 = iVar4 + 1;
            pmVar6 = pmVar6 + 0x10;
            fVar26 = *pfVar1 * fVar24 + fVar26;
          } while (iVar4 < 3);
          *(float *)((int)local_4c + iVar5) = fVar26;
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xc);
        local_10[0] = local_4c[0];
        local_10[1] = local_4c[1];
        local_8 = local_44;
      }
      fVar26 = (float)local_8 * (float)local_8 +
               local_10[0] * local_10[0] + local_10[1] * local_10[1];
      if (m3dSimdType == 0) {
        fVar26 = fVar26 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar25 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
        fVar24 = auVar25._0_4_;
        param_3 = (cdtINFO *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar24 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar26 * fVar24 * fVar24) * fVar26
                  );
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (ulonglong)(uint)fVar26;
        uVar13 = PackedFloatingReciprocalSQRAprox(uVar13,uVar11);
        uVar14 = PackedFloatingMUL(uVar13,uVar13);
        uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar11);
        uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
        uVar13 = PackedFloatingMUL(uVar13,uVar11);
        param_3 = (cdtINFO *)uVar13;
        FastExitMediaState();
      }
      else {
        param_3 = (cdtINFO *)SQRT(fVar26);
      }
      fVar26 = ___real_3f800000 / (float)param_3;
      local_10[0] = local_10[0] * fVar26;
      local_10[1] = local_10[1] * fVar26;
      local_8 = (cdtINFO *)(fVar26 * (float)local_8);
      Var21 = Var20;
      iVar5 = scnSCENE::ShootRay(gsScenePtr,pmVar3,(m3dV *)local_10,
                                 (float)param_3 + ___real_41200000,0,(cdtREFINE *)&local_2c,pcVar7);
      if (iVar5 != 0) {
        local_30 = local_30 + 1;
        pcVar7 = pcVar7 + 0x20;
      }
      local_34 = local_34 + -1;
      pmVar6 = extraout_EDX;
    } while (local_34 != 0);
    return local_30 + 1;
  }
  return local_30 + 1;
}




/* from: plw_mcg.cpp
   addr: 0040ECD0 */

entENTITY * __fastcall pwpMACHINEGUN::Create(animINST *param_1)

{
  pwpBULLET_WPN *this;
  
  this = (pwpBULLET_WPN *)operator_new(0x1d3);
  if (this != (pwpBULLET_WPN *)0x0) {
    pwpBULLET_WPN::pwpBULLET_WPN(this);
    *(undefined4 *)(this + 0x1c3) = 0;
    *(undefined4 *)(this + 0x1cb) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 3;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}
