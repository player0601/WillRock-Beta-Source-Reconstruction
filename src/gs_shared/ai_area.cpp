
/* from: gs_shared:ai_area.cpp
   addr: 00537940 */

int __thiscall aiAREA::Init(aiAREA *this)

{
  int iVar1;
  
  if (*(int *)(*(int *)(this + 0x34) + 0x10) == 0) {
    apLogErr(s_ERROR__AI_area_without_geometry_,*(undefined4 *)(*(int *)(this + 0x34) + 0x18));
    return 0;
  }
  iVar1 = scnDOMAIN::Init((scnDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  MakePointList(this);
  objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x34),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  return 1;
}




/* from: gs_shared:ai_area.cpp
   addr: 00537990 */

void __thiscall aiAREA::Term(aiAREA *this)

{
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    apFree(*(void **)(this + 0x3c));
  }
  *(undefined4 *)(this + 0x3c) = 0;
  scnDOMAIN::Term((scnDOMAIN *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_area.cpp
   addr: 005379C0 */

void __thiscall aiAREA::CalcWeights(aiAREA *this,aiAREA_GET_POINT_PARAM *param_1)

{
  float *pfVar1;
  uint uVar2;
  aiAREA_GET_POINT_PARAM *paVar3;
  int iVar4;
  undefined4 *puVar5;
  aiNPC *paVar6;
  int iVar7;
  float extraout_ECX;
  int iVar8;
  float extraout_EDX;
  float extraout_EDX_00;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte10 in_ST1;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 extraout_ST1_01;
  unkbyte10 Var12;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  aiAREA_GET_POINT_PARAM *local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [2];
  float local_4;
  
  paVar3 = param_1;
  iVar7 = 0;
  uVar2 = *(uint *)(this + 0x188);
  local_10 = 0;
  local_18 = &cdtREFINE::_vftable_;
  local_14 = 10;
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 5) != 0) {
        iVar8 = 0;
        if (0 < *(int *)(this + 0x40)) {
          do {
            iVar8 = iVar8 + 1;
            *(undefined4 *)(iVar7 + 0x18 + *(int *)(this + 0x3c)) = 0;
            iVar7 = iVar7 + 0x1c;
          } while (iVar8 < *(int *)(this + 0x40));
        }
        for (paVar6 = aiNPC::GetNext((aiNPC *)0x0,0); paVar6 != (aiNPC *)0x0;
            paVar6 = aiNPC::GetNext(paVar6,0)) {
          animINST::GetPos(*(animINST **)(paVar6 + 0xbc),(m3dV *)local_c);
          iVar7 = 0;
          if (0 < *(int *)(this + 0x40)) {
            iVar8 = 0;
            Var12 = extraout_ST1_01;
            do {
              fVar13 = local_c[0] - *(float *)(*(int *)(this + 0x3c) + iVar8);
              fVar16 = local_4 - *(float *)(*(int *)(this + 0x3c) + 8 + iVar8);
              fVar13 = fVar13 * fVar13 + fVar16 * fVar16;
              if (m3dSimdType == 0) {
                fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
                fVar16 = auVar15._0_4_;
                param_1 = (aiAREA_GET_POINT_PARAM *)
                          (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar16 * fVar16)
                          * fVar13);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar9 = (ulonglong)(uint)fVar13;
                uVar10 = PackedFloatingReciprocalSQRAprox((longlong)Var12,uVar9);
                uVar11 = PackedFloatingMUL(uVar10,uVar10);
                uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
                uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
                uVar10 = PackedFloatingMUL(uVar10,uVar9);
                Var12 = CONCAT28((short)((unkuint10)Var12 >> 0x40),uVar10);
                param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
                FastExitMediaState();
              }
              else {
                param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar13);
              }
              iVar7 = iVar7 + 1;
              pfVar1 = (float *)(iVar8 + 0x18 + *(int *)(this + 0x3c));
              iVar8 = iVar8 + 0x1c;
              *pfVar1 = ___real_3f800000 / ((float)param_1 * (float)param_1 + ___real_3dcccccd) +
                        *pfVar1;
            } while (iVar7 < *(int *)(this + 0x40));
          }
        }
      }
    }
    else {
      iVar7 = 0;
      local_34 = (aiAREA_GET_POINT_PARAM *)0x0;
      local_30 = *(float *)(param_1 + 0x14);
      local_2c = *(float *)(param_1 + 0x18);
      fVar13 = *(float *)(param_1 + 0x1c);
      local_28 = fVar13;
      if (0 < *(int *)(this + 0x40)) {
        iVar8 = 0;
        do {
          puVar5 = (undefined4 *)(*(int *)(this + 0x3c) + iVar8);
          local_24 = *puVar5;
          local_20 = (float)puVar5[1];
          local_1c = puVar5[2];
          uVar10 = (**(code **)(**(int **)(paVar3 + 0x10) + 0x14))(&local_30,&local_24);
          fVar13 = (float)((ulonglong)uVar10 >> 0x20);
          in_ST1 = extraout_ST1_00;
          if ((int)uVar10 == 0) {
            fVar13 = *(float *)(*(int *)(this + 0x3c) + iVar8) - *(float *)paVar3;
            fVar16 = ((float *)(*(int *)(this + 0x3c) + iVar8))[2] - *(float *)(paVar3 + 8);
            fVar13 = fVar13 * fVar13 + fVar16 * fVar16;
            if (m3dSimdType == 0) {
              fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
              fVar16 = auVar15._0_4_;
              param_1 = (aiAREA_GET_POINT_PARAM *)
                        (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar16 * fVar16) *
                        fVar13);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar9 = (ulonglong)(uint)fVar13;
              uVar10 = PackedFloatingReciprocalSQRAprox((longlong)extraout_ST1_00,uVar9);
              in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar10);
              uVar11 = PackedFloatingMUL(uVar10,uVar10);
              uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
              uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
              uVar10 = PackedFloatingMUL(uVar10,uVar9);
              in_ST1 = CONCAT28((short)((unkuint10)extraout_ST1_00 >> 0x40),uVar10);
              param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
              FastExitMediaState();
            }
            else {
              param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar13);
            }
            if ((float)local_34 < (float)param_1) {
              local_34 = param_1;
            }
            fVar13 = *(float *)(this + 0x3c);
            *(undefined4 *)(iVar8 + 0x18 + (int)fVar13) = 0xbf800000;
          }
          else {
            *(undefined4 *)(iVar8 + 0x18 + *(int *)(this + 0x3c)) = 0x3f800000;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x1c;
        } while (iVar7 < *(int *)(this + 0x40));
        if (___real_42a00000 < (float)local_34) {
          local_34 = (aiAREA_GET_POINT_PARAM *)0x42a00000;
        }
      }
      iVar7 = 0;
      if (0 < *(int *)(this + 0x40)) {
        iVar8 = 0;
        do {
          pfVar1 = (float *)(iVar8 + *(int *)(this + 0x3c));
          if (*(float *)(iVar8 + 0x18 + *(int *)(this + 0x3c)) < ___real_00000000) {
            fVar16 = (*pfVar1 - *(float *)paVar3) * (*pfVar1 - *(float *)paVar3) +
                     (pfVar1[2] - *(float *)(paVar3 + 8)) * (pfVar1[2] - *(float *)(paVar3 + 8));
            if (m3dSimdType == 0) {
              fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
              fVar14 = auVar15._0_4_;
              param_1 = (aiAREA_GET_POINT_PARAM *)
                        (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar14 * fVar14) *
                        fVar16);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar9 = (ulonglong)(uint)fVar16;
              uVar10 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
              in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar10);
              uVar11 = PackedFloatingMUL(uVar10,uVar10);
              uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
              uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
              uVar10 = PackedFloatingMUL(uVar10,uVar9);
              in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar10);
              param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
              FastExitMediaState();
            }
            else {
              param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar16);
            }
            if (((float)param_1 < (float)local_34 * ___real_3f000000) ||
               ((float)local_34 < (float)param_1)) {
              fVar13 = *(float *)(this + 0x3c);
              *(undefined4 *)(iVar8 + 0x18 + (int)fVar13) = 0x3f733333;
            }
            else {
              in_ST1 = in_ST2;
              in_ST2 = in_ST3;
              fVar13 = m3dRandRange((float)pfVar1,fVar13);
              *(float *)(iVar8 + 0x18 + *(int *)(this + 0x3c)) = fVar13;
              fVar13 = extraout_EDX_00;
            }
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x1c;
        } while (iVar7 < *(int *)(this + 0x40));
        return;
      }
    }
  }
  else {
    iVar8 = 0;
    local_34 = (aiAREA_GET_POINT_PARAM *)0x0;
    if (0 < *(int *)(this + 0x40)) {
      do {
        fVar13 = *(float *)(*(int *)(this + 0x3c) + iVar7) - *(float *)paVar3;
        fVar16 = ((float *)(*(int *)(this + 0x3c) + iVar7))[2] - *(float *)(paVar3 + 8);
        fVar13 = fVar13 * fVar13 + fVar16 * fVar16;
        if (m3dSimdType == 0) {
          fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          fVar16 = auVar15._0_4_;
          param_1 = (aiAREA_GET_POINT_PARAM *)
                    (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar16 * fVar16) *
                    fVar13);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar9 = (ulonglong)(uint)fVar13;
          uVar10 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
          in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar10);
          uVar11 = PackedFloatingMUL(uVar10,uVar10);
          uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
          uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
          uVar10 = PackedFloatingMUL(uVar10,uVar9);
          in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar10);
          param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
          FastExitMediaState();
        }
        else {
          param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar13);
        }
        if ((float)local_34 < (float)param_1) {
          fVar13 = *(float *)(*(int *)(this + 0x3c) + iVar7) - *(float *)paVar3;
          fVar16 = ((float *)(*(int *)(this + 0x3c) + iVar7))[2] - *(float *)(paVar3 + 8);
          fVar13 = fVar13 * fVar13 + fVar16 * fVar16;
          if (m3dSimdType == 0) {
            fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
            fVar16 = auVar15._0_4_;
            param_1 = (aiAREA_GET_POINT_PARAM *)
                      (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar16 * fVar16) *
                      fVar13);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar9 = (ulonglong)(uint)fVar13;
            uVar10 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
            in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar10);
            uVar11 = PackedFloatingMUL(uVar10,uVar10);
            uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
            uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
            uVar10 = PackedFloatingMUL(uVar10,uVar9);
            in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar10);
            param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
            FastExitMediaState();
          }
          else {
            param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar13);
          }
          local_34 = param_1;
        }
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar7 + 0x18 + *(int *)(this + 0x3c)) = 0x3f800000;
        iVar7 = iVar7 + 0x1c;
      } while (iVar8 < *(int *)(this + 0x40));
    }
    iVar7 = 0;
    local_24 = *(undefined4 *)paVar3;
    local_20 = *(float *)(paVar3 + 4) + ___real_3f800000;
    local_1c = *(undefined4 *)(paVar3 + 8);
    if (0 < *(int *)(this + 0x40)) {
      fVar13 = (float)local_34 * ___real_3f000000;
      iVar8 = 0;
      do {
        pfVar1 = (float *)(*(int *)(this + 0x3c) + iVar8);
        local_30 = *pfVar1;
        local_2c = pfVar1[1] + ___real_3f800000;
        local_28 = pfVar1[2];
        fVar16 = (*pfVar1 - *(float *)paVar3) * (*pfVar1 - *(float *)paVar3) +
                 (pfVar1[2] - *(float *)(paVar3 + 8)) * (pfVar1[2] - *(float *)(paVar3 + 8));
        if (m3dSimdType == 0) {
          fVar16 = fVar16 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          fVar14 = auVar15._0_4_;
          param_1 = (aiAREA_GET_POINT_PARAM *)
                    (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar16 * fVar14 * fVar14) *
                    fVar16);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar9 = (ulonglong)(uint)fVar16;
          uVar10 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
          in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar10);
          uVar11 = PackedFloatingMUL(uVar10,uVar10);
          uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
          uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
          uVar10 = PackedFloatingMUL(uVar10,uVar9);
          in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar10);
          param_1 = (aiAREA_GET_POINT_PARAM *)uVar10;
          FastExitMediaState();
        }
        else {
          param_1 = (aiAREA_GET_POINT_PARAM *)SQRT(fVar16);
        }
        if (fVar13 < (float)param_1) {
          if (((byte)this[0x188] & 8) == 0) {
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            fVar16 = m3dRandRange(local_28,pfVar1[1]);
            *(float *)(*(int *)(this + 0x3c) + 0x18 + iVar8) = fVar16;
          }
          else {
            Var12 = in_ST3;
            iVar4 = scnSCENE::IsVisiblePoint
                              (gsScenePtr,(m3dV *)&local_30,(m3dV *)&local_24,0,
                               (cdtREFINE *)&local_18,(cdtINFO *)0x0);
            if (iVar4 == 0) {
              *(undefined4 *)(*(int *)(this + 0x3c) + 0x18 + iVar8) = 0x3f800000;
              in_ST1 = extraout_ST1;
            }
            else {
              in_ST1 = in_ST2;
              in_ST2 = in_ST3;
              in_ST3 = Var12;
              fVar16 = m3dRandRange(extraout_ECX,extraout_EDX);
              *(float *)(*(int *)(this + 0x3c) + 0x18 + iVar8) = fVar16;
            }
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x1c;
      } while (iVar7 < *(int *)(this + 0x40));
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_area.cpp
   addr: 00538120 */

void __thiscall aiAREA::GetRandomPos(aiAREA *this,m3dV *param_1,aiAREA_GET_POINT_PARAM *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  CalcWeights(this,param_2);
  iVar4 = 0;
  iVar2 = 0;
  if (0 < *(int *)(this + 0x40)) {
    pfVar3 = (float *)(*(int *)(this + 0x3c) + 0x18);
    fVar5 = _DAT_005dd5ec;
    do {
      if (*pfVar3 < fVar5) {
        fVar5 = *pfVar3;
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 7;
    } while (iVar2 < *(int *)(this + 0x40));
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x3c) + iVar4 * 0x1c);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  fVar5 = m3dRandRange(*(float *)(this + 8),*(float *)(this + 8));
  *(float *)(param_1 + 4) = fVar5;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_area.cpp
   addr: 005381B0 */

void __thiscall aiAREA::GetRandomPos(aiAREA *this,m3dV *param_1,m3dV *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)param_2;
  local_1c = *(undefined4 *)(param_2 + 4);
  iVar4 = 0;
  local_18 = *(undefined4 *)(param_2 + 8);
  local_14 = 0;
  CalcWeights(this,(aiAREA_GET_POINT_PARAM *)&local_20);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x40)) {
    pfVar3 = (float *)(*(int *)(this + 0x3c) + 0x18);
    fVar5 = _DAT_005dd5ec;
    do {
      if (*pfVar3 < fVar5) {
        fVar5 = *pfVar3;
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 7;
    } while (iVar2 < *(int *)(this + 0x40));
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x3c) + iVar4 * 0x1c);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  fVar5 = m3dRandRange(*(float *)(this + 0xc),*(float *)(this + 8));
  *(float *)(param_1 + 4) = fVar5;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_area.cpp
   addr: 00538260 */

void __thiscall aiAREA::MakePointList(aiAREA *this)

{
  aiAREA *paVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  objOBJ *this_00;
  objOBJ *poVar12;
  float *pfVar13;
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
  undefined4 local_150;
  float local_14c [60];
  int local_5c;
  float local_58;
  aiAREA *local_54;
  float *local_50;
  float *local_4c;
  int local_48;
  undefined **local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  objOBJ *local_2c;
  int local_28;
  objOBJ *local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float *local_14;
  float local_10;
  int local_c;
  m3dV *local_8;
  
  this_00 = *(objOBJ **)(this + 0x34);
  local_3c = 0;
  local_44 = &cdtREFINE::_vftable_;
  local_40 = 2;
  local_54 = this;
  local_2c = this_00;
  objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  local_28 = *(int *)(this_00 + 0x10);
  paVar1 = this + 0x40;
  *(uint *)paVar1 = 0x32;
  if (*(psSHEET **)(this_00 + 0xf0) != (psSHEET *)0x0) {
    psSHEET::GetInt(*(psSHEET **)(this_00 + 0xf0),s_AI_SPAWN,s_nPoint,(int *)paVar1);
    iVar6 = psSHEET::GetInt(*(psSHEET **)(this_00 + 0xf0),s_AI_SPAWN,s_isShowPoints,&local_c);
    if ((iVar6 != 0) && (local_c != 0)) {
      *(uint *)(this + 0x188) = *(uint *)(this + 0x188) | 0x20;
    }
  }
  pvVar7 = apCalloc(*(uint *)paVar1,0x1c);
  local_5c = local_28;
  *(void **)(this + 0x3c) = pvVar7;
  local_30 = 0;
  local_38 = 0;
  if ((int)(*(uint *)paVar1 * 10) < 1) {
    *(uint *)paVar1 = 0;
    return;
  }
  local_28 = 0;
  local_5c = local_5c + -1;
  do {
    local_48 = m3dRandIntMax(local_5c);
    m3dRandBasicCoord(&local_10,(float *)&local_8);
    local_150 = 3;
    if (((byte)*this_00 & 1) == 0) {
      local_24 = this_00 + 0x3c;
      local_14 = local_14c;
      local_34 = 0;
      do {
        pfVar8 = local_14;
        piVar5 = *(int **)(this_00 + 0x28);
        local_50 = local_14;
        pfVar13 = (float *)(piVar5[0x10] +
                           (uint)*(ushort *)
                                  ((uint)*(byte *)(piVar5 + 1) * local_48 + 2 + local_34 * 2 +
                                  *piVar5) * 0xc);
        local_4c = pfVar13;
        if (m3dSimdType == 0) {
          if (((uint)local_24 & 0xf) == 0) {
            fVar24 = *pfVar13;
            fVar3 = pfVar13[1];
            fVar4 = pfVar13[2];
            fVar22 = fVar24 * *(float *)local_24 + *(float *)(local_24 + 0x30) +
                     fVar3 * *(float *)(local_24 + 0x10) + fVar4 * *(float *)(local_24 + 0x20);
            fVar23 = fVar24 * *(float *)(local_24 + 4) + *(float *)(local_24 + 0x34) +
                     fVar3 * *(float *)(local_24 + 0x14) + fVar4 * *(float *)(local_24 + 0x24);
            fVar24 = fVar24 * *(float *)(local_24 + 8) + *(float *)(local_24 + 0x38) +
                     fVar3 * *(float *)(local_24 + 0x18) + fVar4 * *(float *)(local_24 + 0x28);
          }
          else {
            fVar24 = *pfVar13;
            fVar3 = pfVar13[1];
            fVar4 = pfVar13[2];
            fVar22 = fVar24 * (float)*(undefined8 *)local_24 +
                     fVar3 * (float)*(undefined8 *)(local_24 + 0x10) +
                     fVar4 * (float)*(undefined8 *)(local_24 + 0x20) +
                     (float)*(undefined8 *)(local_24 + 0x30);
            fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)local_24 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(local_24 + 0x10) >> 0x20) +
                     fVar4 * (float)((ulonglong)*(undefined8 *)(local_24 + 0x20) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(local_24 + 0x30) >> 0x20);
            fVar24 = fVar24 * (float)*(undefined8 *)(local_24 + 8) +
                     fVar3 * (float)*(undefined8 *)(local_24 + 0x18) +
                     fVar4 * (float)*(undefined8 *)(local_24 + 0x28) +
                     (float)*(undefined8 *)(local_24 + 0x38);
          }
          *(ulonglong *)local_14 = CONCAT44(fVar23,fVar22);
          local_14[2] = fVar24;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar14 = (undefined4)*(undefined8 *)pfVar13;
          uVar17 = CONCAT44(uVar14,uVar14);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar13 >> 0x20);
          uVar20 = CONCAT44(uVar14,uVar14);
          uVar21 = CONCAT44(pfVar13[2],pfVar13[2]);
          uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_24);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_24 + 0x10));
          uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_24 + 0x20));
          uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_24 + 0x30));
          uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_24 + 8));
          uVar17 = PackedFloatingADD(uVar16,uVar18);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_24 + 0x18));
          uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_24 + 0x28));
          uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(local_24 + 0x38));
          uVar17 = PackedFloatingADD(uVar15,uVar17);
          uVar15 = PackedFloatingADD(uVar16,uVar21);
          *(undefined8 *)local_14 = uVar17;
          uVar17 = PackedFloatingADD(uVar20,uVar15);
          pfVar8[2] = (float)uVar17;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          do {
            *pfVar8 = 0.0;
            iVar9 = 0;
            pfVar11 = (float *)(((int)local_24 - (int)local_14) + (int)pfVar8);
            do {
              pfVar2 = pfVar13 + iVar9;
              fVar24 = *pfVar11;
              iVar9 = iVar9 + 1;
              pfVar11 = pfVar11 + 4;
              *pfVar8 = *pfVar2 * fVar24 + *pfVar8;
            } while (iVar9 < 3);
            iVar9 = iVar6 + iVar9 * 4;
            iVar6 = iVar6 + 1;
            *pfVar8 = *(float *)(local_24 + iVar9 * 4) + *pfVar8;
            pfVar8 = pfVar8 + 1;
            this_00 = local_2c;
          } while (iVar6 < 3);
        }
        local_34 = local_34 + 1;
        local_14 = local_14 + 3;
      } while (local_34 < 3);
    }
    else {
      iVar6 = 0;
      poVar12 = this_00;
      pfVar13 = local_14c;
      do {
        this_00 = local_2c;
        piVar5 = *(int **)(poVar12 + 0x28);
        iVar9 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        pfVar8 = (float *)(piVar5[0x10] +
                          (uint)*(ushort *)
                                 ((uint)*(byte *)(piVar5 + 1) * local_48 + 2 + iVar9 + *piVar5) *
                          0xc);
        *pfVar13 = *pfVar8;
        pfVar13[1] = pfVar8[1];
        pfVar13[2] = pfVar8[2];
        poVar12 = this_00;
        pfVar13 = pfVar13 + 3;
      } while (iVar6 < 3);
    }
    m3dPolyApplyBasisCoord((m3dPOLY *)&local_150,(float)&local_20,local_10,local_8);
    local_58 = local_1c;
    local_1c = local_1c + ___real_3f000000;
    scnSCENE::ConstrSphere
              (gsScenePtr,(m3dV *)&local_20,(m3dV *)&local_20,1.5,0x10,(cdtREFINE *)&local_44,
               (cdtINFO *)0x0);
    paVar1 = local_54;
    iVar6 = (**(code **)(*(int *)local_54 + 0x30))(&local_20);
    if ((iVar6 != 0) &&
       (iVar6 = scnSCENE::GetClosestPoint
                          (gsScenePtr,(m3dV *)&local_20,0.7,0,(cdtREFINE *)&local_44,(cdtINFO *)0x0)
       , iVar6 == 0)) {
      local_1c = local_58;
      puVar10 = (undefined4 *)(*(int *)(paVar1 + 0x3c) + local_28);
      local_28 = local_28 + 0x1c;
      *puVar10 = local_20;
      puVar10[1] = local_58;
      puVar10[2] = local_18;
      local_30 = local_30 + 1;
      if (*(int *)(paVar1 + 0x40) <= local_30) {
        *(int *)(paVar1 + 0x40) = local_30;
        return;
      }
    }
    local_38 = local_38 + 1;
  } while (local_38 < *(int *)(paVar1 + 0x40) * 10);
  *(int *)(paVar1 + 0x40) = local_30;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_area.cpp
   addr: 00538640 */

void __thiscall aiAREA::FillBoundaryPoly(aiAREA *this)

{
  int iVar1;
  int iVar2;
  aiAREA *paVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_a8;
  int local_a4;
  undefined4 local_a0 [40];
  
  *(undefined4 *)(this + 0x44) = 0;
  local_a8 = 0;
  if (0 < *(int *)(*(int *)(this + 0x34) + 0x10)) {
    do {
      scnDOMAIN::GetPoly((scnDOMAIN *)this,local_a8,(m2dPOLY *)&local_a4);
      iVar2 = 0;
      if (0 < local_a4) {
        puVar5 = local_a0;
        do {
          iVar1 = *(int *)(this + 0x44);
          *(int *)(this + 0x44) = iVar1 + 1;
          if (0x13 < iVar1 + 1) {
            return;
          }
          iVar2 = iVar2 + 1;
          *(undefined4 *)(this + iVar1 * 8 + 0x48) = *puVar5;
          *(undefined4 *)(this + iVar1 * 8 + 0x4c) = puVar5[1];
          iVar4 = iVar1 + -1;
          *(undefined4 *)(this + iVar1 * 8 + 0xe8) = local_a0[(iVar2 % local_a4) * 2];
          *(undefined4 *)(this + iVar1 * 8 + 0xec) = local_a0[(iVar2 % local_a4) * 2 + 1];
          if (-1 < iVar4) {
            paVar3 = this + iVar4 * 8 + 0x4c;
            iVar6 = iVar4;
            do {
              if (((ABS(*(float *)(this + iVar1 * 8 + 0x4c) - *(float *)paVar3) +
                    ABS(*(float *)(this + iVar1 * 8 + 0x48) - *(float *)(paVar3 + -4)) <
                    _DAT_005dd5e8) &&
                  (ABS(*(float *)(this + iVar1 * 8 + 0xec) - *(float *)(paVar3 + 0xa0)) +
                   ABS(*(float *)(this + iVar1 * 8 + 0xe8) - *(float *)(paVar3 + 0x9c)) <
                   _DAT_005dd5e8)) ||
                 ((ABS(*(float *)(this + iVar1 * 8 + 0x4c) - *(float *)(paVar3 + 0xa0)) +
                   ABS(*(float *)(this + iVar1 * 8 + 0x48) - *(float *)(paVar3 + 0x9c)) <
                   _DAT_005dd5e8 &&
                  (ABS(*(float *)(this + iVar1 * 8 + 0xec) - *(float *)paVar3) +
                   ABS(*(float *)(this + iVar1 * 8 + 0xe8) - *(float *)(paVar3 + -4)) <
                   _DAT_005dd5e8)))) {
                if (-1 < iVar6) {
                  if (iVar6 < iVar4) {
                    iVar4 = iVar4 - iVar6;
                    paVar3 = this + iVar6 * 8 + 0x48;
                    do {
                      *(undefined4 *)paVar3 = *(undefined4 *)(paVar3 + 8);
                      *(undefined4 *)(paVar3 + 4) = *(undefined4 *)(paVar3 + 0xc);
                      *(undefined4 *)(paVar3 + 0xa0) = *(undefined4 *)(paVar3 + 0xa8);
                      *(undefined4 *)(paVar3 + 0xa4) = *(undefined4 *)(paVar3 + 0xac);
                      paVar3 = paVar3 + 8;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                  *(int *)(this + 0x44) = *(int *)(this + 0x44) + -2;
                }
                break;
              }
              iVar6 = iVar6 + -1;
              paVar3 = paVar3 + -8;
            } while (-1 < iVar6);
          }
          puVar5 = puVar5 + 2;
        } while (iVar2 < local_a4);
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(int *)(*(int *)(this + 0x34) + 0x10));
  }
  *(uint *)(this + 0x188) = *(uint *)(this + 0x188) | 0x20000;
  return;
}




/* from: gs_shared:ai_area.cpp
   addr: 00538890 */

int __thiscall aiAREA::ISectLSegBoundaryXZ(aiAREA *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  int iVar1;
  int iVar2;
  aiAREA *paVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(this + 0x34) != 0) {
    if ((*(uint *)(this + 0x188) & 0x10000) == 0) {
      iVar1 = scnDOMAIN::ISectLSegBoundaryXZ
                        ((scnDOMAIN *)this,param_1,(int)param_2,(m3dBOX *)param_3);
      return iVar1;
    }
    if ((*(uint *)(this + 0x188) & 0x20000) == 0) {
      FillBoundaryPoly(this);
    }
    iVar1 = 0;
    local_10 = *(undefined4 *)param_1;
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = *(undefined4 *)param_2;
    local_14 = *(undefined4 *)(param_2 + 8);
    if (0 < *(int *)(this + 0x44)) {
      paVar3 = this + 0x48;
      do {
        iVar2 = m2dIsectLSegLSeg((m2dV *)paVar3,(m2dV *)paVar3 + 0xa0,(m2dV *)&local_10,
                                 (m2dV *)&local_18,(m2dV *)&local_8);
        if (iVar2 != 0) {
          *(undefined4 *)param_3 = local_8;
          *(undefined4 *)(param_3 + 8) = local_4;
          *(undefined4 *)(param_3 + 4) = 0;
          return 1;
        }
        iVar1 = iVar1 + 1;
        paVar3 = (aiAREA *)((m2dV *)paVar3 + 8);
      } while (iVar1 < *(int *)(this + 0x44));
    }
  }
  return 0;
}

