
/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535760 */

int __thiscall aiNPC::SelectGoal_P(aiNPC *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x10) != 0) {
    return 1;
  }
  if ((uVar1 & 0x10000000) != 0) {
    *(uint *)(this + 1099) = uVar1 & 0xfffffff7;
  }
                    /* WARNING: Could not recover jumptable at 0x00535781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(int *)this + 0x9c))();
  return iVar2;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535790 */

int __thiscall aiNPC::SelectGoal(aiNPC *this)

{
  m3dV *pmVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 1099);
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 0x40000) == 0) {
      if ((uVar2 & 0x10000000) == 0) {
        pmVar1 = (m3dV *)(this + 0x3f3);
        aiPLANNER::GetCrumbGoalPoint(aiAttackPlanner,this,pmVar1);
        *(undefined4 *)(this + 0x3ff) = *(undefined4 *)pmVar1;
        *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
        *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
        if (((byte)this[0x44f] & 0x40) != 0) {
          aiPLANNER::ClipPointByNavArea(aiAttackPlanner,this,pmVar1);
        }
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 8;
        return 1;
      }
      aiPLANNER::GetAttackGoalPoint(aiAttackPlanner,this,(m3dV *)(this + 0x3f3));
    }
    else {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3f3));
    }
    (**(code **)(*(int *)this + 0xe4))(this + 0x3ff);
    return 1;
  }
  aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,this,*(float *)(this + 0x37f),(m3dV *)(this + 0x3ff))
  ;
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3f3));
    return 1;
  }
  *(undefined4 *)(this + 0x3f3) = *(undefined4 *)(this + 0x3ff);
  *(undefined4 *)(this + 0x3f7) = *(undefined4 *)(this + 0x403);
  *(undefined4 *)(this + 0x3fb) = *(undefined4 *)(this + 0x407);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 005358A0 */

int __thiscall aiNPC::SelectBasicStrafeDirection(aiNPC *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_24 = 0;
  local_2c = &cdtREFINE::_vftable_;
  local_28 = 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0.0;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_44);
  local_40 = local_40 + *(float *)(this + 0x173);
  animINST::GetDirRight(*(animINST **)(this + 0xbc),(m3dV *)&local_50);
  iVar2 = scnSCENE::ShootRay(gsScenePtr,(m3dV *)&local_44,(m3dV *)&local_50,10.0,0,
                             (cdtREFINE *)&local_2c,(cdtINFO *)&local_20);
  if (iVar2 == 0) {
    local_54 = 10.0;
  }
  else {
    local_54 = local_4;
  }
  local_50 = local_50 * ___real_bf800000;
  local_4c = local_4c * ___real_bf800000;
  local_48 = local_48 * ___real_bf800000;
  iVar3 = scnSCENE::ShootRay(gsScenePtr,(m3dV *)&local_44,(m3dV *)&local_50,10.0,0,
                             (cdtREFINE *)&local_2c,(cdtINFO *)&local_20);
  fVar1 = local_4;
  if ((iVar3 == 0) && (fVar1 = ___real_41200000, iVar2 == 0)) {
    local_38 = local_50 * ___real_41200000 + local_44;
    local_34 = local_4c * ___real_41200000 + local_40;
    local_30 = local_48 * ___real_41200000 + local_3c;
    iVar2 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_38,(m3dV *)(this + 0x3f3),0,(cdtREFINE *)&local_2c,
                       (cdtINFO *)0x0);
    local_50 = local_50 * ___real_bf800000;
    local_4c = local_4c * ___real_bf800000;
    local_48 = local_48 * ___real_bf800000;
    local_38 = local_50 * local_54 + local_44;
    local_34 = local_4c * local_54 + local_40;
    local_30 = local_48 * local_54 + local_3c;
    iVar3 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_38,(m3dV *)(this + 0x3f3),0,(cdtREFINE *)&local_2c,
                       (cdtINFO *)0x0);
    if (iVar2 == 0) {
      if (iVar3 != 0) {
        return 0;
      }
    }
    else if (iVar3 == 0) {
      return 1;
    }
    iVar2 = m3dRandSelect(1,0);
    return iVar2;
  }
  if (fVar1 <= local_54) {
    return 0;
  }
  return 1;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535AE0 */

void __thiscall aiNPC::StopStrafe(aiNPC *this)

{
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffffee;
  *(undefined4 *)(this + 0x3af) = 0;
  *(undefined4 *)(this + 0x3b3) = 0;
  return;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535B00 */

void __thiscall aiNPC::StartJump(aiNPC *this,float param_1,float param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(uint *)(this + 1099) & 0x800) == 0) {
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
    local_8 = 0.0;
    m3dNormalize((m3dV *)&local_c);
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x800;
    *(float *)(this + 0x437) = param_2;
    *(float *)(this + 0x433) = local_c * param_1 + *(float *)(this + 0x433);
    *(float *)(this + 0x437) = local_8 * param_1 + *(float *)(this + 0x437);
    *(float *)(this + 0x43b) = local_4 * param_1 + *(float *)(this + 0x43b);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535BA0 */

int __thiscall aiNPC::CheckCycle(aiNPC *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  if (((byte)this[0x14f] & 4) == 0) {
    uVar1 = *(uint *)(this + 1099);
    if ((uVar1 & 0x211) != 0) {
      *(uint *)(this + 1099) = uVar1 & 0xfffffffb;
      return 0;
    }
    if ((*(float *)(this + 0x15f) < *(float *)(this + 0x3d7)) && ((uVar1 & 2) == 0)) {
      *(uint *)(this + 1099) = uVar1 & 0xfffffffb;
      return 0;
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
    local_14 = (*(float *)(this + 0x40f) - local_c) * (*(float *)(this + 0x40f) - local_c) +
               (*(float *)(this + 0x417) - local_4) * (*(float *)(this + 0x417) - local_4);
    uVar3 = extraout_MM1;
    if (m3dSimdType == 0) {
      local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
      fVar5 = auVar7._0_4_;
      local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar5 * fVar5) * local_14
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = (ulonglong)(uint)local_14;
      uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      local_14 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      local_14 = SQRT(local_14);
    }
    fVar5 = local_14;
    if (ABS(*(float *)(this + 0x413) - local_8) <= gsElapsedTime) {
      local_14 = (*(float *)(this + 0x40f) - *(float *)(this + 0x427)) *
                 (*(float *)(this + 0x40f) - *(float *)(this + 0x427)) +
                 (*(float *)(this + 0x417) - *(float *)(this + 0x42f)) *
                 (*(float *)(this + 0x417) - *(float *)(this + 0x42f));
      if (m3dSimdType == 0) {
        local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
        fVar6 = auVar7._0_4_;
        local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar6 * fVar6) *
                   local_14;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar2 = (ulonglong)(uint)local_14;
        uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
        uVar4 = PackedFloatingMUL(uVar3,uVar3);
        uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
        uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
        uVar3 = PackedFloatingMUL(uVar3,uVar2);
        local_14 = (float)uVar3;
        FastExitMediaState();
      }
      else {
        local_14 = SQRT(local_14);
      }
      if (fVar5 <= local_14 * ___real_3e4ccccd) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 4;
        return 1;
      }
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffffffb;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535DF0 */

void __thiscall aiNPC::StartResolveCycle(aiNPC *this)

{
  m3dV *pmVar1;
  uint uVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(this + 1099) < 0) {
    local_c = _m3dVUnitY * ___real_41700000;
    local_8 = DAT_005f9994 * ___real_41700000;
    local_4 = DAT_005f9998 * ___real_41700000;
    (**(code **)(*(int *)this + 0x168))(&local_c);
    return;
  }
  if ((*(uint *)(this + 0x14f) & 5) == 0) {
    if (*(float *)(this + 0x3b3) <= ___real_3f000000) {
      uVar2 = *(uint *)(this + 0x14f) & 0x100;
    }
    else {
      uVar2 = SelectBasicStrafeDirection(this);
    }
    pmVar1 = (m3dV *)(this + 0x3b7);
    animINST::GetDirRight(*(animINST **)(this + 0xbc),pmVar1);
    if (uVar2 == 0) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffeef;
    }
    else {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x110;
      *(float *)pmVar1 = *(float *)pmVar1 * ___real_bf800000;
      *(float *)(this + 0x3bb) = *(float *)(this + 0x3bb) * ___real_bf800000;
      *(float *)(this + 0x3bf) = *(float *)(this + 0x3bf) * ___real_bf800000;
    }
    *(undefined4 *)(this + 0x3af) = *(undefined4 *)(this + 0x3ab);
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
  }
  return;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00535F00 */

void __thiscall aiNPC::PlanMove(aiNPC *this)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  (**(code **)(*(int *)this + 0xa8))();
  if ((*(uint *)(this + 1099) & 1) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (((((*(uint *)(this + 1099) & 0x10) == 0) && ((char)(*(uint *)(this + 0x44f) >> 8) < '\0')) &&
      ((*(uint *)(this + 1099) & 0x10000000) != 0)) &&
     (((*(uint *)(this + 0x44f) & 0x10000) == 0 ||
      (*(float *)(this + 399) <= *(float *)(this + 0x3cf))))) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_c);
    fStack_10 = (fStack_c - *(float *)(this + 0x3f3)) * (fStack_c - *(float *)(this + 0x3f3)) +
                (fStack_8 - *(float *)(this + 0x3f7)) * (fStack_8 - *(float *)(this + 0x3f7)) +
                (fStack_4 - *(float *)(this + 0x3fb)) * (fStack_4 - *(float *)(this + 0x3fb));
    if (m3dSimdType == 0) {
      fStack_10 = fStack_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar5 = rsqrtss(ZEXT416((uint)fStack_10),ZEXT416((uint)fStack_10));
      fVar4 = auVar5._0_4_;
      fStack_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_10 * fVar4 * fVar4) *
                  fStack_10;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)fStack_10;
      uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      fStack_10 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      fStack_10 = SQRT(fStack_10);
    }
    if (fStack_10 < *(float *)(this + 0x193)) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x201;
    }
  }
  AvoidObstacles(this);
  (**(code **)(*(int *)this + 0xa0))();
  return;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00536070 */

void __thiscall aiNPC::AnalyzeMove(aiNPC *this)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  if ((int)*(uint *)(this + 1099) < 0) {
    local_28 = 6.0;
  }
  else {
    local_28 = *(float *)(this + 0x19b);
  }
  if ((*(uint *)(this + 1099) & 8) == 0) {
    local_2c = *(float *)(this + 0x197);
  }
  else {
    local_2c = 0.3;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  local_30 = (local_24 - *(float *)(this + 0x3f3)) * (local_24 - *(float *)(this + 0x3f3)) +
             (local_1c - *(float *)(this + 0x3fb)) * (local_1c - *(float *)(this + 0x3fb));
  if (m3dSimdType == 0) {
    local_30 = local_30 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
    fVar7 = auVar6._0_4_;
    local_30 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_30 * fVar7 * fVar7) * local_30;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)local_30;
    uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    local_30 = (float)uVar4;
    FastExitMediaState();
  }
  else {
    local_30 = SQRT(local_30);
  }
  if (local_30 < local_2c) {
    if (ABS(local_20 - *(float *)(this + 0x3f7)) < local_28) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 1;
      *(float *)(this + 0x40b) = gsElapsedTime + *(float *)(this + 0x40b);
      goto LAB_005361d9;
    }
  }
  *(undefined4 *)(this + 0x40b) = 0;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffffffe;
LAB_005361d9:
  local_18 = *(float *)(this + 0x3ff) - local_24;
  local_14 = *(float *)(this + 0x403) - local_20;
  local_10 = *(float *)(this + 0x407) - local_1c;
  animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
  fVar7 = m3xzAngleVector(local_c,(m3dV *)&local_18);
  if (*(float *)(this + 0x1a3) <= ABS(fVar7)) {
    uVar1 = *(uint *)(this + 1099) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(this + 1099) | 2;
  }
  *(uint *)(this + 1099) = uVar1;
  iVar2 = CheckCycle(this);
  if (iVar2 != 0) {
    (**(code **)(*(int *)this + 0xac))();
  }
  return;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00536270 */

void __thiscall aiNPC::UpdateUnderwater(aiNPC *this)

{
  int iVar1;
  m3dV local_c [12];
  
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0x7fffffff;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  iVar1 = waterIsUnderWater(local_c,0.0,(float *)0x3dcccccd);
  if (iVar1 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x80000000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 005362C0 */

void __thiscall aiNPC::AvoidObstacles(aiNPC *this)

{
  m3dV *pmVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 0;
  local_18 = &cdtREFINE::_vftable_;
  local_14 = 2;
  if ((((*(uint *)(this + 0x14f) & 0xf0000) == 0) && ((*(uint *)(this + 0x14f) & 1) == 0)) &&
     (*(float *)(this + 0x3a3) <= ___real_00000000)) {
    GetPosRooted(this,(m3dV *)&local_30);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    pmVar1 = (m3dV *)(this + 0x38b);
    fVar2 = *(float *)(this + 0x153) * *(float *)(this + 0x3a7) +
            *(float *)(this + 0x153) * *(float *)(this + 0x3a7);
    local_38 = (local_30 - *(float *)pmVar1) * (local_30 - *(float *)pmVar1) +
               (local_2c - *(float *)(this + 0x38f)) * (local_2c - *(float *)(this + 0x38f)) +
               (local_28 - *(float *)(this + 0x393)) * (local_28 - *(float *)(this + 0x393));
    if (m3dSimdType == 0) {
      local_38 = local_38 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
      fVar9 = auVar8._0_4_;
      local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar9 * fVar9) * local_38
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)local_38;
      uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      local_38 = (float)uVar6;
      FastExitMediaState();
    }
    else {
      local_38 = SQRT(local_38);
    }
    if ((local_38 < fVar2) &&
       (fVar9 = m3dDistPointLine((m3dV *)&local_30,pmVar1,(m3dV *)(this + 0x397)),
       fVar9 < *(float *)(this + 0x16b))) {
      return;
    }
    *(float *)pmVar1 = local_30;
    *(float *)(this + 0x38f) = local_2c;
    *(float *)(this + 0x393) = local_28;
    *(float *)(this + 0x397) = local_24 + *(float *)pmVar1;
    *(float *)(this + 0x39b) = local_20 + *(float *)(this + 0x38f);
    *(float *)(this + 0x39f) = local_1c + *(float *)(this + 0x393);
    *(undefined4 *)(this + 0x3a3) = *(undefined4 *)(this + 0x3a7);
    local_c = local_24 * fVar2 + local_30;
    local_8 = local_20 * fVar2 + local_2c;
    local_4 = local_1c * fVar2 + local_28;
    iVar3 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_30,(m3dV *)&local_c,0,(cdtREFINE *)&local_18,
                       (cdtINFO *)0x0);
    if ((iVar3 == 0) && ((*(uint *)(this + 0x14f) & 5) == 0)) {
      if (*(float *)(this + 0x3b3) <= ___real_3f000000) {
        uVar4 = *(uint *)(this + 0x14f) & 0x100;
      }
      else {
        uVar4 = SelectBasicStrafeDirection(this);
      }
      pmVar1 = (m3dV *)(this + 0x3b7);
      animINST::GetDirRight(*(animINST **)(this + 0xbc),pmVar1);
      if (uVar4 == 0) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffeef;
      }
      else {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x110;
        *(float *)pmVar1 = *(float *)pmVar1 * ___real_bf800000;
        *(float *)(this + 0x3bb) = *(float *)(this + 0x3bb) * ___real_bf800000;
        *(float *)(this + 0x3bf) = *(float *)(this + 0x3bf) * ___real_bf800000;
      }
      *(undefined4 *)(this + 0x3af) = *(undefined4 *)(this + 0x3ab);
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
    }
  }
  return;
}




/* from: gs_shared:ai_ctrl_nav_plan.cpp
   addr: 00536580 */

void __thiscall aiNPC::FillGoalDirection(aiNPC *this)

{
  m3dV *pmVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [2];
  float local_10;
  m3dV local_c [12];
  
  uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) +
                    *(int *)(*(int *)(this + 0xbc) + 0xe0) * 0x88 + 0x84);
  if ((uVar2 & 1) != 0) {
    if ((uVar2 & 2) != 0) {
      iVar3 = IsPivotUsable(this);
      if (iVar3 != 0) goto LAB_005365d8;
    }
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    return;
  }
LAB_005365d8:
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_18);
  animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
  local_24 = *(float *)(this + 0x3f3);
  local_1c = *(float *)(this + 0x3fb);
  if ((*(uint *)(this + 1099) & 0x40200) != 0) {
    local_24 = *(float *)(this + 0x3ff);
    local_1c = *(float *)(this + 0x407);
  }
  local_1c = local_1c - local_10;
  local_24 = local_24 - local_18[0];
  local_20 = 0.0;
  iVar3 = _m3dNormalize((m3dV *)&local_24);
  if (iVar3 == 0) {
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  }
  fVar4 = m3xzAngleVector((m3dV *)&local_24,local_c);
  *(float *)(this + 999) = fVar4;
  pmVar1 = (m3dV *)(this + 0x3db);
  *(float *)(this + 0x3eb) = ABS(fVar4);
  *(float *)pmVar1 = local_24;
  *(float *)(this + 0x3df) = local_20;
  *(float *)(this + 0x3e3) = local_1c;
  if ((*(uint *)(this + 0x14f) & 1) != 0) {
    if (*(float *)(this + 0x15f) < ABS(fVar4)) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffffee;
      *(undefined4 *)(this + 0x3af) = 0;
      *(undefined4 *)(this + 0x3b3) = 0;
      return;
    }
    GetClampingSpeeds(this,*(float *)(this + 0x153),&local_28,&local_2c);
    *(float *)pmVar1 = local_24 * local_28 + local_2c * *(float *)(this + 0x3b7);
    *(float *)(this + 0x3df) = local_28 * local_20 + local_2c * *(float *)(this + 0x3bb);
    *(float *)(this + 0x3e3) = local_1c * local_28 + local_2c * *(float *)(this + 0x3bf);
    _m3dNormalize(pmVar1);
  }
  return;
}

