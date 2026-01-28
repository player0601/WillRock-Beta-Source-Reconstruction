
/* from: gs_shared:ai_att_planner.cpp
   addr: 00536760 */

int __fastcall aiPlannerInit(void)

{
  int iVar1;
  aiPLANNER *paVar2;
  
  aiAttackPlanner = (aiPLANNER *)operator_new(0x3dc);
  if (aiAttackPlanner == (aiPLANNER *)0x0) {
    aiAttackPlanner = (aiPLANNER *)0x0;
  }
  else {
    *(undefined4 *)(aiAttackPlanner + 4) = 0;
    *(undefined4 *)(aiAttackPlanner + 8) = 0;
    *(undefined4 *)(aiAttackPlanner + 0xc) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x10) = 0x4d414452;
    *(undefined4 *)(aiAttackPlanner + 0x14) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x18) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x1c) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x20) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x24) = 0;
    *(undefined ***)aiAttackPlanner = &aiPLANNER::_vftable_;
    *(undefined4 *)(aiAttackPlanner + 0x34c) = 2;
    *(undefined4 *)(aiAttackPlanner + 0x28) = 0;
    paVar2 = aiAttackPlanner + 0x2c;
    for (iVar1 = 200; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)paVar2 = 0;
      paVar2 = paVar2 + 4;
    }
    *(undefined4 *)(aiAttackPlanner + 0x354) = 0;
    *(undefined4 *)(aiAttackPlanner + 0x398) = 0;
    paVar2 = aiAttackPlanner + 0x358;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)paVar2 = 0;
      paVar2 = paVar2 + 4;
    }
    paVar2 = aiAttackPlanner + 0x39c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)paVar2 = 0;
      paVar2 = paVar2 + 4;
    }
    *(undefined4 *)(aiAttackPlanner + 0x350) = 0;
    *(uint *)(aiAttackPlanner + 0xc) = *(uint *)(aiAttackPlanner + 0xc) | 2;
  }
  *(undefined4 *)(aiAttackPlanner + 0x14) = 0x24414924;
  *(undefined4 *)(aiAttackPlanner + 0x1c) = 0x23;
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)aiAttackPlanner,0x24535953,0);
  return 1;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00536830 */

void __fastcall aiPlannerTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)aiAttackPlanner);
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00536850
   addr: 00536850 */

void * __thiscall aiPLANNER::_vector_deleting_destructor_(aiPLANNER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00536880 */

void __thiscall aiPLANNER::RegisterNPC(aiPLANNER *this,aiNPC *param_1)

{
  if (*(int *)(this + 0x28) < 200) {
    *(aiNPC **)(this + *(int *)(this + 0x28) * 4 + 0x2c) = param_1;
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 005368A0 */

void __thiscall aiPLANNER::UnRegisterNPC(aiPLANNER *this,aiNPC *param_1)

{
  int iVar1;
  aiPLANNER *paVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x28);
  iVar3 = 0;
  if (0 < iVar1) {
    paVar2 = this + 0x2c;
    do {
      if (*(aiNPC **)paVar2 == param_1) {
        *(int *)(this + 0x28) = iVar1 + -1;
        *(int *)paVar2 = *(int *)(this + (iVar1 + -1) * 4 + 0x2c);
        *(undefined4 *)(this + *(int *)(this + 0x28) * 4 + 0x2c) = 0;
      }
      iVar1 = *(int *)(this + 0x28);
      iVar3 = iVar3 + 1;
      paVar2 = paVar2 + 4;
    } while (iVar3 < iVar1);
  }
  if (*(aiNPC **)(this + 0x350) == param_1) {
    *(undefined4 *)(this + 0x350) = 0;
  }
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 005368F0 */

int __thiscall
aiPLANNER::ProcessMsg(aiPLANNER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  aiPLANNER *paVar3;
  int iVar4;
  char local_40 [64];
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      iVar2 = *(int *)(this + 0x28);
      iVar4 = 0;
      if (0 < iVar2) {
        paVar3 = this + 0x2c;
        do {
          if (*(void **)paVar3 == param_2) {
            *(int *)(this + 0x28) = iVar2 + -1;
            *(int *)paVar3 = *(int *)(this + (iVar2 + -1) * 4 + 0x2c);
            *(undefined4 *)(this + *(int *)(this + 0x28) * 4 + 0x2c) = 0;
          }
          iVar2 = *(int *)(this + 0x28);
          iVar4 = iVar4 + 1;
          paVar3 = paVar3 + 4;
        } while (iVar4 < iVar2);
      }
      if (*(void **)(this + 0x350) == param_2) {
        *(undefined4 *)(this + 0x350) = 0;
        return 0;
      }
    }
    else if (param_1 == 1) {
      iVar2 = _apCfgReadString((void **)&DAT_0095d93c,s_AttackPlanner,s_Mode,local_40,0x40);
      if (iVar2 == 0) {
        iVar2 = 0;
        do {
          cVar1 = s_single[iVar2];
          local_40[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        return 0;
      }
    }
  }
  else if (param_1 == 1000) {
    (**(code **)(*(int *)this + 0x10))();
  }
  else if (param_1 == 0x3f4) {
    *(undefined4 *)(this + 0x28) = 0;
    paVar3 = this + 0x2c;
    for (iVar2 = 200; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)paVar3 = 0;
      paVar3 = paVar3 + 4;
    }
    *(undefined4 *)(this + 0x354) = 0;
    *(undefined4 *)(this + 0x398) = 0;
    paVar3 = this + 0x358;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)paVar3 = 0;
      paVar3 = paVar3 + 4;
    }
    paVar3 = this + 0x39c;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)paVar3 = 0;
      paVar3 = paVar3 + 4;
    }
    *(undefined4 *)(this + 0x350) = 0;
    return 0;
  }
  return 0;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00536A00 */

void __thiscall aiPLANNER::ProcessFRAME(aiPLANNER *this)

{
  int iVar1;
  int iVar2;
  aiPLANNER *paVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(this + 0x28);
  if (0 < iVar2) {
    paVar3 = this + 0x2c;
    do {
      iVar1 = *(int *)paVar3;
      if (((iVar1 == 0) || (*(int *)(iVar1 + 0xbc) == 0)) ||
         ((*(byte *)(iVar1 + 0x44d) & 0x21) != 0)) {
        *(int *)(this + 0x28) = iVar2 + -1;
        *(int *)paVar3 = *(int *)(this + (iVar2 + -1) * 4 + 0x2c);
        *(undefined4 *)(this + *(int *)(this + 0x28) * 4 + 0x2c) = 0;
      }
      iVar2 = *(int *)(this + 0x28);
      iVar4 = iVar4 + 1;
      paVar3 = paVar3 + 4;
    } while (iVar4 < iVar2);
  }
  GatherPlrInformation(this);
  DesyncAnimations(this);
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00536A60 */

scnDOMAIN * __thiscall aiPLANNER::GetBanCrossDomain(aiPLANNER *this,aiNPC *param_1)

{
  if (((byte)param_1[0x44f] & 0x10) != 0) {
    return (scnDOMAIN *)(param_1 + 0x337);
  }
  return (scnDOMAIN *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00536A80 */

void __thiscall
aiPLANNER::GetFleeGoalPoint(aiPLANNER *this,aiNPC *param_1,float param_2,m3dV *param_3)

{
  aiAREA *this_00;
  uint uVar1;
  float fVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  aiNPC *local_10;
  m3dV local_c [12];
  
  local_20 = _m3dVUndef;
  local_1c = DAT_0096374c;
  local_18 = DAT_00963750;
  local_14 = 0;
  if (((*(uint *)(param_1 + 0x44f) & 8) == 0) ||
     (this_00 = (aiAREA *)(param_1 + 0x1ab), this_00 == (aiAREA *)0x0)) {
    animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_38);
    animINST::GetDir(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_2c);
    fVar2 = param_2 * *(float *)(param_1 + 0x1a7);
    *(float *)param_3 = local_2c * fVar2 + local_38;
    *(float *)(param_3 + 4) = local_28 * fVar2 + local_34;
    *(float *)(param_3 + 8) = local_24 * fVar2 + local_30;
    return;
  }
  if (((*(uint *)(param_1 + 0x44f) & 0x10) != 0) &&
     (local_10 = param_1 + 0x337, local_10 != (aiNPC *)0x0)) {
    uVar1 = *(uint *)(param_1 + 0x333);
    *(uint *)(param_1 + 0x333) = uVar1 | 0x10;
    *(uint *)(param_1 + 0x333) = uVar1 & 0xfffffffd | 0x10;
    aiENEMY::GetPos((aiENEMY *)(param_1 + 0x4bb),(m3dV *)&local_20);
    aiNPC::GetPosRooted(param_1,local_c);
    aiAREA::GetRandomPos(this_00,param_3,(aiAREA_GET_POINT_PARAM *)&local_20);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x333);
  *(uint *)(param_1 + 0x333) = uVar1 & 0xffffffef;
  *(uint *)(param_1 + 0x333) = uVar1 & 0xffffffef | 2;
  aiENEMY::GetPos((aiENEMY *)(param_1 + 0x4bb),(m3dV *)&local_38);
  aiAREA::GetRandomPos(this_00,param_3,(m3dV *)&local_38);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00536BD0 */

int __thiscall
aiPLANNER::GetEnemyMeetPoint(aiPLANNER *this,aiNPC *param_1,float param_2,m3dV *param_3)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  if ((*(int *)(param_1 + 0x4c3) != 0) && (*(int *)(*(int *)(param_1 + 0x4c3) + 0xbc) != 0)) {
    if (((byte)this[0x34c] & 2) == 0) {
      aiENEMY::GetPos((aiENEMY *)(param_1 + 0x4bb),param_3);
      return 1;
    }
    aiNPC::GetPosRooted(param_1,(m3dV *)&local_30);
    aiENEMY::GetPos((aiENEMY *)(param_1 + 0x4bb),(m3dV *)&local_3c);
    aiENEMY::GetSpeed((aiENEMY *)(param_1 + 0x4bb),(m3dV *)&local_48);
    fVar4 = local_48 * local_48 + local_44 * local_44 + local_40 * local_40;
    uVar2 = extraout_MM1;
    if (m3dSimdType == 0) {
      fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      param_1 = (aiNPC *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) *
                         fVar4);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)fVar4;
      uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      param_1 = (aiNPC *)uVar2;
      FastExitMediaState();
    }
    else {
      param_1 = (aiNPC *)SQRT(fVar4);
    }
    if ((float)param_1 < _DAT_005dd5cc) {
      *(float *)param_3 = local_3c;
      *(float *)(param_3 + 4) = local_38;
      *(float *)(param_3 + 8) = local_34;
      return 1;
    }
    local_3c = local_3c - local_30;
    local_38 = local_38 - local_2c;
    local_34 = local_34 - local_28;
    fVar4 = local_3c * local_3c + local_38 * local_38 + local_34 * local_34;
    if (m3dSimdType == 0) {
      fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      param_1 = (aiNPC *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) *
                         fVar4);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)fVar4;
      uVar2 = PackedFloatingReciprocalSQRAprox(uVar2,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      param_1 = (aiNPC *)uVar2;
      FastExitMediaState();
    }
    else {
      param_1 = (aiNPC *)SQRT(fVar4);
    }
    fVar4 = ___real_3f800000 / (float)param_1;
    local_3c = local_3c * fVar4;
    local_38 = local_38 * fVar4;
    local_34 = local_34 * fVar4;
    fVar4 = local_3c * local_48 + local_38 * local_44 + local_34 * local_40;
    local_48 = local_48 - local_3c * fVar4;
    local_44 = local_44 - local_38 * fVar4;
    local_40 = local_40 - local_34 * fVar4;
    fVar5 = param_2 * param_2 - (local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
    if (fVar5 < ___real_00000000 == (fVar5 == ___real_00000000)) {
      if (m3dSimdType == 0) {
        fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        param_2 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar1 = (ulonglong)(uint)fVar5;
        uVar2 = PackedFloatingReciprocalSQRAprox(uVar2,uVar1);
        uVar3 = PackedFloatingMUL(uVar2,uVar2);
        uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
        uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
        uVar2 = PackedFloatingMUL(uVar2,uVar1);
        param_2 = (float)uVar2;
        FastExitMediaState();
      }
      else {
        param_2 = SQRT(fVar5);
      }
      if (_DAT_005dd5cc + fVar4 <= param_2) {
        fVar4 = (float)param_1 / (param_2 - fVar4);
        fVar5 = param_2 * fVar4;
        *(float *)param_3 = local_48 * fVar4 + local_3c * fVar5 + local_30;
        *(float *)(param_3 + 4) = local_44 * fVar4 + local_38 * fVar5 + local_2c;
        *(float *)(param_3 + 8) = local_40 * fVar4 + local_34 * fVar5 + local_28;
        return 1;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00536FE0 */

void __thiscall aiPLANNER::GetAttackGoalPoint(aiPLANNER *this,aiNPC *param_1,m3dV *param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float *unaff_retaddr;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  m3dV amStack_2c [20];
  undefined1 local_18 [8];
  undefined1 auStack_10 [4];
  float fStack_c;
  float fStack_4;
  
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_3c);
  animINST::GetDir(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_54);
  aiENEMY::GetPos((aiENEMY *)(param_1 + 0x4bb),(m3dV *)&local_48);
  (**(code **)(*(int *)param_1 + 0xdc))(local_18);
  (**(code **)(*(int *)param_1 + 0xe4))(auStack_10);
  fVar6 = fStack_44 - fStack_50;
  fVar1 = fStack_40 - fStack_4c;
  local_54 = local_3c - local_48;
  fStack_4 = fVar6 * fVar6 + fVar1 * fVar1 + local_54 * local_54;
  if (m3dSimdType == 0) {
    fStack_4 = fStack_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fStack_4),ZEXT416((uint)fStack_4));
    fVar5 = auVar7._0_4_;
    fStack_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_4 * fVar5 * fVar5) * fStack_4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fStack_4;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    fStack_4 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    fStack_4 = SQRT(fStack_4);
  }
  fVar5 = fStack_4;
  fStack_4 = 0.5;
  if (((byte)param_1[1099] & 1) == 0) {
    fStack_4 = 0.3;
  }
  if (((byte)param_1[0x44f] & 1) == 0) {
    if (___real_40a00000 < ABS(fStack_40 - fStack_4c)) {
      fStack_4 = fStack_4 * ___real_3e99999a;
    }
  }
  if (fStack_4 <= fVar5) {
    m3dNormalize((m3dV *)&stack0xffffffa4);
    *unaff_retaddr = fVar6 * fStack_4 + fStack_50;
    unaff_retaddr[1] = fVar1 * fStack_4 + fStack_4c;
    unaff_retaddr[2] = local_54 * fStack_4 + local_48;
  }
  else {
    *unaff_retaddr = fStack_44;
    unaff_retaddr[1] = fStack_40;
    unaff_retaddr[2] = local_3c;
  }
  if ((((*(uint *)(param_1 + 0x44f) & 0x40) != 0) && ((*(uint *)(param_1 + 0x44f) & 8) != 0)) &&
     (param_1 + 0x1ab != (aiNPC *)0x0)) {
    animINST::GetPos(*(animINST **)(param_1 + 0xbc),amStack_2c);
    *(uint *)(param_1 + 0x333) = *(uint *)(param_1 + 0x333) | 0x10000;
    fStack_38 = *unaff_retaddr;
    fStack_34 = unaff_retaddr[1];
    fStack_30 = unaff_retaddr[2];
    (**(code **)(*(int *)(param_1 + 0x1ab) + 0x18))(amStack_2c,unaff_retaddr,&fStack_38);
    fStack_c = (fStack_38 - fStack_44) * (fStack_38 - fStack_44) +
               (fStack_30 - local_3c) * (fStack_30 - local_3c);
    if (m3dSimdType == 0) {
      fStack_c = fStack_c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fStack_c),ZEXT416((uint)fStack_c));
      fVar6 = auVar7._0_4_;
      fStack_c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_c * fVar6 * fVar6) * fStack_c
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = (ulonglong)(uint)fStack_c;
      uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      fStack_c = (float)uVar3;
      FastExitMediaState();
    }
    else {
      fStack_c = SQRT(fStack_c);
    }
    if (fStack_c < *(float *)(param_1 + 0x197)) {
      *unaff_retaddr = fStack_38;
      unaff_retaddr[1] = fStack_34;
      unaff_retaddr[2] = fStack_30;
      return;
    }
    *unaff_retaddr = fStack_44;
    unaff_retaddr[1] = fStack_40;
    unaff_retaddr[2] = local_3c;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00537350 */

void __thiscall aiPLANNER::GetCrumbGoalPoint(aiPLANNER *this,aiNPC *param_1,m3dV *param_2)

{
  plgsBREADCRUMB *ppVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 1099) & 8) == 0) {
    iVar3 = 0;
    do {
      ppVar1 = aiENEMY::GetBreadCrumb((aiENEMY *)(param_1 + 0x4bb),iVar3);
      iVar2 = aiNPC::IsPlrVisible(param_1,(m3dV *)ppVar1);
      if (iVar2 != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    *(undefined4 *)(param_1 + 0x3ef) = *(undefined4 *)(ppVar1 + 0xc);
  }
  else {
    if ((*(uint *)(param_1 + 1099) & 0x41) == 0) {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x3f3);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x3f7);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x3fb);
      return;
    }
    iVar3 = 9;
    do {
      ppVar1 = aiENEMY::GetBreadCrumb((aiENEMY *)(param_1 + 0x4bb),iVar3);
      if (*(int *)(param_1 + 0x3ef) <= *(int *)(ppVar1 + 0xc)) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(uint *)(param_1 + 1099) = *(uint *)(param_1 + 1099) & 0xffffffbf;
  }
  *(undefined4 *)(param_1 + 0x3ef) = *(undefined4 *)(ppVar1 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)ppVar1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(ppVar1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(ppVar1 + 8);
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - ___real_3f800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00537420 */

void __thiscall aiPLANNER::DesyncAnimations(aiPLANNER *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  aiPLANNER *paVar6;
  int iVar7;
  aiPLANNER *paVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte10 in_ST1;
  float fVar12;
  undefined1 auVar13 [16];
  float local_18;
  int local_14;
  int local_10;
  
  iVar7 = 1;
  if (1 < *(int *)(this + 0x28)) {
    paVar8 = this + 0x30;
    do {
      local_18 = *(float *)(*(int *)paVar8 + 0x513);
      if (m3dSimdType == 0) {
        local_18 = local_18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar13 = rsqrtss(ZEXT416((uint)local_18),ZEXT416((uint)local_18));
        fVar12 = auVar13._0_4_;
        local_18 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_18 * fVar12 * fVar12) *
                   local_18;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar9 = (ulonglong)(uint)local_18;
        uVar10 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
        uVar11 = PackedFloatingMUL(uVar10,uVar10);
        uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
        uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
        uVar10 = PackedFloatingMUL(uVar10,uVar9);
        in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar10);
        local_18 = (float)uVar10;
        FastExitMediaState();
      }
      else {
        local_18 = SQRT(local_18);
      }
      *(float *)(*(int *)paVar8 + 0x513) = local_18;
      iVar7 = iVar7 + 1;
      paVar8 = paVar8 + 4;
    } while (iVar7 < *(int *)(this + 0x28));
  }
  local_14 = 0;
  if (1 < *(int *)(this + 0x28)) {
    paVar8 = this + 0x30;
    iVar7 = 0;
    do {
      if (2 < local_14) {
        return;
      }
      iVar1 = *(int *)paVar8;
      iVar2 = *(int *)(iVar1 + 0xbc);
      iVar3 = *(int *)(iVar2 + 0xe0);
      fVar12 = *(float *)(*(int *)(*(int *)(iVar2 + 0x138) + 0x90) + 0x50 + iVar3 * 0x88) *
               ___real_3951b718;
      if (-1 < iVar7) {
        local_10 = iVar7 + 1;
        paVar6 = paVar8;
        do {
          paVar6 = paVar6 + -4;
          iVar4 = *(int *)paVar6;
          if ((((*(int *)(iVar4 + 0x94) == *(int *)(iVar1 + 0x94)) &&
               (*(int *)(*(int *)(iVar4 + 0xbc) + 0xe0) == iVar3)) &&
              (ABS(*(float *)(*(int *)(iVar4 + 0xbc) + 0x24) - *(float *)(iVar2 + 0x24)) <= fVar12))
             && (ABS(*(float *)(iVar1 + 0x513) - *(float *)(iVar4 + 0x513)) <= ___real_3dcccccd)) {
            fVar5 = (*(float *)(iVar4 + 0x513) + *(float *)(iVar1 + 0x513)) * ___real_3f000000;
            if (fVar5 < ___real_3f400000) {
              fVar5 = ___real_3f400000;
            }
            if (*(float *)(iVar1 + 0x513) <= *(float *)(iVar4 + 0x513)) {
              *(float *)(iVar1 + 0x513) = fVar5 - ___real_3d4ccccd;
              fVar5 = fVar5 + ___real_3d4ccccd;
            }
            else {
              *(float *)(iVar1 + 0x513) = ___real_3d4ccccd + fVar5;
              fVar5 = fVar5 - ___real_3d4ccccd;
            }
            *(float *)(iVar4 + 0x513) = fVar5;
            local_14 = local_14 + 1;
          }
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      paVar8 = paVar8 + 4;
      iVar1 = iVar7 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar1 < *(int *)(this + 0x28));
  }
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00537680 */

int __thiscall aiPLANNER::GetBossHealth(aiPLANNER *this,float *param_1,float *param_2,int *param_3)

{
  if (*(int *)(this + 0x350) == 0) {
    *param_1 = 0.0;
    *param_2 = 1.0;
    *param_3 = -1;
    return 0;
  }
  *param_1 = *(float *)(*(int *)(this + 0x350) + 0xcc);
  *param_2 = *(float *)(*(int *)(this + 0x350) + 0xd0);
  *param_3 = *(int *)(*(int *)(this + 0x350) + 0x94);
  return 1;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00537700 */

void __thiscall aiPLANNER::ClipPointByNavArea(aiPLANNER *this,aiNPC *param_1,m3dV *param_2)

{
  float unaff_EBX;
  undefined4 unaff_ESI;
  float unaff_EDI;
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_18;
  undefined4 local_14;
  float local_10;
  m3dV local_c [4];
  float fStack_8;
  
  if ((((byte)param_1[0x44f] & 8) != 0) && (param_1 + 0x1ab != (aiNPC *)0x0)) {
    animINST::GetPos(*(animINST **)(param_1 + 0xbc),local_c);
    *(uint *)(param_1 + 0x333) = *(uint *)(param_1 + 0x333) | 0x10000;
    local_18 = *(float *)param_2;
    local_14 = *(undefined4 *)(param_2 + 4);
    local_10 = *(float *)(param_2 + 8);
    (**(code **)(*(int *)(param_1 + 0x1ab) + 0x18))(local_c,param_2,&local_18);
    fStack_8 = (local_18 - unaff_EDI) * (local_18 - unaff_EDI) +
               (local_10 - unaff_EBX) * (local_10 - unaff_EBX);
    if (m3dSimdType == 0) {
      fStack_8 = fStack_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar5 = rsqrtss(ZEXT416((uint)fStack_8),ZEXT416((uint)fStack_8));
      fVar4 = auVar5._0_4_;
      fStack_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_8 * fVar4 * fVar4) * fStack_8
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)fStack_8;
      uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      fStack_8 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      fStack_8 = SQRT(fStack_8);
    }
    if (fStack_8 < *(float *)(param_1 + 0x197)) {
      *(float *)param_2 = local_18;
      *(undefined4 *)(param_2 + 4) = local_14;
      *(float *)(param_2 + 8) = local_10;
      return;
    }
    *(float *)param_2 = unaff_EDI;
    *(undefined4 *)(param_2 + 4) = unaff_ESI;
    *(float *)(param_2 + 8) = unaff_EBX;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_att_planner.cpp
   addr: 00537870 */

void __thiscall aiPLANNER::GetNavAreaCenter(aiPLANNER *this,aiNPC *param_1,m3dV *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  aiNPC *paVar4;
  int iVar5;
  float local_4;
  
  if ((((byte)param_1[0x44f] & 8) != 0) && (param_1 != (aiNPC *)0xfffffe55)) {
    iVar1 = *(int *)(param_1 + 0x1ef);
    local_4 = 0.0;
    fVar2 = ___real_00000000;
    if (0 < iVar1) {
      paVar4 = param_1 + 0x1f7;
      iVar5 = iVar1;
      do {
        iVar5 = iVar5 + -1;
        fVar2 = fVar2 + *(float *)(paVar4 + -4) + *(float *)(paVar4 + 0x9c);
        local_4 = local_4 + *(float *)paVar4 + *(float *)(paVar4 + 0xa0);
        paVar4 = paVar4 + 8;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    fVar3 = ___real_3f800000 / (float)(iVar1 * 2);
    *(float *)param_2 = fVar3 * fVar2;
    *(float *)(param_2 + 8) = fVar3 * local_4;
  }
  return;
}




/* from: gs_shared:ai_att_planner.cpp
   addr: 00537910 */

void __thiscall aiPLANNER::UsePredictiveAiming(aiPLANNER *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x34c) = *(uint *)(this + 0x34c) | 2;
    return;
  }
  *(uint *)(this + 0x34c) = *(uint *)(this + 0x34c) & 0xfffffffd;
  return;
}

