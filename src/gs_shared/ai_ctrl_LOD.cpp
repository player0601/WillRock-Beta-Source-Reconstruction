
/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533C40 */

int __thiscall aiNPC::Activate(aiNPC *this,int param_1)

{
  if (*(int *)(this + 0x30) < 1) {
    *(undefined4 *)(this + 0x447) = 0;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffeffff | 0x80000;
    aiPLANNER::RegisterNPC(aiAttackPlanner,this);
    NotifyAIState(this);
  }
  return 1;
}




/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533C90 */

void __thiscall aiNPC::Deactivate(aiNPC *this)

{
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x10000;
  aiPLANNER::UnRegisterNPC(aiAttackPlanner,this);
  NotifyAIState(this);
  return;
}




/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533CD0 */

int __thiscall aiNPC::IsReadyActivate(aiNPC *this)

{
  if ((((*(uint *)(this + 1099) & 0x20000) == 0) && (*(int *)(this + 0x4c3) != 0)) &&
     ((*(uint *)(this + 1099) & 0x10000000) != 0)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533D00 */

int __thiscall aiNPC::CheckDeactivateCondition(aiNPC *this,int param_1)

{
  float fVar1;
  
  if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
    if (param_1 == 0) {
      if (*(float *)(this + 0x4b3) * ___real_3f666666 < *(float *)(this + 0x4af)) {
        return 1;
      }
      fVar1 = *(float *)(this + 0x4a7) * ___real_3fd9999a;
    }
    else {
      if (*(float *)(this + 0x4b3) < *(float *)(this + 0x4af)) {
        return 1;
      }
      fVar1 = *(float *)(this + 0x4a7) + *(float *)(this + 0x4a7);
    }
    if ((fVar1 < *(float *)(this + 0x3cf)) && (___real_00000000 < *(float *)(this + 0x4a7))) {
      return 1;
    }
  }
  return 0;
}




/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533DA0 */

void __thiscall aiNPC::Think(aiNPC *this)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = CheckDeactivateCondition(this,1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00533dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_ECX + 0xf8))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533DC0 */

void __thiscall aiNPC::PostThink(aiNPC *this)

{
  uint uVar1;
  int iVar2;
  
  if (((byte)this[1099] & 1) != 0) {
    *(int *)(this + 0x3ef) = *(int *)(this + 0x3ef) + 1;
    iVar2 = aiENEMY::GetMostRecentCrumbID((aiENEMY *)(this + 0x4bb));
    if (iVar2 < *(int *)(this + 0x3ef)) {
      iVar2 = aiENEMY::GetMostRecentCrumbID((aiENEMY *)(this + 0x4bb));
      *(int *)(this + 0x3ef) = iVar2;
    }
    if ((*(uint *)(this + 1099) & 8) != 0) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffffffe | 0x40;
    }
  }
  uVar1 = *(uint *)(this + 1099);
  if (((uVar1 & 0x10) != 0) && ((uVar1 & 1) != 0)) {
    *(uint *)(this + 1099) = uVar1 & 0xffffffee;
  }
  if (((*(int *)(this + 0x457) != 0) &&
      ((*(byte *)(*(int *)(*(int *)(this + 0x457) + 0x13c) + 0xb8) & 2) != 0)) &&
     (*(float *)(this + 0x46f) < *(float *)(this + 0x173) + *(float *)(this + 0x16b))) {
    if ((DAT_0095d8f8 & 1) == 0) {
      DAT_0095d8f8 = DAT_0095d8f8 | 1;
      DAT_0095d900 = 0;
      DAT_0095d901 = 0x40;
      _DAT_0095d904 = 4;
      _DAT_0095d902 = 0x10;
      atexit((_func_4879 *)&__E10);
    }
    _DAT_0095d908 = 0x459ab000;
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x4c5,&DAT_0095d900,(msgADDR *)0x0);
  }
  return;
}




/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00533EE0 */

void __thiscall aiNPC::UpdateOnServerOnly(aiNPC *this)

{
  int iVar1;
  bool bVar2;
  float local_8;
  int local_4;
  
  if ((*(int *)(this + 0x30) < 1) && (*(int *)(this + 0xbc) != 0)) {
    DecideEnemy(this);
    FillToPlayerCoords(this);
    iVar1 = aiPLANNER::GetBossHealth(aiAttackPlanner,&local_8,&local_8,&local_4);
    if (iVar1 == 0) {
      DieOfInactivity(this);
    }
    if ((*(uint *)(this + 1099) & 0x10000) != 0) {
      iVar1 = (**(code **)(*(int *)this + 0xe8))();
      if (iVar1 == 0) {
        return;
      }
      (**(code **)(*(int *)this + 0x16c))(0);
    }
    bVar2 = (*(uint *)(this + 1099) & 0x600000) == 0;
    GetPrevPositions(this);
    if (bVar2) {
      (**(code **)(*(int *)this + 0xec))();
      if ((*(uint *)(this + 1099) & 0x10000) != 0) {
        return;
      }
      SelectGoal_P(this);
      (**(code **)(*(int *)this + 0x98))();
      (**(code **)(*(int *)this + 0xb0))();
    }
    (**(code **)(*(int *)this + 0xc4))();
    ProcessPhysics(this);
    if (bVar2) {
      (**(code **)(*(int *)this + 0xa4))();
      (**(code **)(*(int *)this + 0xf0))();
      (**(code **)(*(int *)this + 0xf4))();
      return;
    }
    if ((*(uint *)(this + 1099) & 0x200000) != 0) {
      (**(code **)(*(int *)this + 0x90))();
    }
    (**(code **)(*(int *)this + 0xf4))();
  }
  return;
}




/* from: gs_shared:ai_ctrl_LOD.cpp
   addr: 00534010 */

void __thiscall aiNPC::UpdateOnServerAndClient(aiNPC *this)

{
  (**(code **)(*(int *)this + 0x74))(1);
  (**(code **)(*(int *)this + 0x88))();
  (**(code **)(*(int *)this + 0x80))();
  (**(code **)(*(int *)this + 0x84))();
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xdfbff9ff;
  return;
}

