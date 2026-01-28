
/* from: ai_bird.cpp
   addr: 004328E0 */

int __fastcall aiBirdInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_bird,0x244e5043,0x32,aiBIRD::Create,s_ai_bird,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = birdEggInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(6,(sncSOUND_DESCR_3D *)&DAT_0060a188);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxBirdInit();
  return (uint)(iVar1 != 0);
}




/* from: ai_bird.cpp
   addr: 00432930 */

entENTITY * __fastcall aiBIRD::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x6f3);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x547) = 0;
    *(undefined4 *)(this + 0x55b) = 0;
    *(undefined4 *)(this + 0x56b) = 0;
    *(undefined4 *)(this + 0x56f) = 0;
    *(undefined4 *)(this + 0x573) = 0;
    *(undefined4 *)(this + 0x57b) = 1;
    *(undefined ***)(this + 0x577) = &m3dBOX::_vftable_;
    *(undefined4 *)(this + 0x597) = 0;
    *(undefined4 *)(this + 0x59b) = 0;
    *(undefined4 *)(this + 0x59f) = 0;
    *(undefined4 *)(this + 0x5a3) = 0;
    *(undefined4 *)(this + 0x5a7) = 0;
    *(undefined4 *)(this + 0x6ef) = 2;
    *(undefined ***)(this + 0x567) = &aiAREA::_vftable_;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 4;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_bird.cpp
   addr: 004329E0 */

int __thiscall aiBIRD::SetupAniSystem(aiBIRD *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  animSYSTEM *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  animSEQ *local_4;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
    local_4 = *(animSEQ **)(paVar1 + 0x90);
  }
  iVar6 = 5;
  *(undefined4 *)(paVar1 + 0x8c) = 5;
  puVar2 = (undefined4 *)operator_new(0x2ac);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 5;
    puVar2 = puVar2 + 1;
    puVar5 = puVar2;
    do {
      puVar7 = puVar5;
      for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar5[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar2;
  _entAnimSetSeqName(paVar1,0,s_BIRD_SEQ_UNUSED);
  _entAnimSetSeqName(paVar1,1,s_BIRD_SEQ_FLY);
  _entAnimSetSeqName(paVar1,2,s_BIRD_SEQ_THROW_EGG);
  _entAnimSetSeqName(paVar1,3,s_BIRD_SEQ_DEATH);
  _entAnimSetSeqName(paVar1,4,s_BIRD_SEQ_SOAR);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,5,0), piVar3 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0xc))(2,1,1,0xffffffff);
    (**(code **)(*piVar3 + 0x10))(3,0,1,3);
    (**(code **)(*piVar3 + 4))(1,2,0,2,1);
    (**(code **)(*piVar3 + 4))(3,3,2,3,1);
    if (local_4 != (animSEQ *)0x0) {
      operator_delete(local_4 + -4);
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00432BA0 */

int __thiscall aiBIRD::ProcessINIT(aiBIRD *this,void *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  objOBJ *poVar6;
  sncCHANNEL *this_00;
  float extraout_ECX;
  float extraout_EDX;
  float fVar7;
  m3dV local_c [12];
  
  *(undefined4 *)(this + 0x16b) = 0x3fcccccd;
  *(undefined4 *)(this + 0x16f) = 0x3fcccccd;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x173) = 0x3f19999a;
  *(undefined4 *)(this + 0x153) = 0x41000000;
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  *(undefined4 *)(this + 0x15f) = 0x41a00000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x20000;
  iVar5 = aiNPC_WR_FLY::ProcessINIT((aiNPC_WR_FLY *)this,param_1);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x54b) = 0x40a00000;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0x41200000;
  fVar7 = m3dRandRange(extraout_ECX,extraout_EDX);
  *(float *)(this + 0x55f) = fVar7;
  *(undefined4 *)(this + 0x557) = 0;
  *(undefined4 *)(this + 0xd0) = 0x40e00000;
  *(undefined4 *)(this + 0xcc) = 0x40e00000;
  *(undefined4 *)(this + 0x52b) = 0x41200000;
  poVar6 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x527) = poVar6;
  if (poVar6 != (objOBJ *)0x0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    uVar3 = DAT_005d1e0c;
    uVar2 = DAT_005d1e08;
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar4 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined4 *)(this_00 + 0x7c) = uVar4;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x84) = uVar2;
      *(undefined4 *)(this_00 + 0x88) = uVar3;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar2 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar2;
    }
    *(sncCHANNEL **)(this + 0x55b) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      *(undefined4 *)(this + 0x563) = 0;
      if (((byte)this[0xb4] & 1) == 0) {
        iVar5 = 0;
        do {
          pcVar1 = s_ai_area_bird + iVar5;
          *(char *)((int)&apBuffer + iVar5) = *pcVar1;
          iVar5 = iVar5 + 1;
        } while (*pcVar1 != '\0');
        animINST::GetStr(*(animINST **)(this + 0xbc),s_AI_PROP,&s_area,(char *)&apBuffer,0x1000);
        poVar6 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),(char *)&apBuffer);
        if (poVar6 != (objOBJ *)0x0) {
          *(objOBJ **)(this + 0x59b) = poVar6;
          (**(code **)(*(int *)(this + 0x567) + 4))();
          objOBJ::SetStateProcYes(poVar6,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          *(aiBIRD **)(this + 0x563) = this + 0x567;
        }
      }
      else if (((byte)this[0x88] & 4) != 0) {
        iVar5 = *(int *)(*(int *)(this + 0x49f) + 0xd8);
        if ((iVar5 == 0) || (iVar5 == 0x94)) {
          iVar5 = 0;
        }
        *(int *)(this + 0x563) = iVar5;
      }
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 1;
      *(undefined4 *)(this + 0x373) = 0x3e800000;
      *(undefined4 *)(this + 0x377) = 0xc0400000;
      *(undefined4 *)(this + 0x37b) = 0xbe2e147b;
      *(undefined4 *)(this + 0x53f) = 0xc0800000;
      *(undefined4 *)(this + 0x497) = 0x41000000;
      *(undefined4 *)(this + 0x49b) = 0x40c00000;
      (**(code **)(*(int *)this + 0x16c))(0);
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: ai_bird.cpp
   addr: 00432EE0 */

void __thiscall aiBIRD::ProcessTERM(aiBIRD *this)

{
  *(undefined4 *)(this + 0x563) = 0;
  (**(code **)(*(int *)(this + 0x567) + 8))();
  aiMINO::ProcessTERM((aiMINO *)this);
  return;
}




/* from: ai_bird.cpp
   addr: 00432F20 */

int __thiscall aiBIRD::ProcessCDT(aiBIRD *this,cdtINFO *param_1)

{
  int iVar1;
  entENTITY *this_00;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (((*(uint *)(this + 1099) & 0x200000) != 0) && ((*(uint *)(this + 0x547) & 2) == 0)) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 2;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    iVar1 = *(int *)(this + 0x43f);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_10 = *(undefined4 *)(iVar1 + 0x50);
    aiNPC_WR::StartBlood((aiNPC_WR *)this,4,1,local_c,(m3dV *)0x0,(m3dV *)&local_18,local_c);
    this_00 = entCreate(gsScenePtr,s_sfx_bird_death,s_,(animCREATE_DATA *)0x0,(void *)0x0,0);
    if (this_00 != (entENTITY *)0x0) {
      wrsfxBIRD_DEATH::Start
                ((wrsfxBIRD_DEATH *)this_00,
                 (m3dMATR *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x3c));
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
    }
  }
  return 0;
}




/* from: ai_bird.cpp
   addr: 00432FE0 */

int __thiscall aiBIRD::ProcessCDT_FIREABLE(aiBIRD *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00433020 */

void __thiscall aiBIRD::StartDeath(aiBIRD *this,dmgDAMAGE *param_1)

{
  aiNPC_WR_FLY::StartDeath((aiNPC_WR_FLY *)this,param_1);
  if ((param_1 != (dmgDAMAGE *)0x0) && (*(float *)(param_1 + 8) < ___real_459c4000)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
  }
  return;
}




/* from: ai_bird.cpp
   addr: 00433060 */

void __thiscall aiBIRD::UpdateDead(aiBIRD *this)

{
  aiNPC::UpdateDead((aiNPC *)this);
  if (*(float *)(this + 0x49b) < *(float *)(this + 0x493)) {
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x80);
  }
  return;
}




/* from: ai_bird.cpp
   addr: 004330A0 */

void __thiscall aiBIRD::MoveToGoal(aiBIRD *this)

{
  ProcessAttack(this);
  aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 004330B0 */

void __thiscall aiBIRD::ClampGoalFrame(aiBIRD *this,float param_1,m3dV *param_2,m3dV *param_3)

{
  uint uVar1;
  m3dV *pmVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_MM2;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_48;
  float local_44;
  m3dV *local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar2 = param_3;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_3c);
  local_18 = local_3c;
  local_14 = local_38;
  local_24 = *(undefined4 *)param_3;
  local_10 = local_34;
  local_20 = *(float *)(param_3 + 4);
  local_1c = *(undefined4 *)(param_3 + 8);
  local_30 = *(float *)param_3;
  local_2c = *(float *)(param_3 + 4);
  fVar8 = (local_3c - *(float *)param_3) * (local_3c - *(float *)param_3) +
          (local_38 - *(float *)(param_3 + 4)) * (local_38 - *(float *)(param_3 + 4)) +
          (local_34 - *(float *)(param_3 + 8)) * (local_34 - *(float *)(param_3 + 8));
  local_28 = *(float *)(param_3 + 8);
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar8;
    in_MM2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar4 = PackedFloatingMUL(in_MM2,in_MM2);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar4,in_MM2);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_3 = (m3dV *)uVar4;
    FastExitMediaState();
  }
  else {
    param_3 = (m3dV *)SQRT(fVar8);
  }
  local_40 = param_3;
  aiNPC::GetClampingSpeeds((aiNPC *)this,param_1,&local_48,&local_44);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
  fVar8 = m3xzAngleVector((m3dV *)&local_c,param_2);
  if (ABS(fVar8) <= *(float *)(this + 0x15f)) {
    fVar8 = (local_30 - local_3c) * (local_30 - local_3c) +
            (local_28 - local_34) * (local_28 - local_34);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar6 = auVar7._0_4_;
      param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) *
                        fVar8);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar8;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_3 = (m3dV *)uVar4;
      FastExitMediaState();
    }
    else {
      param_3 = (m3dV *)SQRT(fVar8);
    }
    m3dClampVector_L((m3dV *)&local_3c,(m3dV *)&local_30,
                     ((float)param_3 / (float)local_40) * gsElapsedTime * local_48);
  }
  else {
    fVar8 = gsElapsedTime * local_48;
    local_30 = local_c * fVar8 + local_3c;
    local_2c = local_8 * fVar8 + local_38;
    local_28 = local_4 * fVar8 + local_34;
  }
  uVar1 = *(uint *)(this + 1099);
  local_1c = 0;
  local_24 = 0;
  local_10 = 0.0;
  local_18 = 0.0;
  fVar8 = ABS(local_20 - local_14) / (float)local_40;
  if (((uVar1 & 0x1000) != 0) && ((uVar1 & 0x2000) == 0)) {
    fVar8 = fVar8 * ___real_3f99999a;
  }
  if ((uVar1 & 4) != 0) {
    local_20 = gsElapsedTime * local_48 + local_14;
    fVar8 = ___real_3f800000;
  }
  m3dClampVector_L((m3dV *)&local_18,(m3dV *)&local_24,gsElapsedTime * fVar8 * local_48);
  *(float *)pmVar2 = local_30;
  *(float *)(pmVar2 + 8) = local_28;
  *(float *)(pmVar2 + 4) = local_20;
  if (((byte)this[0x14f] & 1) != 0) {
    local_44 = gsElapsedTime * local_44;
    fVar8 = *(float *)(this + 0x3bb);
    fVar6 = *(float *)(this + 0x3bf);
    *(float *)pmVar2 = local_44 * *(float *)(this + 0x3b7) + local_30;
    *(float *)(pmVar2 + 4) = local_44 * fVar8 + local_20;
    *(float *)(pmVar2 + 8) = local_44 * fVar6 + local_28;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00433430 */

int __thiscall aiBIRD::SelectGoal(aiBIRD *this)

{
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  float extraout_EDX_00;
  float fVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_24);
  aiENEMY::GetDir((aiENEMY *)(this + 0x4bb),(m3dV *)&local_18);
  local_14 = 0.0;
  m3dNormalize((m3dV *)&local_18);
  if ((*(uint *)(this + 1099) & 0x1000) == 0) {
    if ((*(float *)(this + 0x557) < _DAT_005d1e00) && (*(aiAREA **)(this + 0x563) != (aiAREA *)0x0))
    {
      aiAREA::GetRandomPos(*(aiAREA **)(this + 0x563),(m3dV *)(this + 0x3f3),local_c);
      fVar1 = m3dRandRange(extraout_ECX,extraout_EDX);
      *(float *)(this + 0x3f7) = fVar1 + *(float *)(this + 0x3f7);
      fVar1 = m3dRandRange(extraout_ECX_00,extraout_EDX_00);
      *(float *)(this + 0x557) = fVar1;
    }
    *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
    aiNPC_WR::CorrectGoalByWaterLevel((aiNPC_WR *)this);
    return 1;
  }
  if ((*(uint *)(this + 1099) & 0x2000) != 0) {
    *(float *)(this + 0x3f3) = local_24;
    *(float *)(this + 0x3f7) = local_20;
    *(float *)(this + 0x3fb) = local_1c;
    fVar1 = *(float *)(this + 0x3f7) + ___real_40c00000;
    *(float *)(this + 0x3ff) = local_24;
    *(float *)(this + 0x403) = local_20;
    *(float *)(this + 0x3f7) = fVar1;
    *(float *)(this + 0x407) = local_1c;
    aiNPC_WR::CorrectGoalByWaterLevel((aiNPC_WR *)this);
    return 1;
  }
  *(float *)(this + 0x3f3) = local_18 * ___real_41200000 + local_24;
  *(float *)(this + 0x3f7) = local_14 * ___real_41200000 + local_20;
  *(float *)(this + 0x3fb) = local_10 * ___real_41200000 + local_1c;
  *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7) + ___real_40c00000;
  *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
  *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
  *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
  aiNPC_WR::CorrectGoalByWaterLevel((aiNPC_WR *)this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00433610 */

int __thiscall aiBIRD::EvalAnimGoalSeq(aiBIRD *this)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [4];
  float local_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  iVar2 = 1;
  if (*(float *)(this + 0x3f7) + ___real_40000000 <= local_8) {
    iVar2 = 4;
  }
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 3;
  }
  if ((*(uint *)(this + 1099) & 0x1000) == 0) {
    return iVar2;
  }
  if (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20) != 2) {
    iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
    if (iVar1 != 0) {
      return iVar2;
    }
    if ((*(uint *)(this + 1099) & 0x10000000) != 0) {
      if ((*(uint *)(this + 1099) & 0x80000008) != 0) {
        return iVar2;
      }
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
      aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_18);
      local_28 = (local_24 - *(float *)(this + 0x3f3)) * (local_24 - *(float *)(this + 0x3f3)) +
                 (local_1c - *(float *)(this + 0x3fb)) * (local_1c - *(float *)(this + 0x3fb));
      uVar4 = extraout_MM1;
      if (m3dSimdType == 0) {
        local_28 = local_28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)local_28),ZEXT416((uint)local_28));
        fVar6 = auVar7._0_4_;
        local_28 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_28 * fVar6 * fVar6) *
                   local_28;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)local_28;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        local_28 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        local_28 = SQRT(local_28);
      }
      if ((___real_40a00000 <= local_28) ||
         (___real_40400000 <= ABS(local_20 - *(float *)(this + 0x3f7)))) {
        local_28 = (local_24 - local_18) * (local_24 - local_18) +
                   (local_1c - local_10) * (local_1c - local_10);
        if (m3dSimdType == 0) {
          local_28 = local_28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar7 = rsqrtss(ZEXT416((uint)local_28),ZEXT416((uint)local_28));
          fVar6 = auVar7._0_4_;
          local_28 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_28 * fVar6 * fVar6) *
                     local_28;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)local_28;
          uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          local_28 = (float)uVar4;
          FastExitMediaState();
        }
        else {
          local_28 = SQRT(local_28);
        }
        if (___real_41a00000 <= local_28) {
          return iVar2;
        }
        if (local_20 <= local_14 + ___real_40400000) {
          return iVar2;
        }
      }
      return 2;
    }
    return iVar2;
  }
  return iVar2;
}




/* from: ai_bird.cpp
   addr: 004338A0 */

void __thiscall aiBIRD::ProcessActionFrame(aiBIRD *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 != 0) {
    ThrowEgg(this);
    *(undefined4 *)(this + 0x54b) = 0x41200000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffcfff | 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 004338E0
   addr: 004338E0
   addr: 004338E0
   addr: 004338E0 */

void __thiscall aiCENT::GetPlayerTargetPos(aiCENT *this,m3dV *param_1)

{
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),param_1);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + ___real_3c23d70a;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00433910 */

void __thiscall aiBIRD::ProcessAttack(aiBIRD *this)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_10;
  float local_c [2];
  float local_4;
  
  if ((((*(uint *)(this + 1099) & 0x1000) == 0) && (*(float *)(this + 0x54b) < ___real_3dcccccd)) &&
     (iVar2 = aiENEMY::IsActive((aiENEMY *)(this + 0x4bb)), iVar2 != 0)) {
    *(undefined4 *)(this + 0x54f) = 0;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
  }
  if ((*(uint *)(this + 1099) & 0x1000) == 0) {
    return;
  }
  if ((*(uint *)(this + 1099) & 0x2000) == 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_c);
    if (*(float *)(this + 0x54f) <= ___real_41100000) {
      local_10 = (local_c[0] - *(float *)(this + 0x3f3)) * (local_c[0] - *(float *)(this + 0x3f3)) +
                 (local_4 - *(float *)(this + 0x3fb)) * (local_4 - *(float *)(this + 0x3fb));
      if (m3dSimdType == 0) {
        local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
        fVar6 = auVar7._0_4_;
        local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar6 * fVar6) *
                   local_10;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)local_10;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        local_10 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        local_10 = SQRT(local_10);
      }
      if (___real_40a00000 <= local_10) goto LAB_00433a6c;
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x2000;
  }
LAB_00433a6c:
  uVar1 = *(uint *)(this + 1099);
  if (((uVar1 & 0x1000) != 0) &&
     ((___real_41700000 < *(float *)(this + 0x54f) || ((uVar1 & 4) != 0)))) {
    *(undefined4 *)(this + 0x54b) = 0x41200000;
    *(uint *)(this + 1099) = uVar1 & 0xffffcfff | 1;
  }
  return;
}




/* from: ai_bird.cpp
   addr: 00433AB0 */

void __thiscall aiBIRD::UpdateTimers(aiBIRD *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float extraout_EDX_02;
  float fVar2;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54b),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x55f),gsElapsedTime);
  fVar2 = extraout_EDX_01;
  if (iVar1 != 0) {
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX_01);
    *(float *)(this + 0x55f) = fVar2;
    (**(code **)(*(int *)this + 0x70))();
    fVar2 = extraout_EDX_02;
  }
  if ((*(uint *)(this + 1099) & 0x1000) != 0) {
    *(float *)(this + 0x54f) = gsElapsedTime + *(float *)(this + 0x54f);
  }
  iVar1 = m3dUpdateTimeField((float *)(this + 0x557),fVar2);
  if (iVar1 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_bird.cpp
   addr: 00433B50 */

void __thiscall aiBIRD::ThrowEgg(aiBIRD *this)

{
  objOBJ *poVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_118 = _m3dVZero;
  local_10c = (float)_m3dVZero;
  local_114 = DAT_00963740;
  local_108 = (float)DAT_00963740;
  local_fc = DAT_005d1e04;
  local_f8 = 1;
  local_cc = 1;
  local_11c = 0;
  local_11b = 0x40;
  local_110 = DAT_00963744;
  local_104 = (float)DAT_00963744;
  local_100 = 0x3dcccccd;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0xbf800000;
  local_e0 = 0;
  local_dc = 0xffffffff;
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_d0 = 0xbf800000;
  local_11a = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_L3_2);
  if (poVar1 != (objOBJ *)0x0) {
    local_d4 = *(undefined4 *)(this + 0x8c);
    local_100 = 0x3e99999a;
    local_fc = 0x40e00000;
    local_ec = 2;
    local_f0 = 0;
    local_f4 = 0;
    local_f8 = 10;
    local_e4 = 0x41200000;
    local_e0 = 0x40800000;
    local_d8 = 3;
    objOBJ::GetOrigin(poVar1,(m3dV *)&local_bc);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_a4);
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c8);
    local_b0 = local_c8 - local_bc;
    local_ac = local_c4 - local_b8;
    local_a8 = local_c0 - local_b4;
    fVar4 = m3xzAngleVector(local_a4,(m3dV *)&local_b0);
    if (ABS(fVar4) <= ___real_42b40000) {
      local_10c = _m3dVUnitY * ___real_c1200000;
      local_108 = DAT_005f9994 * ___real_c1200000;
      local_104 = DAT_005f9998 * ___real_c1200000;
      cgmGetThrowSpeed_XZ((m3dV *)&local_bc,(m3dV *)&local_c8,17.0,local_108,(m3dV *)&local_118);
      poVar1 = poVar1 + 0x3c;
      puVar3 = local_86;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *(undefined4 *)poVar1;
        poVar1 = poVar1 + 4;
        puVar3 = puVar3 + 1;
      }
      entCreate(gsScenePtr,s_bird_egg,s_bird_egg,local_98,&local_11c,0);
    }
  }
  return;
}




/* from: ai_bird.cpp
   addr: 00433DA0 */

void __thiscall aiBIRD::FillSoundFlags(aiBIRD *this)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
    if (iVar1 == 1) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
    }
    else {
      if (iVar1 == 2) {
        *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
        return;
      }
      if (iVar1 == 3) {
        *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
        return;
      }
    }
  }
  return;
}




/* from: ai_bird.cpp
   addr: 00433DF0 */

void __thiscall aiBIRD::PlaySounds(aiBIRD *this)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  m3dV local_c [12];
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(int **)(this + 0x55b) + 4))(&DAT_0060a188,0);
      goto LAB_00433e85;
    }
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 2) != 0) {
        (**(code **)(**(int **)(this + 0x55b) + 4))(&DAT_0060a1f0,0);
        goto LAB_00433e85;
      }
      if ((uVar1 & 0x10) == 0) {
        if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) goto LAB_00433e85;
        iVar2 = (**(code **)(**(int **)(this + 0x55b) + 8))(&DAT_0060a328);
        if (iVar2 == 0) goto LAB_00433e85;
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = &DAT_0060a328;
      }
    }
    else {
      puVar3 = &DAT_0060a390;
    }
  }
  else {
    puVar3 = &DAT_0060a258;
  }
  (**(code **)(**(int **)(this + 0x55b) + 4))(puVar3,0);
LAB_00433e85:
  if (((byte)this[0xf8] & 8) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060a2c0,local_c);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_bird.cpp
   addr: 00433EC0 */

void * __thiscall scnDOMAIN::_scalar_deleting_destructor_(scnDOMAIN *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  *(undefined ***)(this + 0x10) = &m3dVOL::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ai_bird.cpp
   addr: 00433EF0 */

int __thiscall aiBIRD::IsAnimSeqGoodForFallback(aiBIRD *this)

{
  return (uint)(*(int *)(*(int *)(this + 0xbc) + 0xe0) != 3);
}




/* from: ai_bird.cpp
   addr: 00433F10 */

void * __thiscall aiBIRD::_scalar_deleting_destructor_(aiBIRD *this,uint param_1)

{
  *(undefined ***)(this + 0x567) = &scnDOMAIN::_vftable_;
  *(undefined ***)(this + 0x577) = &m3dVOL::_vftable_;
  aiNPC::~aiNPC((aiNPC *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


