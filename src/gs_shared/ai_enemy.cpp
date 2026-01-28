
/* from: gs_shared:ai_enemy.cpp
   addr: 00530FA0 */

int __thiscall aiENEMY::GetMostRecentCrumbID(aiENEMY *this)

{
  plgsBREADCRUMB *ppVar1;
  
  if (*(plgsACTION **)this != (plgsACTION *)0x0) {
    ppVar1 = plgsACTION::GetBreadCrumb(*(plgsACTION **)this,0);
    return *(int *)(ppVar1 + 0xc);
  }
  return 0;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00530FC0 */

plgsBREADCRUMB * __thiscall aiENEMY::GetBreadCrumb(aiENEMY *this,int param_1)

{
  plgsBREADCRUMB *ppVar1;
  plgsACTION *this_00;
  
  this_00 = *(plgsACTION **)this;
  if (*(plgsACTION **)this == (plgsACTION *)0x0) {
    this_00 = plgsPlayer;
  }
  ppVar1 = plgsACTION::GetBreadCrumb(this_00,param_1);
  return ppVar1;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00530FE0 */

void __thiscall aiENEMY::GetPos(aiENEMY *this,m3dV *param_1)

{
  animINST *this_00;
  
  if ((*(int *)(this + 8) != 0) &&
     (this_00 = *(animINST **)(*(int *)(this + 8) + 0xbc), this_00 != (animINST *)0x0)) {
    animINST::GetPos(this_00,param_1);
    return;
  }
  animINST::GetPos(*(animINST **)(plgsPlayer + 0xbc),param_1);
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531010 */

void __thiscall aiENEMY::GetDir(aiENEMY *this,m3dV *param_1)

{
  animINST *this_00;
  
  if ((*(int *)(this + 8) != 0) &&
     (this_00 = *(animINST **)(*(int *)(this + 8) + 0xbc), this_00 != (animINST *)0x0)) {
    animINST::GetDir(this_00,param_1);
    return;
  }
  animINST::GetDir(*(animINST **)(plgsPlayer + 0xbc),param_1);
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531040 */

void __thiscall aiENEMY::GetSpeed(aiENEMY *this,m3dV *param_1)

{
  int iVar1;
  plgsACTION *ppVar2;
  
  ppVar2 = plgsPlayer;
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0xe0);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xe4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0xe8);
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(plgsPlayer + 0xe0);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppVar2 + 0xe4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(ppVar2 + 0xe8);
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531090 */

float __thiscall aiENEMY::GetSpeedScalar(aiENEMY *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
    fVar5 = *(float *)(plgsPlayer + 0xe0) * *(float *)(plgsPlayer + 0xe0) +
            *(float *)(plgsPlayer + 0xe4) * *(float *)(plgsPlayer + 0xe4) +
            *(float *)(plgsPlayer + 0xe8) * *(float *)(plgsPlayer + 0xe8);
    if (m3dSimdType == 0) {
      fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      return `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
             (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
    }
    if (m3dSimdType != 1) {
      return SQRT(fVar5);
    }
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    FastExitMediaState();
    return (float)uVar3;
  }
  fVar5 = *(float *)(iVar1 + 0xe0) * *(float *)(iVar1 + 0xe0) +
          *(float *)(iVar1 + 0xe4) * *(float *)(iVar1 + 0xe4) +
          *(float *)(iVar1 + 0xe8) * *(float *)(iVar1 + 0xe8);
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    return `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
  }
  if (m3dSimdType != 1) {
    return SQRT(fVar5);
  }
  FastExitMediaState();
  uVar2 = (ulonglong)(uint)fVar5;
  uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
  uVar4 = PackedFloatingMUL(uVar3,uVar3);
  uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
  uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
  uVar3 = PackedFloatingMUL(uVar3,uVar2);
  FastExitMediaState();
  return (float)uVar3;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531230 */

void __thiscall aiENEMY::Assign(aiENEMY *this,entENTITY *param_1)

{
  if (param_1 == (entENTITY *)0x0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)this = 0;
    return;
  }
  if (param_1 != *(entENTITY **)(this + 8)) {
    *(undefined4 *)(this + 4) = 0;
  }
  *(entENTITY **)(this + 8) = param_1;
  *(uint *)this = (*(int *)(param_1 + 0x14) != 0x504c5952) - 1 & (uint)param_1;
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531270 */

int __thiscall aiENEMY::IsDead(aiENEMY *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 8);
  if (piVar1 != (int *)0x0) {
    if (piVar1[5] == 0x244e5043) {
      return *(uint *)((int)piVar1 + 1099) & 0x200000;
    }
    if (piVar1[5] == 0x504c5952) {
                    /* WARNING: Could not recover jumptable at 0x0053128a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*piVar1 + 0x78))();
      return iVar2;
    }
  }
  return 1;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 005312A0 */

int __thiscall aiENEMY::IsActive(aiENEMY *this)

{
  int iVar1;
  
  if (*(int **)this != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005312aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)this + 0x7c))();
    return iVar1;
  }
  if ((*(int *)(this + 8) != 0) && (*(int *)(*(int *)(this + 8) + 0x14) == 0x244e5043)) {
    return 1;
  }
  return 0;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 005312D0 */

void __thiscall aiENEMY::ApplySpeed(aiENEMY *this,m3dV *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  if (piVar1 != (int *)0x0) {
    if (piVar1[5] == 0x244e5043) {
                    /* WARNING: Could not recover jumptable at 0x005312fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x168))();
      return;
    }
    if (piVar1[5] == 0x504c5952) {
      (**(code **)(*piVar1 + 0xa4))(param_1,0);
    }
  }
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531310 */

void __thiscall aiENEMY::ProcessCDT_FIREABLE(aiENEMY *this,dmgDAMAGE *param_1)

{
  if (*(msgADDR **)(this + 8) != (msgADDR *)0x0) {
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 8),0x4c5,param_1,(msgADDR *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_enemy.cpp
   addr: 00531350 */

int __thiscall aiNPC::IsPlrVisible(aiNPC *this,m3dV *param_1)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  m3dV *local_38;
  float local_34;
  float local_30;
  float local_2c;
  m3dV local_28 [4];
  float local_24;
  m3dV local_1c [12];
  undefined **local_10;
  undefined4 local_c;
  animINST *local_8;
  undefined4 local_4;
  
  local_c = 2;
  local_4 = 1;
  local_8 = *(animINST **)(this + 0xbc);
  local_10 = &entCDT_REFINE_EXCL::_vftable_;
  if ((*(uint *)(this + 1099) & 0x20000) != 0) {
    return 0;
  }
  animINST::GetPos(local_8,local_28);
  local_24 = local_24 + *(float *)(this + 899);
  animINST::GetDir(*(animINST **)(this + 0xbc),local_1c);
  fVar4 = m3dRandom();
  fVar3 = (float10)___real_43340000;
  fVar2 = (float10)fsin((float10)fVar4 * fVar3);
  local_34 = (float)(fVar2 * (float10)___real_3f19999a + (float10)*(float *)param_1);
  local_30 = m3dRandRange(extraout_ECX,extraout_EDX);
  local_30 = local_30 + *(float *)(param_1 + 4);
  fVar3 = (float10)fcos((float10)(float)((float10)fVar4 * fVar3));
  local_2c = (float)(fVar3 * (float10)___real_3f19999a + (float10)*(float *)(param_1 + 8));
  if ((*(uint *)(this + 1099) & 0x10000) == 0) {
    param_1 = (m3dV *)(*(float *)(this + 0x4a7) * ___real_3fc00000);
    local_38 = param_1;
  }
  else {
    local_38 = *(m3dV **)(this + 0x4a7);
    param_1 = *(m3dV **)(this + 0x4ab);
  }
  iVar1 = scnSCENE::IsVisiblePointCone
                    (gsScenePtr,local_28,local_1c,(float)local_38,(float)param_1,
                     *(float *)(this + 0x17f),(m3dV *)&local_34,0,(cdtREFINE *)&local_10,
                     (cdtINFO *)0x0);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531480 */

int __thiscall aiNPC::ShouldChangeEnemy(aiNPC *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 0x4c3);
  if (piVar1 != (int *)0x0) {
    if (piVar1[5] == 0x244e5043) {
      uVar2 = *(uint *)((int)piVar1 + 1099) & 0x200000;
    }
    else {
      if (piVar1[5] != 0x504c5952) {
        return 1;
      }
      uVar2 = (**(code **)(*piVar1 + 0x78))();
    }
    if (uVar2 == 0) {
      if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
        return 1;
      }
      iVar3 = CheckDeactivateCondition(this,0);
      if (iVar3 == 0) {
        if (((*(uint *)(this + 0x44f) & 0x40000) != 0) &&
           (*(float *)(this + 0x4b7) < *(float *)(this + 0x4bf))) {
          return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 1;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531510 */

void __thiscall aiNPC::DecideEnemy(aiNPC *this)

{
  int iVar1;
  uint uVar2;
  animINST *this_00;
  int local_10;
  m3dV amStack_c [12];
  
  if (0 < *(int *)(this + 0x483)) {
    *(int *)(this + 0x483) = *(int *)(this + 0x483) + -1;
    return;
  }
  if (((*(byte *)(*(int *)(this + 0xbc) + 4) & 2) != 0) && (*(int *)(gsSysMP + 0x28) == 1)) {
    *(undefined4 *)(this + 0x483) = 0;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xefffffff;
    *(undefined4 *)(this + 0x4c3) = 0;
    *(undefined4 *)(this + 0x4bb) = 0;
    *(undefined4 *)(this + 0x4bf) = 0;
    return;
  }
  if ((*(uint *)(this + 1099) & 0x10000) == 0) {
    *(undefined4 *)(this + 0x483) = *(undefined4 *)(this + 0x47b);
  }
  else {
    *(undefined4 *)(this + 0x483) = *(undefined4 *)(this + 0x47f);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xfc))();
  if (iVar1 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xefffffff;
    uVar2 = (**(code **)(*(int *)this + 0x100))(&local_10);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x4c3) = 0;
      *(undefined4 *)(this + 0x4bb) = 0;
      *(undefined4 *)(this + 0x4bf) = 0;
    }
    else {
      if (uVar2 != *(uint *)(this + 0x4c3)) {
        *(undefined4 *)(this + 0x4bf) = 0;
      }
      *(uint *)(this + 0x4c3) = uVar2;
      *(uint *)(this + 0x4bb) = (*(int *)(uVar2 + 0x14) != 0x504c5952) - 1 & uVar2;
    }
  }
  if (*(int *)(this + 0x4c3) != 0) {
    if (local_10 == 0) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xefffffff;
      if ((*(int *)(this + 0x4c3) == 0) ||
         (this_00 = *(animINST **)(*(int *)(this + 0x4c3) + 0xbc), this_00 == (animINST *)0x0)) {
        this_00 = *(animINST **)(plgsPlayer + 0xbc);
      }
      animINST::GetPos(this_00,amStack_c);
      iVar1 = IsPlrVisible(this,amStack_c);
      if (iVar1 != 0) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x10000000;
      }
    }
    if (*(int *)(this + 0x4c3) != 0) {
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
    }
  }
  return;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 005316A0 */

entENTITY * __thiscall aiNPC::SelectNewEnemy(aiNPC *this,int *param_1)

{
  int iVar1;
  entENTITY *local_4;
  
  local_4 = (entENTITY *)0x0;
  aiPLANNER::StartFilteringPlayers(aiAttackPlanner);
  iVar1 = aiPLANNER::HaveAChoiceFromFiltered(aiAttackPlanner,&local_4);
  if (iVar1 == 0) {
    *param_1 = 0;
    return local_4;
  }
  aiPLANNER::SortFilteredPlayersByDist(aiAttackPlanner,this);
  local_4 = (entENTITY *)(**(code **)(*(int *)this + 0x104))();
  *param_1 = 1;
  if (local_4 == (entENTITY *)0x0) {
    local_4 = (entENTITY *)aiPLANNER::GetFilteredByIdx(aiAttackPlanner,0);
  }
  return local_4;
}




/* from: gs_shared:ai_enemy.cpp
   addr: 00531720 */

entENTITY * __thiscall aiNPC::SelectFromSortedPlayers(aiNPC *this)

{
  int iVar1;
  plgsACTION *ppVar2;
  plgsACTION *ppVar3;
  int iVar4;
  m3dV local_c [12];
  
  ppVar3 = (plgsACTION *)0x0;
  iVar4 = 0;
  if (0 < *(int *)(aiAttackPlanner + 0x398)) {
    do {
      ppVar3 = aiPLANNER::GetFilteredByIdx(aiAttackPlanner,iVar4);
      (**(code **)(*(int *)ppVar3 + 0x68))(local_c);
      iVar1 = IsPlrVisible(this,local_c);
      if (iVar1 != 0) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x10000000;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(aiAttackPlanner + 0x398));
  }
  if (((((*(uint *)(this + 0x44f) & 0x40000) != 0) &&
       (*(float *)(this + 0x4b7) < *(float *)(this + 0x4bf))) &&
      (ppVar3 == *(plgsACTION **)(this + 0x4c3))) && (iVar4 < *(int *)(aiAttackPlanner + 0x398))) {
    do {
      ppVar2 = aiPLANNER::GetFilteredByIdx(aiAttackPlanner,iVar4);
      (**(code **)(*(int *)ppVar2 + 0x68))(local_c);
      iVar1 = IsPlrVisible(this,local_c);
      if (iVar1 != 0) {
        return (entENTITY *)ppVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(aiAttackPlanner + 0x398));
  }
  return (entENTITY *)ppVar3;
}

