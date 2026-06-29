/* from: ai_gefest.cpp
   addr: 0043D560 */

void aiGefestSndList(void)

{
  // reuses enemy sound effects as placeholder
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestSndList, satyr_being_hit, 0, 0x40000, 0.0, 1000);
  _DAT_0060b568 = 0;
  _DAT_0060b56c = 0;
  _aiGefestSndList = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestWalkStep1, cyclop_walk_step_1, 0, 0x40000, 0.0, 0);
  _DAT_0060b5d0 = 0;
  _DAT_0060b5d4 = 0;
  _aiGefestWalkStep1 = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestWalkStep2, cyclop_walk_step_2, 0, 0x40000, 0.0, 0);
  _DAT_0060b638 = 0;
  _DAT_0060b63c = 0;
  _aiGefestWalkStep2 = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestHitGround1, cyclop_hit_ground, 0, 0x40000, 0.0, 1000);
  _DAT_0060b6a0 = 0;
  _DAT_0060b6a4 = 0;
  _aiGefestHitGround1 = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestHitGround2, cyclop_hit_ground, 0, 0x40000, 0.0, 0x514);
  _DAT_0060b708 = 0;
  _DAT_0060b70c = 0;
  _aiGefestHitGround2 = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestRoar, cyclop_roar, 0, 0x40000, 0.0, 1000);
  _DAT_0060b770 = 0;
  _DAT_0060b774 = 0;
  _aiGefestRoar = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestThrow, gladiator_bulava_throw, 0, 0x40000, 0.0, 0);
  _DAT_0060b7d8 = 0;
  _DAT_0060b7dc = 0;
  _aiGefestThrow = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestDeath, cyclop_death, 0, 0x40000, 0.0, 2000);
  _DAT_0060b840 = 0;
  _DAT_0060b844 = 0;
  _aiGefestDeath = &sncSOUND_DESCR_3D::`vftable';

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiGefestPjlFlying, disko_disk_fly, 0, 0x40002, 0.0, 0);
  _DAT_0060b8a8 = &DAT_42480000;
  _DAT_0060b8ac = 0x43480000;
  _aiGefestDiskoFly = &sncSOUND_DESCR_3D::`vftable';

  // could be projectile hit sfx
  sncSOUND_DESCR_3D::sncSOUND_DESCR_3D((sncSOUND_DESCR_3D *)&_aiGefestPjlHit, mino_ax_hit, 0, 0, 0.0, 0, 10.0, 65.0);
  sncSOUND_DESCR_3D::sncSOUND_DESCR_3D((sncSOUND_DESCR_3D *)&_aiGefestPjlHit2, satyr_arrow_hit_body, 0, 0x40000, 0.0, 0, 10.0, 65.0);

  return;
}

/* from: ai_gefest.cpp
   addr: 0043D790 */

int aiGefestInit(void)

{
  int result;
  
  result = entRegisterClass(ai_gefest, $NPC, 0x32, aiGEFEST_GENERIC::Create, ai_gefest, 0);
  if (result == 0) {
    return 0;
  }
  result = entRegisterClass(pjl_gefest, FIBG, 0x32, pjlGEFEST::Create, NULL, 1);
  if (result == 0) {
    return 0;
  }
  result = wrsfxGefestInit();
  if (result == 0) {
    return 0;
  }
  result = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&_aiGefestSndList);
  if (result == 0) {
    return 0;
  }
  aiGEFEST_GENERIC::pTexScorchMark = txmMANAGER::Add(txmManager, sfx_ax_scorch_mark, 0x40003, 1);
  if (aiGEFEST_GENERIC::pTexScorchMark == NULL {
    return 0;
  }
  aiGEFEST_GENERIC::pTexCarbons = txmMANAGER::Add(txmManager, sfx_gefest_carbons ,0x40003, 1);
  if (aiGEFEST_GENERIC::pTexCarbons == NULL {
    return 0;
  }
  aiGEFEST_GENERIC::pTexCarbonExpl = txmMANAGER::Add(txmManager, sfx_gefest_carbon_expl, 0x40003, 1);
  if (aiGEFEST_GENERIC::pTexCarbonExpl == NULL {
    return 0;
  }
  aiGEFEST_GENERIC::pTexGlow = txmMANAGER::Add(txmManager, sfx_gefest_hit_glow, 0x40003, 1);
  return (uint)(aiGEFEST_GENERIC::pTexGlow != NULL;
}




/* from: ai_gefest.cpp
   addr: 0043D880 */

entENTITY * __fastcall aiGEFEST_GENERIC::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x587);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x573) = 0;
    *(undefined4 *)(this + 0x577) = 0;
    *(undefined4 *)(this + 0x57b) = 0;
    *(undefined4 *)(this + 0x57f) = 0;
    *(undefined4 *)(this + 0x583) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0x12;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_gefest.cpp
   addr: 0043D8F0 */

int __thiscall aiGEFEST_GENERIC::SetupAniSystem(aiGEFEST_GENERIC *this)

{
  animTPL *paVar1;
  animSEQ *paVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  paVar2 = *(animSEQ **)(paVar1 + 0x90);
  if (paVar2 == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
  }
  iVar7 = 8;
  *(undefined4 *)(paVar1 + 0x8c) = 8;
  puVar3 = (undefined4 *)operator_new(0x444);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 8;
    puVar3 = puVar3 + 1;
    puVar6 = puVar3;
    do {
      puVar8 = puVar6;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar6[0x20] = 2;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 0x22;
    } while (iVar7 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_GEFEST_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,1,s_GEFEST_SEQ_WALK);
  _entAnimSetSeqName(paVar1,2,s_GEFEST_SEQ_SMASH);
  _entAnimSetSeqName(paVar1,3,s_GEFEST_SEQ_THROW);
  _entAnimSetSeqName(paVar1,4,s_GEFEST_SEQ_ROAR);
  _entAnimSetSeqName(paVar1,5,s_GEFEST_SEQ_WOUNDED);
  _entAnimSetSeqName(paVar1,6,s_GEFEST_SEQ_DEATH);
  _entAnimSetSeqName(paVar1,7,s_GEFEST_SEQ_SHORTSMASH);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,8,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x10))(5,0,1,5);
    (**(code **)(*piVar4 + 0x14))(5);
    (**(code **)(*piVar4 + 0x10))(6,0,1,6);
    (**(code **)(*piVar4 + 4))(6,6,2,6,1);
    (**(code **)(*piVar4 + 4))(1,3,1,3,0);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(1,7,1,7,0);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) | 2;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x3b4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x3b4) | 1;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043DB00 */

int __thiscall aiGEFEST_GENERIC::ProcessINIT(aiGEFEST_GENERIC *this,void *param_1)

{
  undefined4 uVar1;
  sncCHANNEL *this_00;
  objOBJ *poVar2;
  
  aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x16b) = 0x4099999a;
  *(undefined4 *)(this + 0x16f) = 0x4099999a;
  *(undefined4 *)(this + 0xd0) = 0x459c4000;
  *(undefined4 *)(this + 0x197) = 0x3fe66666;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40a36e2e;
  *(undefined4 *)(this + 0x15b) = 0x42b40000;
  *(undefined4 *)(this + 0x56b) = 0x40a00000;
  *(undefined1 **)(this + 0x18b) = &DAT_42480000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x4b3) = 0x45610000;
  *(undefined4 *)(this + 0x173) = 0x41080000;
  *(undefined4 *)(this + 0x387) = 0x40400000;
  *(undefined4 *)(this + 899) = 0x41100000;
  *(undefined4 *)(this + 0x19b) = 0x41a00000;
  *(undefined4 *)(this + 0x567) = 0x3f800000;
  *(undefined4 *)(this + 0xcc) = 0x459c4000;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x55b) = 5;
  *(undefined4 *)(this + 0x54f) = 7;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x38042;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x7c) = uVar1;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x84) = 0x41f00000;
    *(undefined4 *)(this_00 + 0x88) = 0x43160000;
    *(undefined4 *)(this_00 + 0x94) = 0;
    *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
    uVar1 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar1;
  }
  *(sncCHANNEL **)(this + 0x543) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus);
  *(objOBJ **)(this + 0x56f) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_RotationPivot);
  *(objOBJ **)(this + 0x167) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar2;
  *(uint *)poVar2 = *(uint *)poVar2 | 0x200;
  scnSCENE::SetStateYesInst(gsScenePtr,*(animINST **)(this + 0xbc),8);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x20);
  StartSFX(this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043DDC0 */

void __thiscall aiGEFEST_GENERIC::ParseNameClass(aiGEFEST_GENERIC *this)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar2 = strstr(pcVar2,s__mini);
  if (pcVar2 == (char *)0x0) {
    *(undefined4 *)(this + 0x497) = 0x447a0000;
    *(undefined4 *)(this + 0x49b) = 0x4479c000;
    *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x40000;
    *(undefined4 *)(this + 0x52b) = 0x461c4000;
  }
  else {
    fVar1 = *(float *)(this + 0x153) * ___real_3fb9999a;
    *(undefined4 *)(this + 0x16b) = 0x40400000;
    *(undefined4 *)(this + 0x16f) = 0x40400000;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x400;
    *(float *)(this + 0x153) = fVar1;
    *(undefined4 *)(this + 0xd0) = 0x43c80000;
    *(undefined4 *)(this + 0xcc) = 0x43c80000;
    *(undefined4 *)(this + 0x173) = 0x40a00000;
    *(undefined4 *)(this + 0x387) = 0x40200000;
    *(undefined4 *)(this + 899) = 0x40a00000;
    *(undefined4 *)(this + 0x567) = 0x3f000000;
    animINST::Scale(*(animINST **)(this + 0xbc),0.5,0.5,0.5,2);
    *(undefined4 *)(this + 0x497) = 0x41200000;
    *(undefined4 *)(this + 0x49b) = 0x41100000;
    *(undefined4 *)(this + 0x52b) = 0x43c80000;
  }
  iVar3 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar3,0.0);
  return;
}




/* from: ai_gefest.cpp
   addr: 0043DF10 */

void __thiscall aiGEFEST_GENERIC::ProcessTERM(aiGEFEST_GENERIC *this)

{
  if (*(undefined4 **)(this + 0x573) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x573))(1);
    *(undefined4 *)(this + 0x573) = 0;
  }
  if (*(undefined4 **)(this + 0x57b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x57b))(1);
    *(undefined4 *)(this + 0x57b) = 0;
  }
  if (*(undefined4 **)(this + 0x57f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x57f))(1);
    *(undefined4 *)(this + 0x57f) = 0;
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043DF70 */

int __thiscall aiGEFEST_GENERIC::Activate(aiGEFEST_GENERIC *this,int param_1)

{
  int iVar1;
  
  if ((*(uint *)(this + 0x53f) & 0x400) == 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)this);
  }
  iVar1 = aiNPC::Activate((aiNPC *)this,param_1);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043DFA0 */

int __thiscall aiGEFEST_GENERIC::EvalAnimGoalSeq(aiGEFEST_GENERIC *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 6;
  }
  if ((*(uint *)(this + 1099) & 0x10000) != 0) {
    return 0;
  }
  iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar3 != 0) {
    fVar4 = m3dRandom();
    if (fVar4 < ___real_3f4ccccd) {
      return 0;
    }
    return 4;
  }
  uVar1 = *(uint *)(this + 0x53f);
  if ((uVar1 & 0x30) != 0) {
    if ((*(uint *)(this + 1099) & 0x200000) == 0) {
      iVar3 = 1;
      if (*(float *)(this + 0x51f) <= _DAT_005d2be0) {
        iVar3 = 5;
      }
    }
    else {
      iVar3 = 6;
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
    }
    *(uint *)(this + 0x53f) = uVar1 & 0xffffffcf;
    if (iVar3 != 1) {
      *(uint *)(this + 0x53f) = uVar1 & 0xffffffcf | 8;
    }
    *(int *)(this + 0x55b) = iVar3;
    *(uint *)(this + 0x557) = ~*(uint *)(this + 1099) >> 0x15 & 1;
    return iVar3;
  }
  if ((uVar1 & 8) != 0) {
    return *(int *)(this + 0x55b);
  }
  uVar2 = *(uint *)(this + 1099);
  if ((uVar2 & 0x1000) != 0) {
    if (*(int *)(this + 0x54f) < 0) {
      if ((uVar1 & 0x200) == 0) {
        iVar3 = 3;
      }
      else {
        iVar3 = (-(uint)((uVar1 & 0x400) != 0) & 0xfffffffb) + 7;
      }
      *(uint *)(this + 0x53f) = uVar1 & 0xfffffcff;
      *(uint *)(this + 1099) = uVar2 | 0x1000;
      *(int *)(this + 0x54f) = iVar3;
    }
    return *(int *)(this + 0x54f);
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 & 0x200) == 0) {
      iVar3 = 3;
    }
    else {
      iVar3 = (-(uint)((uVar1 & 0x400) != 0) & 0xfffffffb) + 7;
    }
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffcff;
    *(uint *)(this + 1099) = uVar2 | 0x1000;
    *(int *)(this + 0x54f) = iVar3;
    return iVar3;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043E120 */

float __thiscall aiGEFEST_GENERIC::CalcBorderForThrowAttack(aiGEFEST_GENERIC *this)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x10000000) == 0) {
    return ___real_bf800000;
  }
  if (___real_41a00000 < *(float *)(this + 0x3d7)) {
    return ___real_bf800000;
  }
  fVar2 = *(float *)(this + 0x3cf) / *(float *)(this + 0x567);
  if (((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && (*(float *)(this + 0x3d7) < ___real_41200000))
     && (___real_42200000 < fVar2)) {
    return ___real_3f800000;
  }
  if (fVar2 < ___real_420c0000) {
    return (fVar2 - ___real_41600000) * ___real_3d2f8af8;
  }
  if (___real_43960000 < fVar2) {
    return ___real_3f666666 - (fVar2 - ___real_43960000) * ___real_3c75c28f;
  }
  return ___real_3f666666;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043E1F0 */

void __thiscall aiGEFEST_GENERIC::FillAttackFlag(aiGEFEST_GENERIC *this)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar3 != 2) && (iVar3 != 7)) && (iVar3 != 3)) &&
     (((*(uint *)(this + 1099) & 0x1000) == 0 && (*(float *)(this + 0x54b) <= ___real_3c23d70a)))) {
    uVar1 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffcff;
    if ((((*(uint *)(this + 1099) & 0x10) == 0) && (*(float *)(this + 0x3d7) <= ___real_42480000))
       && (((uVar1 & 0x400) == 0 || ((*(uint *)(this + 0x51b) & 0x200) == 0)))) {
      fVar4 = *(float *)(this + 0x3cf) / *(float *)(this + 0x567);
      if ((((byte)this[0x44f] & 8) == 0) ||
         (iVar3 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(this + 0x3ff), iVar3 != 0)) {
        if (___real_3dcccccd <= fVar4) {
          fVar2 = ___real_3f333333;
          if (___real_41f00000 < fVar4) {
            fVar2 = ___real_3f333333 - (fVar4 - ___real_41f00000) * ___real_3deeeeef;
          }
        }
        else {
          fVar2 = (fVar4 - ___real_3d23d70b) * ___real_413aaaab;
        }
      }
      else {
        fVar2 = ___real_bf800000;
        if ((___real_3dcccccd < fVar4) && (fVar4 < ___real_42200000)) {
          fVar2 = ___real_3f4ccccd;
        }
      }
      *(float *)(this + 0x55f) = fVar2;
      fVar4 = CalcBorderForThrowAttack(this);
      *(float *)(this + 0x563) = fVar4;
      fVar4 = m3dRandom();
      if (fVar4 < *(float *)(this + 0x55f)) {
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
      }
      fVar4 = m3dRandom();
      if (fVar4 < *(float *)(this + 0x563)) {
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043E3A0 */

void __thiscall aiGEFEST_GENERIC::SetMovementSpeed(aiGEFEST_GENERIC *this)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    iVar2 = aiNPC::IsPivotUsable((aiNPC *)this);
    fVar1 = ___real_41a00000;
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x15b) = 0x42b40000;
      if (*(float *)(this + 0x3d7) <= fVar1) {
        return;
      }
      *(undefined4 *)(this + 0x15b) = 0x42d80001;
      return;
    }
  }
  else {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  *(undefined4 *)(this + 0x15b) = 0;
  return;
}




/* from: ai_gefest.cpp
   addr: 0043E410 */

void __thiscall aiGEFEST_GENERIC::Think(aiGEFEST_GENERIC *this)

{
  aiNPC_WR::Think((aiNPC_WR *)this);
  FillAttackFlag(this);
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 5) {
    *(undefined4 *)(this + 0x51f) = 0x41200000;
  }
  aiNPC_WR::UpdateInAreaFlags((aiNPC_WR *)this);
  return;
}




/* from: ai_gefest.cpp
   addr: 0043E440 */

int __thiscall aiGEFEST_GENERIC::SelectGoal(aiGEFEST_GENERIC *this)

{
  int iVar1;
  
  iVar1 = aiNPC_WR::SelectEscapeWhenOut((aiNPC_WR *)this);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = aiNPC::SelectGoal((aiNPC *)this);
  return iVar1;
}




/* from: ai_gefest.cpp
   addr: 0043E460 */

void __thiscall aiGEFEST_GENERIC::ProcessFRAME(aiGEFEST_GENERIC *this)

{
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  if ((*(uint *)(this + 1099) & 0x800000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0043e479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x88))();
    return;
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043E4A0 */

int __thiscall aiGEFEST_GENERIC::ProcessCDT_FIREABLE(aiGEFEST_GENERIC *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(int *)(param_1 + 4) == 0) &&
       ((iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 6 || ((8 < iVar1 && (iVar1 < 0xb)))))) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x20;
    }
    aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
    if ((*(uint *)(this + 1099) & 0x200000) != 0) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x20;
      aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)0x0);
    }
  }
  return 1;
}




/* from: ai_gefest.cpp
   addr: 0043E510 */

void __thiscall aiGEFEST_GENERIC::PlaySounds(aiGEFEST_GENERIC *this)

{
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b508,0);
  }
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b640,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b6a8,0);
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b570,0);
  }
  if ((char)this[0xf8] < '\0') {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b5d8,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b778,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b7e0,0);
  }
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b508,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b710,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_gefest.cpp
   addr: 0043E620 */

void __thiscall aiGEFEST_GENERIC::FillSoundFlags(aiGEFEST_GENERIC *this)

{
  switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
  case 0:
    *(undefined4 *)(this + 0xf8) = 0;
    break;
  case 2:
    *(undefined4 *)(this + 0xf8) = 2;
    return;
  case 3:
    *(undefined4 *)(this + 0xf8) = 8;
    return;
  case 4:
    *(undefined4 *)(this + 0xf8) = 0x100;
    return;
  case 5:
    *(undefined4 *)(this + 0xf8) = 1;
    return;
  case 6:
    *(undefined4 *)(this + 0xf8) = 0x20;
    return;
  case 7:
    *(undefined4 *)(this + 0xf8) = 4;
    return;
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043E6C0 */

void __thiscall aiGEFEST_GENERIC::ProcessActionFrame(aiGEFEST_GENERIC *this)

{
  partEMITTER_PHYS *this_00;
  int iVar1;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0xf8) = 0x40;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0xf8) = 0x80;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
    if (iVar1 == 0) goto LAB_0043e804;
  }
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x56f) + 0x3c),local_a4);
  if ((*(uint *)(this + 0x53f) & 0x400) == 0) {
    local_ac = 200.0;
    local_b0 = 20.0;
  }
  else {
    local_ac = 100.0;
    local_b0 = 10.0;
  }
  dmgDispatchExplosDamage
            ((entENTITY *)this,local_a4,local_ac,local_b0,3,-1,(cdtINFO *)0x0,0xffffffff,
             (dmgDISPATCHER *)0x0);
  wrsfxSCORCHMARK::Add
            ((float)pTexScorchMark,(float)local_a4,(txmTEXTURE *)0x40200000,(m3dV *)0x41200000,0,
             0x5343524d,0.0,0.0);
  m3dMATR::MakeLCS2WCS_VY(local_86,local_a4,&m3dVUnitY);
  local_a8 = 0x3ecccccd;
  entCreate(gsScenePtr,s_sfx_gefest_hit,s_sfx_gefest_hit,local_98,&local_a8,0);
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
LAB_0043e804:
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if (iVar1 != 0) {
    this_00 = *(partEMITTER_PHYS **)(this + 0x573);
    partEMITTER_PHYS::StopEmission(this_00);
    partEMITTER_PHYS::StartEmission(this_00);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1);
  if (iVar1 != 0) {
    if ((*(uint *)(this + 0x53f) & 0x400) == 0) {
      (**(code **)(*(int *)this + 0x1c8))(*(undefined4 *)(this + 0x56f));
    }
    else {
      (**(code **)(*(int *)this + 0x1c4))(*(undefined4 *)(this + 0x56f));
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x100;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,1);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043E8F0 */

float __thiscall aiGEFEST_GENERIC::GetAnimPlayRate(aiGEFEST_GENERIC *this)

{
  if ((((*(uint *)(this + 0x53f) & 0x400) != 0) && (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 0)) &&
     (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 4)) {
    return ___real_4039999a;
  }
  return ___real_3f800000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043E920 */

aiGEFEST_CARBONS * __thiscall
aiGEFEST_CARBONS::aiGEFEST_CARBONS(aiGEFEST_CARBONS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x32,100.0,0.7);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.8666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.7,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGEFEST_GENERIC::pTexCarbons);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar2 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_c28c0000;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f000000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xe0) = fVar2;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x200409;
  *(uint *)(this + 4) = uVar1 | 0x200459;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043EAF0 */

aiGEFEST_BOWL_CARBONS * __thiscall
aiGEFEST_BOWL_CARBONS::aiGEFEST_BOWL_CARBONS(aiGEFEST_BOWL_CARBONS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,0.3);
  *(undefined ***)this = &_vftable_;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,param_1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGEFEST_GENERIC::pTexCarbons);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar3 = param_1 * ___real_40a00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar3;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = fVar3;
  *(float *)(this + 0xe0) = param_1 * ___real_c1a00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043EC50 */

aiGEFEST_BOWL_GLOW * __thiscall
aiGEFEST_BOWL_GLOW::aiGEFEST_BOWL_GLOW(aiGEFEST_BOWL_GLOW *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,1.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  fVar2 = param_1 * ___real_41700000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.2,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGEFEST_GENERIC::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x800409;
  return this;
}




/* from: ai_gefest.cpp
   addr: 0043EDE0 */

int __thiscall aiGEFEST_GENERIC::IsArmoredObject(aiGEFEST_GENERIC *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_molot,5);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_obj2,4);
    if (iVar1 != 0) {
      iVar1 = strnicmp(param_1,s_gorshok_3,8);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* from: ai_gefest.cpp
   addr: 0043EE30 */

void __thiscall aiGEFEST_GENERIC::Explode(aiGEFEST_GENERIC *this,dmgDAMAGE *param_1,int param_2)

{
  if (*(partEMITTER_PHYS **)(this + 0x57f) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x57f));
  }
  if (*(partEMITTER_PHYS **)(this + 0x57b) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x57b));
  }
  if (*(partEMITTER_PHYS **)(this + 0x573) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x573));
  }
  aiNPC_WR::Explode((aiNPC_WR *)this,param_1,param_2);
  return;
}




/* from: ai_gefest.cpp
   addr: 0043EE80 */

void __thiscall aiGEFEST_GENERIC::Freeze(aiGEFEST_GENERIC *this)

{
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x800000;
  if (*(partEMITTER_PHYS **)(this + 0x57f) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x57f));
  }
  if (*(partEMITTER_PHYS **)(this + 0x57b) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x57b));
  }
  if (*(partEMITTER_PHYS **)(this + 0x573) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x573));
    return;
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043EED0 */

int __thiscall aiGEFEST_GENERIC::StartSFX(aiGEFEST_GENERIC *this)

{
  aiGEFEST_CARBONS *this_00;
  int iVar1;
  objOBJ *poVar2;
  aiGEFEST_BOWL_CARBONS *this_01;
  aiGEFEST_BOWL_GLOW *this_02;
  partEMITTER_PHYS *this_03;
  
  this_00 = (aiGEFEST_CARBONS *)operator_new(0x2c0);
  if (this_00 == (aiGEFEST_CARBONS *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = aiGEFEST_CARBONS::aiGEFEST_CARBONS(this_00,0.35);
  }
  *(int *)(this + 0x573) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_carbons_source);
  *(objOBJ **)(this + 0x577) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  this_01 = (aiGEFEST_BOWL_CARBONS *)operator_new(0x2c0);
  if (this_01 == (aiGEFEST_BOWL_CARBONS *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = aiGEFEST_BOWL_CARBONS::aiGEFEST_BOWL_CARBONS(this_01,0.2);
  }
  *(int *)(this + 0x57b) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_bowl_source);
  *(objOBJ **)(this + 0x583) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar1 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x57b),*(objOBJ **)(this + 0x583),-1,(m3dV *)0x0)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  this_02 = (aiGEFEST_BOWL_GLOW *)operator_new(0x2c0);
  if (this_02 == (aiGEFEST_BOWL_GLOW *)0x0) {
    this_03 = (partEMITTER_PHYS *)0x0;
  }
  else {
    this_03 = (partEMITTER_PHYS *)aiGEFEST_BOWL_GLOW::aiGEFEST_BOWL_GLOW(this_02,0.2);
  }
  *(partEMITTER_PHYS **)(this + 0x57f) = this_03;
  if (this_03 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetCS(this_03,(m3dMATR *)(*(int *)(this + 0x583) + 0x3c));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x57b));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x57f));
  return 1;
}




/* from: ai_gefest.cpp
   addr: 0043EFF0 */

void __thiscall aiGEFEST_GENERIC::UpdateSFX(aiGEFEST_GENERIC *this)

{
  int iVar1;
  m3dV local_c [12];
  
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  iVar1 = *(int *)(this + 0x573);
  if ((iVar1 != 0) && (((*(byte *)(iVar1 + 8) & 1) != 0 || (*(int *)(iVar1 + 0x48) != 0)))) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x577),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x573),local_c,(m3dV *)0x0,(m3dV *)0x0);
  }
  partSetAreaEmissionObj
            (*(partEMITTER_PHYS **)(this + 0x57b),*(objOBJ **)(this + 0x583),-1,(m3dV *)0x0);
  if (*(partEMITTER_PHYS **)(this + 0x57f) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetCS
              (*(partEMITTER_PHYS **)(this + 0x57f),(m3dMATR *)(*(int *)(this + 0x583) + 0x3c));
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043F080 */

int __thiscall aiGEFEST_GENERIC::IsAnimSeqGoodForFallback(aiGEFEST_GENERIC *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 200))();
  return (uint)(iVar1 != 6);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest.cpp
   addr: 0043F0A0 */

entENTITY * __fastcall pjlGEFEST::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a4);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlGEFEST_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_gefest.cpp
   addr: 0043F170
   addr: 0043F170
   addr: 0043F170
   addr: 0043F170 */

void * __thiscall pjlGEFEST::_scalar_deleting_destructor_(pjlGEFEST *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlGEFEST_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ai_gefest.cpp
   addr: 0043F1A0 */

int __thiscall
pjlPJL<struct_pjlGEFEST_SFX>::ProcessINIT(pjlPJL<struct_pjlGEFEST_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pjlGEFEST_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlGEFEST_SFX::StartSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
    ;
  }
  return 1;
}




/* from: ai_gefest.cpp
   addr: 0043F250 */

void __thiscall pjlPJL<struct_pjlGEFEST_SFX>::ProcessFRAME(pjlPJL<struct_pjlGEFEST_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlGEFEST_SFX::UpdateSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* from: ai_gefest.cpp
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280
   addr: 0043F280 */

void __thiscall
pjlPJL<struct_pwpMDG_PJL_SFX>::DispatchDamage(pjlPJL<struct_pwpMDG_PJL_SFX> *this,cdtINFO *param_1)

{
  if (this[0x173] != (pjlPJL<struct_pwpMDG_PJL_SFX>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x15b),
               *(float *)(this + 0x15f),*(int *)(this + 0x167),*(int *)(this + 0x163),param_1,
               *(ulong *)(this + 0x16b),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x15b),*(float *)(this + 0x15f),*(int *)(this + 0x167),
               *(int *)(this + 0x163),param_1,*(ulong *)(this + 0x16b),(dmgDISPATCHER *)0x0);
  }
  return;
}


