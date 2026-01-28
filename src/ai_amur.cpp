
/* from: ai_amur.cpp
   addr: 00430F50 */

int __fastcall aiAmurInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_amur,0x244e5043,0x32,aiAMUR_GENERIC::Create,s_ai_amur,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pjlAmurArrowInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&DAT_00609d00);
  return (uint)(iVar1 != 0);
}




/* from: ai_amur.cpp
   addr: 00430FA0 */

sncSOUND_DESCR_3D * __thiscall pjlAMUR_ARROW::GetArrowSound(pjlAMUR_ARROW *this,int param_1)

{
  if (param_1 == 1) {
    return (sncSOUND_DESCR_3D *)&DAT_00609ea0;
  }
  if (param_1 != 2) {
    return (sncSOUND_DESCR_3D *)0x0;
  }
  return (sncSOUND_DESCR_3D *)&DAT_00609e38;
}




/* from: ai_amur.cpp
   addr: 00430FC0 */

entENTITY * __fastcall aiAMUR_GENERIC::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x57f);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 10;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_amur.cpp
   addr: 00431010 */

int __thiscall aiAMUR_GENERIC::SetupAniSystem(aiAMUR_GENERIC *this)

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
  iVar7 = 7;
  *(undefined4 *)(paVar1 + 0x8c) = 7;
  puVar3 = (undefined4 *)operator_new(0x3bc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 7;
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
  _entAnimSetSeqName(paVar1,0,s_AMUR_SEQ_IDLE_FLY);
  _entAnimSetSeqName(paVar1,1,s_AMUR_SEQ_TRAN_FLY2SHOOT);
  _entAnimSetSeqName(paVar1,2,s_AMUR_SEQ_SHOOT);
  _entAnimSetSeqName(paVar1,3,s_AMUR_SEQ_TRAN_SHOOT2FLY);
  _entAnimSetSeqName(paVar1,4,s_AMUR_SEQ_WOUNDED);
  _entAnimSetSeqName(paVar1,5,s_AMUR_SEQ_START_DEATH);
  _entAnimSetSeqName(paVar1,6,s_AMUR_SEQ_DEATH_LAY);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,7,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x10))(4,0,1,4);
    (**(code **)(*piVar4 + 0x10))(5,0,1,5);
    (**(code **)(*piVar4 + 0x14))(4);
    (**(code **)(*piVar4 + 4))(5,6,0,6,1);
    (**(code **)(*piVar4 + 4))(5,5,2,5,1);
    (**(code **)(*piVar4 + 4))(6,6,2,6,1);
    (**(code **)(*piVar4 + 4))(0,1,1,1,0);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,3,1,3,0);
    (**(code **)(*piVar4 + 4))(3,0,1,0,0);
    (**(code **)(*piVar4 + 4))(0,2,1,1,0);
    (**(code **)(*piVar4 + 4))(2,0,1,3,0);
    (**(code **)(*piVar4 + 4))(2,2,1,0,1);
    (**(code **)(*piVar4 + 4))(1,2,1,3,0);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) | 1;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur.cpp
   addr: 00431270 */

int __thiscall aiAMUR_GENERIC::ProcessINIT(aiAMUR_GENERIC *this,void *param_1)

{
  undefined4 uVar1;
  sncCHANNEL *this_00;
  objOBJ *poVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_MM2;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  aiNPC_WR_FLY::ProcessINIT((aiNPC_WR_FLY *)this,param_1);
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined1 **)(this + 0x18b) = &DAT_42480000;
  *(undefined1 **)(this + 0x15f) = &DAT_42480000;
  *(undefined4 *)(this + 0xd0) = 0x40e00000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40c00000;
  *(undefined4 *)(this + 0x15b) = 0x42700000;
  *(undefined4 *)(this + 0x577) = 0x40a00000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x497) = 0x40e00000;
  *(undefined4 *)(this + 0x49b) = 0x40c00000;
  *(undefined4 *)(this + 0x4b3) = 0x42f00000;
  *(undefined4 *)(this + 0x16b) = 0x40400000;
  *(undefined4 *)(this + 0x16f) = 0x40400000;
  *(undefined4 *)(this + 0x173) = 0;
  *(undefined4 *)(this + 0x52b) = 0x41700000;
  *(undefined4 *)(this + 0xcc) = 0x40e00000;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x563) = 0;
  *(undefined4 *)(this + 0x567) = 1;
  *(undefined4 *)(this + 0x56b) = 4;
  *(undefined4 *)(this + 0x557) = 0;
  *(undefined4 *)(this + 0x55f) = 0;
  *(undefined4 *)(this + 0x55b) = 0x40000000;
  fVar8 = m3dRandom();
  fVar8 = (fVar8 + ___real_3f800000) * ___real_40c00000;
  *(float *)(this + 0x56f) = fVar8;
  fVar8 = fVar8 * fVar8 + ___real_42c80000;
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    param_1 = (void *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar8;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_1 = (void *)uVar4;
    FastExitMediaState();
  }
  else {
    param_1 = (void *)SQRT(fVar8);
  }
  *(undefined4 *)(this + 0x573) = 0xc1400000;
  *(void **)(this + 0x197) = param_1;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x8000;
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
  *(sncCHANNEL **)(this + 0x54b) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_attack);
  *(objOBJ **)(this + 0x57b) = poVar2;
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
  if ((*(uint *)(this + 1099) & 0x400000) != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0xc00;
  }
  return 1;
}




/* from: ai_amur.cpp
   addr: 004315C0 */

void __thiscall aiAMUR_GENERIC::Think(aiAMUR_GENERIC *this)

{
  if ((((byte)this[0xb4] & 1) != 0) && ((*(uint *)(this + 0x547) & 0x800) != 0)) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffff7ff;
    aiNPC_WR::OrientTowardsPlayer((aiNPC_WR *)this);
    *(undefined4 *)(this + 0x563) = 5;
  }
  if (*(float *)(this + 0x18b) < *(float *)(this + 0x3cf)) {
    *(undefined4 *)(this + 0x55f) = 0x40800000;
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffdff | 0x400;
  }
  aiNPC_WR::Think((aiNPC_WR *)this);
  return;
}




/* from: ai_amur.cpp
   addr: 00431660 */

int __thiscall aiAMUR_GENERIC::EvalAnimGoalSeq(aiAMUR_GENERIC *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return (((byte)this[0x547] & 0x80) != 0) + 5;
  }
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if ((iVar2 == 0) && (uVar1 = *(uint *)(this + 1099), (uVar1 & 0x80010000) == 0)) {
    uVar3 = *(uint *)(this + 0x547);
    if ((uVar3 & 0x30) != 0) {
      *(uint *)(this + 0x547) = uVar3 & 0xffffffcf | 8;
      uVar3 = (uVar1 & 0x200000 | 0x800000) >> 0x15;
      *(uint *)(this + 0x56b) = uVar3;
      *(uint *)(this + 0x567) = ~uVar1 >> 0x15 & 1;
      return uVar3;
    }
    if ((uVar3 & 8) != 0) {
      return *(int *)(this + 0x56b);
    }
    if ((uVar1 & 0x1001) != 0) {
      return 2;
    }
  }
  return 0;
}




/* from: ai_amur.cpp
   addr: 00431700 */

void __thiscall aiAMUR_GENERIC::StartDeath(aiAMUR_GENERIC *this,dmgDAMAGE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x43f);
  aiNPC_WR_FLY::StartDeath((aiNPC_WR_FLY *)this,param_1);
  iVar2 = *(int *)(this + 0x43f);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar2 + 0x4c) = 0xc0f47ae2;
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(this + 0x573) = *(undefined4 *)(iVar1 + 0x70);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur.cpp
   addr: 00431760 */

int __thiscall aiAMUR_GENERIC::ProcessCDT(aiAMUR_GENERIC *this,cdtINFO *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (((*(uint *)(this + 1099) & 0x200000) != 0) && (-1 < (char)*(uint *)(this + 0x547))) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffff7 | 0x80;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    iVar1 = *(int *)(this + 0x43f);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_10 = *(undefined4 *)(iVar1 + 0x50);
    aiNPC_WR::StartBlood((aiNPC_WR *)this,4,1,local_c,(m3dV *)0x0,(m3dV *)&local_18,local_c);
    uVar3 = DAT_00963744;
    uVar2 = DAT_00963740;
    iVar1 = *(int *)(this + 0x43f);
    *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
  }
  return 0;
}




/* from: ai_amur.cpp
   addr: 00431820 */

void __thiscall aiAMUR_GENERIC::ProcessActionFrame(aiAMUR_GENERIC *this)

{
  int iVar1;
  
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,0);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 == 0) {
    animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,1);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
    if (iVar1 == 0) goto LAB_00431883;
  }
  LaunchOneProjectile(this);
LAB_00431883:
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
  if ((iVar1 != 0) && (*(int *)(this + 0x567) != 0)) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffff7;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(this + 0x43f);
    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x4c) = 0xc1380000;
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(*(int *)(this + 0x43f) + 0x70) = *(undefined4 *)(this + 0x573);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,1);
  if ((iVar1 != 0) && (*(int *)(this + 0x567) != 0)) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffff7;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur.cpp
   addr: 00431940 */

int __thiscall aiAMUR_GENERIC::SelectGoal(aiAMUR_GENERIC *this)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_18);
  uVar1 = *(uint *)(this + 0x547);
  if ((uVar1 & 0x200) != 0) {
    if ((*(float *)(this + 0x557) < _DAT_005d1af0) || (*(int *)(this + 0x563) < 1)) {
      *(undefined4 *)(this + 0x563) = 0;
      *(uint *)(this + 0x547) = uVar1 & 0xfffffdff | 0x400;
    }
    uVar1 = *(uint *)(this + 1099);
    if (((((uVar1 & 0x10000000) == 0) || ((uVar1 & 8) != 0)) ||
        ((*(uint *)(this + 0x51b) & 0x200) != 0)) ||
       (((_DAT_005d1af0 < *(float *)(this + 0x553) ||
         (*(float *)(this + 0x3cf) < *(float *)(this + 0x577))) ||
        ((*(float *)(this + 0x18b) < *(float *)(this + 0x3cf) ||
         (*(float *)(this + 0x187) < *(float *)(this + 0x3d7))))))) {
      uVar1 = uVar1 & 0xffffefff;
    }
    else {
      uVar1 = uVar1 | 0x1000;
    }
    *(uint *)(this + 1099) = uVar1;
    *(uint *)(this + 1099) = uVar1 | 0x40000;
    aiNPC::SelectGoal((aiNPC *)this);
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffbffff;
    goto LAB_00431d1e;
  }
  uVar2 = *(uint *)(this + 1099);
  if (((uVar2 & 0x40000) != 0) || ((uVar1 & 0x40) == 0)) {
    if ((((uVar2 & 0x10000000) == 0) ||
        ((((uVar2 & 8) != 0 || ((*(uint *)(this + 0x51b) & 0x200) != 0)) ||
         (_DAT_005d1af0 < *(float *)(this + 0x553))))) ||
       (((*(float *)(this + 0x3cf) < *(float *)(this + 0x577) ||
         (*(float *)(this + 0x18b) < *(float *)(this + 0x3cf))) ||
        (*(float *)(this + 0x187) < *(float *)(this + 0x3d7))))) {
      uVar2 = uVar2 & 0xffffefff;
    }
    else {
      *(undefined4 *)(this + 0x563) = 1;
      uVar2 = uVar2 | 0x1000;
    }
    *(uint *)(this + 1099) = uVar2;
    aiNPC::SelectGoal((aiNPC *)this);
    goto LAB_00431d1e;
  }
  if ((uVar1 & 0x400) == 0) {
    if (((uVar2 & 1) != 0) || (*(float *)(this + 0x553) < _DAT_005d1af0)) {
      if ((((uVar2 & 0x10000000) != 0) &&
          (((((uVar2 & 8) == 0 && ((*(uint *)(this + 0x51b) & 0x200) == 0)) &&
            (*(float *)(this + 0x553) <= _DAT_005d1af0)) &&
           ((*(float *)(this + 0x577) <= *(float *)(this + 0x3cf) &&
            (*(float *)(this + 0x3cf) <= *(float *)(this + 0x18b))))))) &&
         (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187))) goto LAB_00431ba2;
      fVar3 = m3dRandom();
      if (fVar3 < ___real_3ecccccd) {
        *(undefined4 *)(this + 0x563) = 8;
        fVar3 = m3dRandom();
        fVar3 = fVar3 * ___real_40a00000 + ___real_41a00000;
        goto LAB_00431bb3;
      }
    }
    else {
      if (_DAT_005d1af0 <= *(float *)(this + 0x55b)) {
        if (local_1c == 0) goto LAB_00431d1e;
        if (local_1c == 0) goto LAB_00431bb9;
        goto LAB_00431c45;
      }
      if (((((uVar2 & 0x10000000) == 0) || ((uVar2 & 8) != 0)) ||
          (((*(uint *)(this + 0x51b) & 0x200) != 0 ||
           (((_DAT_005d1af0 < *(float *)(this + 0x553) ||
             (*(float *)(this + 0x3cf) < *(float *)(this + 0x577))) ||
            (*(float *)(this + 0x18b) < *(float *)(this + 0x3cf))))))) ||
         (*(float *)(this + 0x187) < *(float *)(this + 0x3d7))) goto LAB_00431d1e;
LAB_00431ba2:
      fVar3 = m3dRandom();
      fVar3 = (fVar3 + ___real_3f800000) * ___real_40a00000;
LAB_00431bb3:
      *(float *)(this + 0x557) = fVar3;
    }
LAB_00431bb9:
    if (*(int *)(this + 0x563) == 0) {
      *(undefined4 *)(this + 0x563) = 3;
    }
    *(undefined4 *)(this + 0x3ff) = local_18;
    *(float *)(this + 0x403) = local_14;
    *(undefined4 *)(this + 0x407) = local_10;
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x200;
  }
  else {
    *(undefined4 *)(this + 0x55b) = 0x40000000;
    *(uint *)(this + 0x547) = uVar1 & 0xfffffbff;
LAB_00431c45:
    *(undefined4 *)(this + 0x563) = 0;
    *(uint *)(this + 1099) = uVar2 & 0xffffefff;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    aiNPC::SelectGoal((aiNPC *)this);
    *(undefined4 *)(this + 0x553) = 0x40a00000;
    *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
  }
LAB_00431d1e:
  *(float *)(this + 0x3f7) = local_14 + *(float *)(this + 0x56f);
  aiNPC_WR::CorrectGoalByWaterLevel((aiNPC_WR *)this);
  return 1;
}




/* from: ai_amur.cpp
   addr: 00431D40 */

void __thiscall aiAMUR_GENERIC::ProcessFRAME(aiAMUR_GENERIC *this)

{
  aiNPC_WR_FLY::ProcessFRAME((aiNPC_WR_FLY *)this);
                    /* WARNING: Could not recover jumptable at 0x00431d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur.cpp
   addr: 00431D60 */

void __thiscall aiAMUR_GENERIC::SetMovementSpeed(aiAMUR_GENERIC *this)

{
  int iVar1;
  
  if (*(float *)(this + 0x55f) <= _DAT_005d1af0) {
    *(undefined4 *)(this + 0x153) = 0x40c00000;
  }
  else {
    *(undefined4 *)(this + 0x153) = 0x41700000;
  }
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  return;
}




/* from: ai_amur.cpp
   addr: 00431DC0 */

void __thiscall aiAMUR_GENERIC::UpdateTimers(aiAMUR_GENERIC *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float extraout_EDX_02;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x557),gsElapsedTime);
  m3dUpdateTimeField((float *)(this + 0x55b),extraout_EDX_01);
  m3dUpdateTimeField((float *)(this + 0x55f),extraout_EDX_02);
  return;
}




/* from: ai_amur.cpp
   addr: 00431E30 */

int __thiscall aiAMUR_GENERIC::ProcessCDT_FIREABLE(aiAMUR_GENERIC *this,dmgDAMAGE *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((byte)this[0x88] & 4) != 0) {
    aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
    if ((*(uint *)(this + 1099) & 0x200000) == 0) {
      iVar2 = 0x10;
      iVar4 = 0x40;
      uVar1 = *(uint *)(this + 0x547) | 0x10;
      iVar3 = 0x20;
    }
    else {
      uVar1 = *(uint *)(this + 0x547) | 0x20;
      iVar4 = 0x400;
      iVar3 = 0x200;
      iVar2 = 0x100;
    }
    *(uint *)(this + 0x547) = uVar1;
    uVar1 = m3dRandSelect(iVar2,iVar3,iVar4);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | uVar1;
  }
  return 1;
}




/* from: ai_amur.cpp
   addr: 00431EA0 */

void __thiscall aiAMUR_GENERIC::PlaySounds(aiAMUR_GENERIC *this)

{
  m3dV amStack_c [12];
  
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060a0a8,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060a040,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609d00,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609d68,0);
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609dd0,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609f08,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609f70,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x400) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_00609fd8,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060a110,amStack_c);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_amur.cpp
   addr: 00431FC0 */

void __thiscall aiAMUR_GENERIC::FillSoundFlags(aiAMUR_GENERIC *this)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 0:
    case 3:
      *(undefined4 *)(this + 0xf8) = 4;
      return;
    case 1:
    case 2:
      *(undefined4 *)(this + 0xf8) = 2;
      return;
    case 4:
      iVar1 = m3dRandSelect(0x10,0x20,0x40);
      *(int *)(this + 0xf8) = iVar1;
      return;
    case 5:
      iVar1 = m3dRandSelect(0x100,0x200,0x400);
      *(int *)(this + 0xf8) = iVar1;
      return;
    case 6:
      *(undefined4 *)(this + 0xf8) = 8;
    }
  }
  return;
}




/* from: ai_amur.cpp
   addr: 00432070 */

int __thiscall aiAMUR_GENERIC::IsArmoredObject(aiAMUR_GENERIC *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_luk1,4);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_strela2,7);
    if (iVar1 != 0) {
      iVar1 = strnicmp(param_1,s_cyl3,4);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* from: ai_amur.cpp
   addr: 004320C0 */

void __thiscall aiAMUR_GENERIC::SetLayer3State(aiAMUR_GENERIC *this,int param_1)

{
  *(uint *)(this + 0x547) = param_1 | 0x400;
  return;
}

