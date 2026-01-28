
/* from: engine:scn_coll.cpp
   addr: 004CB3F0 */

int __thiscall
scnSCENE::MakeAnimList
          (scnSCENE *this,m3dBOX *param_1,cdtREFINE *param_2,scnAOBJ *param_3,int param_4)

{
  m3dOBB *pmVar1;
  animINST *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  scnSCENE *local_c4;
  m3dV amStack_c0 [96];
  m3dV amStack_60 [96];
  
  local_e4 = 1;
  local_e8 = &m3dBOX::_vftable_;
  local_c4 = this;
  cdtCOLL_ANIM::MakeIndList(*(cdtCOLL_ANIM **)(this + 0x54),param_1,cdtOflPtr,0);
  iVar4 = 0;
  local_c8 = 0;
  if (0 < *(int *)cdtOflPtr) {
    do {
      this_00 = InstPtr(this,(uint)*(ushort *)(*(int *)(cdtOflPtr + 4) + local_c8 * 2));
      iVar2 = IsEmptyInst(this,this_00);
      if (((iVar2 == 0) &&
          (((((byte)param_2[4] & 2) == 0 || (((byte)this_00[4] & 0x48) != 0)) &&
           ((*(uint *)(this_00 + 4) & 0x10) == 0)))) &&
         (((((byte)this[0x40] & 1) != 0 || ((*(uint *)(this_00 + 4) & 2) == 0)) &&
          (iVar2 = (*(code *)**(undefined4 **)param_2)(this_00), iVar2 != 0)))) {
        animINST::Validate(this_00,0x100);
        if (*(int *)(this_00 + 0x100) != 0) {
          pmVar1 = *(m3dOBB **)(*(int *)(*(int *)(this_00 + 0x100) + 8) + 4);
          iVar2 = *(int *)(pmVar1 + 4);
          if (iVar2 == 1) {
            local_e4 = *(undefined4 *)(pmVar1 + 4);
            uStack_e0 = *(undefined4 *)(pmVar1 + 8);
            uStack_dc = *(undefined4 *)(pmVar1 + 0xc);
            uStack_d8 = *(undefined4 *)(pmVar1 + 0x10);
            uStack_d4 = *(undefined4 *)(pmVar1 + 0x14);
            uStack_d0 = *(undefined4 *)(pmVar1 + 0x18);
            uStack_cc = *(undefined4 *)(pmVar1 + 0x1c);
          }
          else if (iVar2 == 2) {
            m3dPRISM::GetVertices((m3dPRISM *)pmVar1,amStack_c0);
            m3dBOX::CalcStart((m3dBOX *)&local_e8);
            m3dBOX::CalcUpdate((m3dBOX *)&local_e8,amStack_c0,8);
          }
          else if (iVar2 == 4) {
            m3dOBB::GetVertices(pmVar1,amStack_c0);
            m3dBOX::CalcStart((m3dBOX *)&local_e8);
            m3dBOX::CalcUpdate((m3dBOX *)&local_e8,amStack_c0,8);
          }
          iVar2 = m3dBOX::IsIsectBox((m3dBOX *)&local_e8,param_1);
          if (iVar2 != 1) {
            animINST::Validate(this_00,0x20);
            if (*(int *)(this_00 + 0xf4) == 0) {
              if (param_4 <= iVar4) {
                return iVar4;
              }
              iVar4 = iVar4 + 1;
              *(animINST **)(param_3 + iVar4 * 8 + -8) = this_00;
              *(undefined4 *)(param_3 + iVar4 * 8 + -4) = 0xffffffff;
            }
            else {
              iVar2 = 0;
              if (0 < *(int *)(this_00 + 0xf4)) {
                iVar5 = 0;
                do {
                  pmVar1 = *(m3dOBB **)(*(int *)(*(int *)(this_00 + 0xf8) + iVar5 + 8) + 4);
                  iVar3 = *(int *)(pmVar1 + 4);
                  if (iVar3 == 1) {
                    local_e4 = *(undefined4 *)(pmVar1 + 4);
                    uStack_e0 = *(undefined4 *)(pmVar1 + 8);
                    uStack_dc = *(undefined4 *)(pmVar1 + 0xc);
                    uStack_d8 = *(undefined4 *)(pmVar1 + 0x10);
                    uStack_d4 = *(undefined4 *)(pmVar1 + 0x14);
                    uStack_d0 = *(undefined4 *)(pmVar1 + 0x18);
                    uStack_cc = *(undefined4 *)(pmVar1 + 0x1c);
                  }
                  else if (iVar3 == 2) {
                    m3dPRISM::GetVertices((m3dPRISM *)pmVar1,amStack_60);
                    m3dBOX::CalcStart((m3dBOX *)&local_e8);
                    m3dBOX::CalcUpdate((m3dBOX *)&local_e8,amStack_60,8);
                  }
                  else if (iVar3 == 4) {
                    m3dOBB::GetVertices(pmVar1,amStack_60);
                    m3dBOX::CalcStart((m3dBOX *)&local_e8);
                    m3dBOX::CalcUpdate((m3dBOX *)&local_e8,amStack_60,8);
                  }
                  iVar3 = m3dBOX::IsIsectBox((m3dBOX *)&local_e8,param_1);
                  if (iVar3 != 1) {
                    if (param_4 <= iVar4) {
                      return iVar4;
                    }
                    iVar4 = iVar4 + 1;
                    *(animINST **)(param_3 + iVar4 * 8 + -8) = this_00;
                    *(int *)(param_3 + iVar4 * 8 + -4) = iVar2;
                  }
                  iVar2 = iVar2 + 1;
                  iVar5 = iVar5 + 0x24;
                  this = local_c4;
                } while (iVar2 < *(int *)(this_00 + 0xf4));
              }
            }
          }
        }
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < *(int *)cdtOflPtr);
  }
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CB6D0 */

int __thiscall
scnSCENE::MakeAnimList
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,cdtREFINE *param_4,
          scnAOBJ *param_5,int param_6)

{
  int iVar1;
  animINST *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  uint local_3c;
  int local_34;
  float local_2c;
  float local_28;
  float local_24;
  undefined **local_20;
  undefined4 local_1c;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  local_3c = (uint)(ABS(param_3) < _DAT_005dbbb8);
  if ((float)local_3c == ___real_00000000) {
    m3dBOX::MakePointPoint((m3dBOX *)&local_20,param_1,param_2);
    m3dBOX::Expand((m3dBOX *)&local_20,param_3);
    cdtCOLL_ANIM::MakeIndList(*(cdtCOLL_ANIM **)(this + 0x54),(m3dBOX *)&local_20,cdtOflPtr,0);
    uVar6 = extraout_MM1_00;
  }
  else {
    cdtCOLL_ANIM::MakeIndListRay(*(cdtCOLL_ANIM **)(this + 0x54),param_1,param_2,cdtOflPtr,0);
    uVar6 = extraout_MM1;
  }
  local_2c = *(float *)param_2 - *(float *)param_1;
  local_28 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_24 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar8 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)fVar8;
    uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    param_2 = (m3dV *)uVar6;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar8);
  }
  iVar1 = _m3dNormalize((m3dV *)&local_2c);
  if (iVar1 == 0) {
    local_2c = _m3dVUnitY;
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
  }
  iVar1 = 0;
  local_34 = 0;
  if (0 < *(int *)cdtOflPtr) {
    do {
      this_00 = InstPtr(this,(uint)*(ushort *)(*(int *)(cdtOflPtr + 4) + local_34 * 2));
      iVar2 = IsEmptyInst(this,this_00);
      if (((iVar2 == 0) &&
          ((((((byte)param_4[4] & 2) == 0 || (((byte)this_00[4] & 0x48) != 0)) &&
            ((*(uint *)(this_00 + 4) & 0x10) == 0)) &&
           ((((byte)this[0x40] & 1) != 0 || ((*(uint *)(this_00 + 4) & 2) == 0)))))) &&
         (iVar2 = (*(code *)**(undefined4 **)param_4)(this_00), iVar2 != 0)) {
        animINST::Validate(this_00,0x100);
        if ((*(abvBVOL **)(this_00 + 0x100) != (abvBVOL *)0x0) &&
           (iVar2 = abvBVOL::IsIsectCyl(*(abvBVOL **)(this_00 + 0x100),param_1,(m3dV *)&local_2c,
                                        (float)param_2,param_3), iVar2 != 0)) {
          animINST::Validate(this_00,0x20);
          if (*(int *)(this_00 + 0xf4) == 0) {
            if (param_6 <= iVar1) {
              return iVar1;
            }
            iVar1 = iVar1 + 1;
            *(animINST **)(param_5 + iVar1 * 8 + -8) = this_00;
            *(undefined4 *)(param_5 + iVar1 * 8 + -4) = 0xffffffff;
          }
          else {
            iVar2 = 0;
            if (0 < *(int *)(this_00 + 0xf4)) {
              iVar4 = 0;
              do {
                local_3c = (uint)(ABS(param_3) < _DAT_005dbbb8);
                if (((float)local_3c != ___real_00000000) ||
                   (iVar3 = abvBVOL::IsIsectCyl((abvBVOL *)(*(int *)(this_00 + 0xf8) + iVar4),
                                                param_1,(m3dV *)&local_2c,(float)param_2,param_3),
                   iVar3 != 0)) {
                  if (param_6 <= iVar1) {
                    return iVar1;
                  }
                  iVar1 = iVar1 + 1;
                  *(animINST **)(param_5 + iVar1 * 8 + -8) = this_00;
                  *(int *)(param_5 + iVar1 * 8 + -4) = iVar2;
                }
                iVar2 = iVar2 + 1;
                iVar4 = iVar4 + 0x24;
              } while (iVar2 < *(int *)(this_00 + 0xf4));
            }
          }
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)cdtOflPtr);
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CBA20 */

int __thiscall
scnSCENE::ConstrSphere_1
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,cdtREFINE *param_5,
          cdtINFO *param_6)

{
  m3dV *pmVar1;
  int iVar2;
  cdtINFO *pcVar3;
  ulonglong uVar4;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  cdtINFO local_20 [16];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar1 = param_2;
  fVar7 = *(float *)param_2;
  pcVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + 4;
  }
  fVar7 = (fVar7 - *(float *)param_1) * (fVar7 - *(float *)param_1) +
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8));
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_2 = (m3dV *)uVar5;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar7);
  }
  if (((param_4 & 0x10U) == 0) && ((float)param_2 < _DAT_005dbbb8 * ___real_41200000)) {
    return 0;
  }
  iVar2 = GetClosestPoint(this,pmVar1,_DAT_005dbbb8 + param_3,param_4,param_5,local_20);
  if (iVar2 == 0) {
    return 0;
  }
  local_38 = *(float *)pmVar1 - local_10;
  local_34 = *(float *)(pmVar1 + 4) - local_c;
  local_30 = *(float *)(pmVar1 + 8) - local_8;
  iVar2 = _m3dNormalize((m3dV *)&local_38);
  if (iVar2 == 0) {
    GetCDTFace(this,local_20,(m3dPOLY *)0x0,(m3dV *)&local_38);
  }
  fVar7 = param_3 - local_4;
  local_38 = local_38 * fVar7;
  local_34 = local_34 * fVar7;
  local_30 = local_30 * fVar7;
  *(float *)pmVar1 = local_38 + *(float *)pmVar1;
  *(float *)(pmVar1 + 4) = local_34 + *(float *)(pmVar1 + 4);
  *(float *)(pmVar1 + 8) = local_30 + *(float *)(pmVar1 + 8);
  iVar2 = GetClosestPoint(this,pmVar1,param_3,param_4,param_5,local_20);
  if (iVar2 != 0) {
    local_44 = *(float *)pmVar1 - local_10;
    local_40 = *(float *)(pmVar1 + 4) - local_c;
    local_3c = *(float *)(pmVar1 + 8) - local_8;
    fVar7 = local_44 * local_44 + local_40 * local_40 + local_3c * local_3c;
    if (m3dSimdType == 0) {
      fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) *
                        fVar7);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fVar7;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      param_2 = (m3dV *)uVar5;
      FastExitMediaState();
    }
    else {
      param_2 = (m3dV *)SQRT(fVar7);
    }
    if (___real_3a83126f < (float)param_2) {
      m3dNormalize((m3dV *)&local_44);
      local_4 = param_3 - local_4;
      local_44 = local_44 * local_4;
      local_40 = local_40 * local_4;
      local_3c = local_3c * local_4;
      fVar7 = local_44 * local_44 + local_40 * local_40 + local_3c * local_3c;
      if (m3dSimdType == 0) {
        fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) *
                          fVar7);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)fVar7;
        uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar4);
        uVar6 = PackedFloatingMUL(uVar5,uVar5);
        uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
        uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
        uVar5 = PackedFloatingMUL(uVar5,uVar4);
        param_2 = (m3dV *)uVar5;
        FastExitMediaState();
      }
      else {
        param_2 = (m3dV *)SQRT(fVar7);
      }
      if (___real_3a83126f < (float)param_2) {
        *(float *)pmVar1 = local_44 + *(float *)pmVar1;
        *(float *)(pmVar1 + 4) = local_40 + *(float *)(pmVar1 + 4);
        *(float *)(pmVar1 + 8) = local_3c + *(float *)(pmVar1 + 8);
        iVar2 = GetClosestPoint(this,pmVar1,param_3 - _DAT_005dbbb8,param_4,param_5,local_20);
        if (iVar2 != 0) {
          if ((param_4 & 0x100U) != 0) {
            local_2c = local_44 + local_38;
            local_28 = local_40 + local_34;
            local_24 = local_3c + local_30;
            fVar7 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
            if (m3dSimdType == 0) {
              fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
              fVar8 = auVar9._0_4_;
              param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                                 (`float___cdecl_m3dSqrt(float)'::__l2::three -
                                 fVar7 * fVar8 * fVar8) * fVar7);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar4 = (ulonglong)(uint)fVar7;
              uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1_01,uVar4);
              uVar6 = PackedFloatingMUL(uVar5,uVar5);
              uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
              uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
              uVar5 = PackedFloatingMUL(uVar5,uVar4);
              param_2 = (m3dV *)uVar5;
              FastExitMediaState();
            }
            else {
              param_2 = (m3dV *)SQRT(fVar7);
            }
            if ((float)param_2 <= ___real_3a83126f) goto LAB_004cbf51;
            m3dNormalize((m3dV *)&local_2c);
            *(float *)pmVar1 = local_2c + *(float *)pmVar1;
            *(float *)(pmVar1 + 4) = local_28 + *(float *)(pmVar1 + 4);
            *(float *)(pmVar1 + 8) = local_24 + *(float *)(pmVar1 + 8);
            iVar2 = GetClosestPoint(this,pmVar1,param_3 - _DAT_005dbbb8,param_4,param_5,local_20);
            if (iVar2 == 0) goto LAB_004cbf51;
          }
          *(undefined4 *)pmVar1 = *(undefined4 *)param_1;
          *(undefined4 *)(pmVar1 + 4) = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(pmVar1 + 8) = *(undefined4 *)(param_1 + 8);
        }
      }
    }
  }
LAB_004cbf51:
  if (param_6 != (cdtINFO *)0x0) {
    pcVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_6 = param_6 + 4;
    }
  }
  return 1;
}




/* from: engine:scn_coll.cpp
   addr: 004CBFA0 */

int __thiscall
scnSCENE::ConstrSphere
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,cdtREFINE *param_5,
          cdtINFO *param_6)

{
  int iVar1;
  cdtINFO *pcVar2;
  
  if (param_6 != (cdtINFO *)0x0) {
    pcVar2 = param_6;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar2 = 0;
      pcVar2 = pcVar2 + 4;
    }
  }
  iVar1 = ConstrSphere(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CBFE0 */

int __thiscall
scnSCENE::ConstrSphere
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,cdtREFINE *param_5,
          cdtINFO *param_6)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  int iVar3;
  cdtINFO *pcVar4;
  ulonglong uVar5;
  undefined8 in_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  cdtINFO local_20 [32];
  
  pmVar1 = param_1;
  pcVar4 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar4 = 0;
    pcVar4 = pcVar4 + 4;
  }
  fVar8 = (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
          (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) *
          (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) +
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) *
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)fVar8;
    uVar6 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    param_1 = (m3dV *)uVar6;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar8);
  }
  param_1 = (m3dV *)-(int)ROUND(-((param_3 * ___real_3e99999a + (float)param_1) / param_3) -
                                `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  if (((param_4 & 0x10U) != 0) && (param_1 == (m3dV *)0x0)) {
    param_1 = (m3dV *)0x1;
  }
  pmVar2 = param_1;
  local_38 = *(float *)pmVar1;
  local_34 = *(float *)(pmVar1 + 4);
  local_30 = *(float *)(pmVar1 + 8);
  local_24 = ___real_3f800000 / (float)(int)param_1;
  param_1 = (m3dV *)0x0;
  local_2c = (*(float *)param_2 - *(float *)pmVar1) * local_24;
  local_28 = (*(float *)(param_2 + 4) - *(float *)(pmVar1 + 4)) * local_24;
  local_24 = (*(float *)(param_2 + 8) - *(float *)(pmVar1 + 8)) * local_24;
  if (0 < (int)pmVar2) {
    do {
      local_44 = local_38 + local_2c;
      local_40 = local_34 + local_28;
      local_3c = local_30 + local_24;
      iVar3 = ConstrSphere_1(this,(m3dV *)&local_38,(m3dV *)&local_44,param_3,param_4,param_5,
                             local_20);
      if (iVar3 != 0) {
        if ((int)pmVar2 < 2) {
          *(float *)param_2 = local_44;
          *(float *)(param_2 + 4) = local_40;
          *(float *)(param_2 + 8) = local_3c;
        }
        else {
          m3dClampVector_L((m3dV *)&local_44,param_2,param_3 * ___real_3f666666);
          iVar3 = ConstrSphere_1(this,(m3dV *)&local_44,param_2,param_3,param_4,param_5,param_6);
          if (iVar3 == 0) {
            return 0;
          }
        }
        if (param_6 != (cdtINFO *)0x0) {
          pcVar4 = local_20;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)param_6 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            param_6 = param_6 + 4;
          }
        }
        return 1;
      }
      local_34 = local_40;
      local_38 = local_44;
      param_1 = param_1 + 1;
      local_30 = local_3c;
    } while ((int)param_1 < (int)pmVar2);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CC250 */

int __thiscall
scnSCENE::GetClosestPoint
          (scnSCENE *this,m3dV *param_1,float param_2,int param_3,cdtREFINE *param_4,
          cdtINFO *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  if (param_5 == (cdtINFO *)0x0) {
    param_5 = (cdtINFO *)&local_20;
  }
  if (((byte)param_4[4] & 1) == 0) {
    uVar2 = (**(code **)(**(int **)(this + 0x50) + 0x68))(param_1,param_2,param_3,param_5);
    if (uVar2 != 0) {
      param_2 = *(float *)(param_5 + 0x1c);
    }
  }
  if (((*(uint *)(param_4 + 4) & 2) != 0) && ((*(uint *)(param_4 + 4) & 8) != 0)) {
    return uVar2;
  }
  uVar1 = GetClosestPointAnim(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1 | uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CC310 */

int __thiscall
scnSCENE::GetClosestPointAnim
          (scnSCENE *this,m3dV *param_1,float param_2,int param_3,cdtREFINE *param_4,
          cdtINFO *param_5)

{
  animINST *paVar1;
  char *pcVar2;
  int iVar3;
  abvBVOL *this_00;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  int local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  int local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  undefined4 local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  int local_4b8;
  scnSCENE *local_4b4;
  scnAOBJ local_4b0 [4];
  int aiStack_4ac [299];
  
  local_4d4 = _m3dVZero;
  local_4d0 = DAT_00963740;
  local_4cc = DAT_00963744;
  local_4e4 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  local_4d8 = 0;
  local_4c8 = 0;
  local_4b4 = this;
  local_4b8 = MakeAnimList(this,param_1,param_1,param_2,param_4,local_4b0,0x96);
  local_4f8 = 0;
  local_4fc = param_2;
  local_4e8 = 0;
  if (local_4b8 < 1) {
    local_4f8 = 0;
  }
  else {
    do {
      iVar3 = local_4e8;
      paVar1 = *(animINST **)(local_4b0 + local_4e8 * 8);
      pcVar2 = *(char **)(paVar1 + 0x20);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      pcVar2 = strstr(pcVar2,s_lustra);
      if (pcVar2 != (char *)0x0) goto LAB_004cc70d;
      if (((param_3 & 0x20U) == 0) || (iVar3 = aiStack_4ac[iVar3 * 2], iVar3 < 0)) {
LAB_004cc6e1:
        iVar3 = DistPointInst(local_4b4,paVar1,param_1,local_4fc,param_4,param_5);
        if (iVar3 != 0) {
LAB_004cc6fe:
          local_4fc = *(float *)(param_5 + 0x1c);
          local_4f8 = 1;
        }
      }
      else {
        if ((char)param_3 < '\0') {
          if (((byte)paVar1[4] & 0x40) == 0) {
            this_00 = (abvBVOL *)(*(int *)(paVar1 + 0xf8) + iVar3 * 0x24);
            goto LAB_004cc415;
          }
          goto LAB_004cc6e1;
        }
        if (((byte)paVar1[4] & 0x48) != 0) goto LAB_004cc6e1;
        this_00 = (abvBVOL *)(*(int *)(paVar1 + 0xf8) + iVar3 * 0x24);
LAB_004cc415:
        if (this_00 == (abvBVOL *)0x0) goto LAB_004cc6e1;
        iVar3 = abvBVOL::DistPoint(this_00,param_1,local_4fc,param_5);
        if (iVar3 != 0) {
          if (iVar3 == 2) {
            local_4c4 = *(float *)(this_00 + 0x14);
            local_508 = *(float *)param_1 - local_4c4;
            local_4c0 = *(float *)(this_00 + 0x18);
            local_4bc = *(float *)(this_00 + 0x1c);
            local_504 = *(float *)(param_1 + 4) - local_4c0;
            local_500 = *(float *)(param_1 + 8) - local_4bc;
            iVar3 = _m3dNormalize((m3dV *)&local_508);
            if (iVar3 == 0) {
              local_508 = _m3dVUnitX;
              local_504 = DAT_005f9988;
              local_500 = DAT_005f998c;
            }
            fVar7 = *(float *)(this_00 + 0x20) + ___real_3f800000;
            local_4f4 = local_508 * fVar7 + local_4c4;
            local_4f0 = local_504 * fVar7 + local_4c0;
            local_4ec = local_500 * fVar7 + local_4bc;
            local_508 = -local_508;
            local_504 = -local_504;
            local_500 = -local_500;
            iVar3 = abvBVOL::IsectRay(this_00,(m3dV *)&local_4f4,(m3dV *)&local_508,fVar7,
                                      (cdtINFO *)&local_4e4);
            if (iVar3 == 1) {
              local_50c = (local_4d4 - *(float *)param_1) * (local_4d4 - *(float *)param_1) +
                          (local_4d0 - *(float *)(param_1 + 4)) *
                          (local_4d0 - *(float *)(param_1 + 4)) +
                          (local_4cc - *(float *)(param_1 + 8)) *
                          (local_4cc - *(float *)(param_1 + 8));
              uVar5 = extraout_MM1;
              if (m3dSimdType == 0) {
                local_50c = local_50c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                auVar8 = rsqrtss(ZEXT416((uint)local_50c),ZEXT416((uint)local_50c));
                fVar7 = auVar8._0_4_;
                local_50c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                            (`float___cdecl_m3dSqrt(float)'::__l2::three - local_50c * fVar7 * fVar7
                            ) * local_50c;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar4 = (ulonglong)(uint)local_50c;
                uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
                uVar6 = PackedFloatingMUL(uVar5,uVar5);
                uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
                uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
                uVar5 = PackedFloatingMUL(uVar5,uVar4);
                local_50c = (float)uVar5;
                FastExitMediaState();
              }
              else {
                local_50c = SQRT(local_50c);
              }
              if (local_4fc <= -local_50c) {
                *(undefined4 *)(param_5 + 0xc) = local_4d8;
                local_50c = (local_4d4 - *(float *)param_1) * (local_4d4 - *(float *)param_1) +
                            (local_4d0 - *(float *)(param_1 + 4)) *
                            (local_4d0 - *(float *)(param_1 + 4)) +
                            (local_4cc - *(float *)(param_1 + 8)) *
                            (local_4cc - *(float *)(param_1 + 8));
                if (m3dSimdType == 0) {
                  local_50c = local_50c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                  auVar8 = rsqrtss(ZEXT416((uint)local_50c),ZEXT416((uint)local_50c));
                  fVar7 = auVar8._0_4_;
                  local_50c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              local_50c * fVar7 * fVar7) * local_50c;
                }
                else if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar4 = (ulonglong)(uint)local_50c;
                  uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
                  uVar6 = PackedFloatingMUL(uVar5,uVar5);
                  uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
                  uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
                  uVar5 = PackedFloatingMUL(uVar5,uVar4);
                  local_50c = (float)uVar5;
                  FastExitMediaState();
                }
                else {
                  local_50c = SQRT(local_50c);
                }
                *(float *)(param_5 + 0x10) = local_4d4;
                *(float *)(param_5 + 0x14) = local_4d0;
                *(float *)(param_5 + 0x1c) = -local_50c;
                *(float *)(param_5 + 0x18) = local_4cc;
                goto LAB_004cc6ca;
              }
            }
            goto LAB_004cc70d;
          }
LAB_004cc6ca:
          *(animINST **)(param_5 + 4) = paVar1;
          *(int *)(param_5 + 8) = aiStack_4ac[local_4e8 * 2];
          *(uint *)param_5 = *(uint *)param_5 & 0xfffffeff;
          goto LAB_004cc6fe;
        }
      }
LAB_004cc70d:
      local_4e8 = local_4e8 + 1;
    } while (local_4e8 < local_4b8);
    if (local_4f8 != 0) {
      *(uint *)param_5 = *(uint *)param_5 | 2;
      return local_4f8;
    }
  }
  return local_4f8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CC750 */

int __thiscall
scnSCENE::DistPointInst
          (scnSCENE *this,animINST *param_1,m3dV *param_2,float param_3,cdtREFINE *param_4,
          cdtINFO *param_5)

{
  objOBJ *poVar1;
  int iVar2;
  m3dSPHERE *pmVar3;
  int iVar4;
  cdtINFO *pcVar5;
  uint *puVar6;
  int iStack_a4;
  float local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  uint local_88;
  animINST *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68 [25];
  undefined4 uStack_4;
  
  cdtCOLL::cdtCOLL((cdtCOLL *)local_68);
  local_88 = 0;
  local_84 = (animINST *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_74 = DAT_00963740;
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  local_78 = _m3dVZero;
  local_70 = DAT_00963744;
  local_6c = 0;
  animINST::Validate(param_1,0x209);
  local_a0 = param_3;
  pcVar5 = param_5;
  puVar6 = &local_88;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  if ((*(cdtCOLL_INST **)(param_1 + 0x144) == (cdtCOLL_INST *)0x0) ||
     (iVar4 = cdtCOLL_INST::IsCDTFrame(*(cdtCOLL_INST **)(param_1 + 0x144)), iVar4 == 0)) {
    iVar4 = 0;
    local_9c = 0;
    if (0 < *(int *)(param_1 + 0x128)) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 300) + iVar4 * 4);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) &&
           (iVar2 = (**(code **)(*(int *)param_4 + 4))(iVar2), iVar2 != 0)) {
          poVar1 = *(objOBJ **)(*(int *)(param_1 + 300) + iVar4 * 4);
          iVar2 = *(int *)(poVar1 + 0x28);
          pmVar3 = animGetObjBSphere(poVar1);
          *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(pmVar3 + 4);
          *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(pmVar3 + 8);
          *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(pmVar3 + 0xc);
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(pmVar3 + 0x10);
          *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(pmVar3 + 0x14);
          uStack_4 = *(undefined4 *)(*(int *)(param_1 + 300) + iVar4 * 4);
          iVar2 = cdtCOLL_OBJ::GetClosestPoint((cdtCOLL_OBJ *)local_68,param_2,local_a0,0,param_5);
          if (iVar2 != 0) {
            iStack_a4 = *(int *)(param_5 + 8);
            local_a0 = *(float *)(param_5 + 0x1c);
            uStack_98 = *(undefined4 *)(param_5 + 0x10);
            local_9c = 1;
            uStack_94 = *(undefined4 *)(param_5 + 0x14);
            uStack_90 = *(undefined4 *)(param_5 + 0x18);
            iStack_8c = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x128));
      if (local_9c != 0) {
        *(int *)(param_5 + 8) = iStack_8c;
        *(int *)(param_5 + 0xc) = iStack_a4;
        *(float *)(param_5 + 0x1c) = local_a0;
        *(animINST **)(param_5 + 4) = param_1;
        *(undefined4 *)(param_5 + 0x10) = uStack_98;
        *(undefined4 *)(param_5 + 0x14) = uStack_94;
        *(undefined4 *)(param_5 + 0x18) = uStack_90;
        *(uint *)param_5 = *(uint *)param_5 | 0x102;
      }
    }
  }
  else {
    iStack_a4 = (**(code **)(**(int **)(param_1 + 0x144) + 0x68))(param_2,param_3,0,&local_88);
    if (iStack_a4 != 0) {
      local_84 = param_1;
      local_88 = local_88 | 0x100;
    }
  }
  if ((*(cdtCOLL_INST **)(param_1 + 0x144) != (cdtCOLL_INST *)0x0) &&
     (iVar4 = cdtCOLL_INST::IsCDTFrame(*(cdtCOLL_INST **)(param_1 + 0x144)), iVar4 != 0)) {
    puVar6 = &local_88;
    for (iVar4 = 8; local_9c = iStack_a4, iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)param_5 = *puVar6;
      puVar6 = puVar6 + 1;
      param_5 = param_5 + 4;
    }
  }
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)local_68);
  return local_9c;
}




/* from: engine:scn_coll.cpp
   addr: 004CC9B0 */

int __thiscall
scnSCENE::DistPointObj
          (scnSCENE *this,objOBJ *param_1,m3dV *param_2,float param_3,int param_4,cdtINFO *param_5)

{
  uint uVar1;
  m3dSPHERE *pmVar2;
  int iVar3;
  undefined **local_68 [25];
  objOBJ *local_4;
  
  cdtCOLL::cdtCOLL((cdtCOLL *)local_68);
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  iVar3 = *(int *)(param_1 + 0x28);
  pmVar2 = animGetObjBSphere(param_1);
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(pmVar2 + 4);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(pmVar2 + 8);
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(pmVar2 + 0xc);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(pmVar2 + 0x10);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(pmVar2 + 0x14);
  local_4 = param_1;
  iVar3 = cdtCOLL_OBJ::GetClosestPoint((cdtCOLL_OBJ *)local_68,param_2,param_3,param_4,param_5);
  if (iVar3 == 0) {
    local_68[0] = &cdtCOLL_OBJ::_vftable_;
    cdtCOLL::~cdtCOLL((cdtCOLL *)local_68);
    return 0;
  }
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0xbc);
  *(int *)(param_5 + 8) = (int)*(short *)(param_1 + 0x1c);
  uVar1 = *(uint *)param_5;
  *(uint *)param_5 = uVar1 | 2;
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(uint *)param_5 = uVar1 | 0x102;
  }
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)local_68);
  return 1;
}




/* from: engine:scn_coll.cpp
   addr: 004CCA90 */

int __thiscall scnSCENE::CheckCDTInfo(scnSCENE *this,cdtINFO *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  objOBJ *poVar4;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 2) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || ((uVar1 & 0x100) != 0)) {
      iVar3 = *(int *)(param_1 + 8);
      if ((-1 < iVar3) && (-1 < *(int *)(param_1 + 0xc))) {
        if ((iVar2 == 0) || ((uVar1 & 0x100) == 0)) {
          if (*(int *)(this + 0x48) <= iVar3) {
            return 0;
          }
          poVar4 = *(objOBJ **)(*(int *)(this + 0x4c) + iVar3 * 4);
        }
        else {
          poVar4 = objFindID(*(objOBJ **)(iVar2 + 0x10),iVar3);
          if (poVar4 == (objOBJ *)0x0) {
            return 0;
          }
        }
        if (*(int *)(param_1 + 0xc) < *(int *)(poVar4 + 0x10)) {
          return 1;
        }
      }
    }
    else if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < *(int *)(iVar2 + 0xf4))) {
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_coll.cpp
   addr: 004CCB10 */

void __thiscall scnSCENE::GetCDTFace(scnSCENE *this,cdtINFO *param_1,m3dPOLY *param_2,m3dV *param_3)

{
  objOBJ *poVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  objOBJ *poVar9;
  m3dPOLY *pmVar10;
  int iVar11;
  m3dPOLY *pmVar12;
  m3dPOLY *pmVar13;
  int iVar14;
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
  int local_1c;
  
  iVar8 = CheckCDTInfo(this,param_1);
  if (iVar8 == 0) {
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = _m3dVUnitY;
      *(undefined4 *)(param_3 + 4) = DAT_005f9994;
      *(undefined4 *)(param_3 + 8) = DAT_005f9998;
      return;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    if (iVar8 == 0) {
      poVar9 = *(objOBJ **)(*(int *)(this + 0x4c) + *(int *)(param_1 + 8) * 4);
    }
    else {
      if ((*(uint *)param_1 & 0x100) == 0) {
        (**(code **)(**(int **)(*(int *)(iVar8 + 0xf8) + 8 + *(int *)(param_1 + 8) * 0x24) + 0x14))
                  (param_1,param_2,param_3);
        return;
      }
      poVar9 = objFindID(*(objOBJ **)(iVar8 + 0x10),*(int *)(param_1 + 8));
    }
    if (param_2 != (m3dPOLY *)0x0) {
      iVar8 = *(int *)(param_1 + 0xc);
      *(undefined4 *)param_2 = 3;
      if (((byte)*poVar9 & 1) == 0) {
        poVar1 = poVar9 + 0x3c;
        pmVar13 = param_2 + 4;
        local_1c = 0;
        do {
          piVar7 = *(int **)(poVar9 + 0x28);
          pfVar2 = (float *)(piVar7[0x10] +
                            (uint)*(ushort *)
                                   ((uint)*(byte *)(piVar7 + 1) * iVar8 + 2 + local_1c * 2 + *piVar7
                                   ) * 0xc);
          if (m3dSimdType == 0) {
            if (((uint)poVar1 & 0xf) == 0) {
              fVar25 = *pfVar2;
              fVar5 = pfVar2[1];
              fVar6 = pfVar2[2];
              fVar23 = fVar25 * *(float *)poVar1 + *(float *)(poVar9 + 0x6c) +
                       fVar5 * *(float *)(poVar9 + 0x4c) + fVar6 * *(float *)(poVar9 + 0x5c);
              fVar24 = fVar25 * *(float *)(poVar9 + 0x40) + *(float *)(poVar9 + 0x70) +
                       fVar5 * *(float *)(poVar9 + 0x50) + fVar6 * *(float *)(poVar9 + 0x60);
              fVar25 = fVar25 * *(float *)(poVar9 + 0x44) + *(float *)(poVar9 + 0x74) +
                       fVar5 * *(float *)(poVar9 + 0x54) + fVar6 * *(float *)(poVar9 + 100);
            }
            else {
              fVar25 = *pfVar2;
              fVar5 = pfVar2[1];
              fVar6 = pfVar2[2];
              fVar23 = fVar25 * (float)*(undefined8 *)poVar1 +
                       fVar5 * (float)*(undefined8 *)(poVar9 + 0x4c) +
                       fVar6 * (float)*(undefined8 *)(poVar9 + 0x5c) +
                       (float)*(undefined8 *)(poVar9 + 0x6c);
              fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                       fVar5 * (float)((ulonglong)*(undefined8 *)(poVar9 + 0x4c) >> 0x20) +
                       fVar6 * (float)((ulonglong)*(undefined8 *)(poVar9 + 0x5c) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(poVar9 + 0x6c) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(poVar9 + 0x44) +
                       fVar5 * (float)*(undefined8 *)(poVar9 + 0x54) +
                       fVar6 * (float)*(undefined8 *)(poVar9 + 100) +
                       (float)*(undefined8 *)(poVar9 + 0x74);
            }
            *(ulonglong *)pmVar13 = CONCAT44(fVar24,fVar23);
            *(float *)(pmVar13 + 8) = fVar25;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar15 = (undefined4)*(undefined8 *)pfVar2;
            uVar18 = CONCAT44(uVar15,uVar15);
            uVar15 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
            uVar21 = CONCAT44(uVar15,uVar15);
            uVar22 = CONCAT44(pfVar2[2],pfVar2[2]);
            uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)poVar1);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar9 + 0x4c));
            uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar9 + 0x5c));
            uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(poVar9 + 0x6c));
            uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(poVar9 + 0x44));
            uVar18 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar9 + 0x54));
            uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar9 + 100));
            uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(poVar9 + 0x74));
            uVar18 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingADD(uVar17,uVar22);
            *(undefined8 *)pmVar13 = uVar18;
            uVar18 = PackedFloatingADD(uVar21,uVar16);
            *(float *)(pmVar13 + 8) = (float)uVar18;
            FastExitMediaState();
          }
          else {
            iVar14 = 0;
            pmVar10 = pmVar13;
            do {
              *(float *)pmVar10 = 0.0;
              iVar11 = 0;
              pmVar12 = pmVar10 + ((int)poVar1 - (int)pmVar13);
              do {
                pfVar3 = pfVar2 + iVar11;
                fVar25 = *(float *)pmVar12;
                iVar11 = iVar11 + 1;
                pmVar12 = pmVar12 + 0x10;
                *(float *)pmVar10 = *pfVar3 * fVar25 + *(float *)pmVar10;
              } while (iVar11 < 3);
              iVar11 = iVar14 + iVar11 * 4;
              iVar14 = iVar14 + 1;
              *(float *)pmVar10 = *(float *)(poVar1 + iVar11 * 4) + *(float *)pmVar10;
              pmVar10 = pmVar10 + 4;
            } while (iVar14 < 3);
          }
          local_1c = local_1c + 1;
          pmVar13 = pmVar13 + 0xc;
        } while (local_1c < *(int *)param_2);
      }
      else {
        iVar14 = 0;
        pmVar13 = param_2 + 4;
        do {
          piVar7 = *(int **)(poVar9 + 0x28);
          iVar11 = iVar14 * 2;
          iVar14 = iVar14 + 1;
          puVar4 = (undefined4 *)
                   (piVar7[0x10] +
                   (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * iVar8 + 2 + iVar11 + *piVar7) *
                   0xc);
          *(undefined4 *)pmVar13 = *puVar4;
          *(undefined4 *)(pmVar13 + 4) = puVar4[1];
          *(undefined4 *)(pmVar13 + 8) = puVar4[2];
          pmVar13 = pmVar13 + 0xc;
        } while (iVar14 < *(int *)param_2);
      }
    }
    if (param_3 != (m3dV *)0x0) {
      if (poVar9 != (objOBJ *)0x0) {
        puVar4 = (undefined4 *)
                 (*(int *)(*(int *)(poVar9 + 0x28) + 0x44) + *(int *)(param_1 + 0xc) * 0xc);
        *(undefined4 *)param_3 = *puVar4;
        *(undefined4 *)(param_3 + 4) = puVar4[1];
        *(undefined4 *)(param_3 + 8) = puVar4[2];
        return;
      }
      *(undefined4 *)param_3 = _m3dVUnitY;
      *(undefined4 *)(param_3 + 4) = DAT_005f9994;
      *(undefined4 *)(param_3 + 8) = DAT_005f9998;
    }
  }
  return;
}




/* from: engine:scn_coll.cpp
   addr: 004CCE30 */

objOBJ * __thiscall scnSCENE::GetCDTObj(scnSCENE *this,cdtINFO *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  
  iVar1 = CheckCDTInfo(this,param_1);
  if (iVar1 == 0) {
    return (objOBJ *)0x0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if ((*(uint *)param_1 & 0x100) == 0) {
      return (objOBJ *)0x0;
    }
    poVar2 = objFindID(*(objOBJ **)(*(int *)(param_1 + 4) + 0x10),*(int *)(param_1 + 8));
    return poVar2;
  }
  return *(objOBJ **)(*(int *)(this + 0x4c) + *(int *)(param_1 + 8) * 4);
}

